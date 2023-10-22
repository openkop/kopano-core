FROM fedora:38

RUN dnf -y install gcc gcc-c++ php-devel libHX-devel mariadb-connector-c-devel gsoap-devel libical-devel jsoncpp-devel libuuid-devel python3-devel openldap-devel which git cmake libgsasl-devel gnutls-devel pcre-devel ncurses-devel gettext diffutils python3-dateutil python3-pytz python3-tzlocal python3-bsddb3

WORKDIR /root

RUN curl -O 'https://netcologne.dl.sourceforge.net/project/swig/swig/swig-3.0.12/swig-3.0.12.tar.gz'
RUN git clone https://github.com/openkop/vmime.git
RUN cd vmime && mkdir build && cd build && cmake -DVMIME_SENDMAIL_PATH=/usr/bin/sendmail -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_INSTALL_LIBDIR=/usr/lib64 .. && make -j && make install
RUN tar xf swig-3.0.12.tar.gz && cd swig-3.0.12 && ./configure --prefix=/usr && make -j && make install
RUN cd kopano-core && ./bootstrap.sh && PYTHON=python3 ./configure --prefix=/usr && make -j16 && make install

