FROM fedora:38 as build

RUN dnf -y install gcc gcc-c++ php-devel pam-devel libHX-devel mariadb-connector-c-devel gsoap-devel libical-devel jsoncpp-devel libuuid-devel python3-devel openldap-devel which git cmake libgsasl-devel gnutls-devel pcre-devel ncurses-devel gettext diffutils golang-bin

WORKDIR /root

RUN curl -O 'https://netcologne.dl.sourceforge.net/project/swig/swig/swig-3.0.12/swig-3.0.12.tar.gz'
RUN git clone https://github.com/openkop/vmime.git
RUN git clone https://github.com/openkop/libkcoidc.git
#RUN git clone https://github.com/openkop/kopano-core.git
RUN tar xf swig-3.0.12.tar.gz && cd swig-3.0.12 && ./configure --prefix=/usr && make -j && make install
RUN cd vmime && mkdir build && cd build && cmake -DVMIME_SENDMAIL_PATH=/usr/bin/sendmail -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_INSTALL_LIBDIR=/usr/lib64 .. && make -j && make install && make DESTDIR=/root/install install
RUN cd libkcoidc && ./bootstrap.sh && ./configure --prefix=/usr && make -j 16 && make install && make DESTDIR=/root/install install
ADD . /root/kopano-core
RUN cd kopano-core && ./bootstrap.sh && PYTHON=python3 ./configure --prefix=/usr && make -j && make DESTDIR=/root/install install

FROM fedora:38
WORKDIR /root
RUN dnf -y install php libHX mariadb mariadb-connector-c gsoap libical jsoncpp libuuid python3 openldap which libgsasl gnutls pcre ncurses python3-dateutil python3-pytz python3-tzlocal python3-bsddb3 crudini
COPY --from=build /root/install/ /
COPY docker/*.sh /root
RUN echo 'kopano:x:999:999:Kopano Groupware Suite:/dev/null:/sbin/nologin' >> /etc/passwd && \
    echo 'kopano:!:19142::::::' >> /etc/shadow && \
    echo 'kopano:x:999:' >> /etc/group && \
    cp /usr/share/doc/kopano/example-config/*.cfg /etc/kopano

