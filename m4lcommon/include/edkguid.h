/*
 * Copyright 2005 - 2016 Zarafa and its licensors
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef EDKGUID_H
#define EDKGUID_H

DEFINE_GUID(MSEMS_SERVICE_GUID, 0xc0a19454, 0x7f29, 0x1b10, 0xa5, 0x87, 0x08, 0x00, 0x2b, 0x2a, 0x25, 0x17);
DEFINE_GUID(MSEMS_PUBLIC_STORE_GUID, 0x70fab278, 0xf7af, 0xcd11, 0x9b, 0xc8, 0x00, 0xaa, 0x00, 0x2f, 0xc4, 0x5a);
DEFINE_GUID(MSEMS_DELEGATE_GUID, 0x0077b49e, 0xe474, 0xce11, 0x8c, 0x5e, 0x00, 0xaa, 0x00, 0x42, 0x54, 0xe2); // pbExchangeProviderDelegateGuid

DEFINE_GUID(IID_IExchangeManageStore,0x559d10b0,0xa772,0x11cd,0x9b,0xc8,0x00,0xaa,0x00,0x2f,0xc4,0x5a);
DEFINE_GUID(IID_IExchangeManageStore2,0xb6dca470,0xff3,0x11d0,0xa4,0x9,0x0,0xc0,0x4f,0xd7,0xbd,0x87);
DEFINE_GUID(IID_IExchangeManageStore3,0x166d9bc2,0xdb75,0x44a9,0x8a,0x93,0x9f,0x3f,0xfc,0x99,0x4d,0x76) ;
DEFINE_GUID(IID_IExchangeManageStore4,0x2590ff87,0xc431,0x4f9c,0xb1,0xa8,0xcd,0x69,0xd7,0x60,0xcd,0x10);
DEFINE_GUID(IID_IExchangeManageStore5,0x7907dd18,0xf141,0x4676,0xb1,0x02,0x37,0xc9,0xd9,0x36,0x34,0x30);
DEFINE_GUID(IID_IExchangeManageStore6,0xC2B40326, 0x237b, 0x483b, 0xba, 0xf1, 0x4a, 0x6f, 0x42, 0x2d, 0x2d, 0x4b);
DEFINE_GUID(IID_IExchangeManageStoreEx,0x7FE3C629, 0x4D9A, 0x4510, 0xA4, 0x79, 0x56, 0x96, 0x2B, 0x24, 0x6D, 0xC6);
DEFINE_GUID(IID_IExchangeModifyTable,0x2d734cb0,0x53fd,0x101b,0xb1,0x9d,0x08,0x00,0x2b,0x30,0x56,0xe3);
DEFINE_GUID(IID_IExchangeRuleAction,0x74bba840,0xc93a,0x11ce,0x95,0x81,0x00,0xaa,0x00,0x57,0x42,0xf7);
DEFINE_GUID(IID_IExchangeFastTransfer,0xff7db070,0xa88a,0x11cd,0x9b,0xc8,0x00,0xaa,0x00,0x2f,0xc4,0x5a);
DEFINE_GUID(IID_IExchangeExportChanges,0xa3ea9cc0,0xd1b2,0x11cd,0x80,0xfc,0x00,0xaa,0x00,0x4b,0xba,0x0b);
DEFINE_GUID(IID_IExchangeExportChanges2,0x387cebe0,0xf53f,0x11cf,0xa4,0x8f,0x00,0xc0,0x4f,0xd6,0x55,0x95);
DEFINE_GUID(IID_IExchangeExportChanges3,0x702e7f86,0x50a6,0x11d1,0xab,0xd6,0x00,0xa0,0xc9,0x05,0x66,0x0a);
DEFINE_GUID(IID_IExchangeImportHierarchyChanges,0x85a66cf0,0xd0e0,0x11cd,0x80,0xfc,0x00,0xaa,0x00,0x4b,0xba,0x0b);
DEFINE_GUID(IID_IExchangeImportContentsChanges,0xf75abfa0,0xd0e0,0x11cd,0x80,0xfc,0x00,0xaa,0x00,0x4b,0xba,0x0b);
DEFINE_GUID(IID_IExchangeChangeAdvisor,0x1e300720,0xa839,0x11cf,0xbd,0xe0,0x0,0x0,0x4c,0x75,0x31,0xe3);
DEFINE_GUID(IID_IExchangeMessageConversion,0x3532b360,0xd114,0x11cf,0xa8,0x3b,0x0,0xc0,0x4f,0xd6,0x55,0x97);
DEFINE_GUID(IID_IExchangeFavorites,0xcf4f3bc0,0xec66,0x11ce,0xb3,0x1c,0x00,0xaa,0x00,0x57,0x4c,0xc6);
DEFINE_GUID(IID_IExchangeNntpNewsfeed,0x380f41c0,0x3cdc,0x11d0,0x97,0x92,0x00,0xc0,0x4f,0xd6,0x55,0x1d);
DEFINE_GUID(IID_IExchangeBadItemCallback,0x1df85ab7,0x4d20,0x4a57,0xb1,0x70,0x2f,0x06,0x21,0x36,0xc1,0xd6);
DEFINE_GUID(IID_IExchangeMoveUserProgress,0xef2fb44a,0x8dac,0x4e4e,0xb1,0xe3,0xa3,0xb9,0x26,0x35,0x56,0x17);
DEFINE_GUID(IID_IExchangeMessageCpid0,0x0,0x1ae9,0x11cf,0x84,0xe0,0x00,0xaa,0x00,0x6b,0x4f,0xae);  
DEFINE_GUID(IID_IExchangeServer,0x25150F47,0x5734,0x11d2,0xA5,0x93,0x00,0xC0,0x4F,0x99,0x0D,0x8A);
DEFINE_GUID(IID_IStorageGroup,0x25150F46,0x5734,0x11d2,0xA5,0x93,0x00,0xC0,0x4F,0x99,0x0D,0x8A);
DEFINE_GUID(IID_IPublicStoreDB,0x25150F44,0x5734,0x11d2,0xA5,0x93,0x00,0xC0,0x4F,0x99,0x0D,0x8A);
DEFINE_GUID(IID_IPublicStoreDB2,0x25150F49,0x5734,0x11d2,0xA5,0x93,0x00,0xC0,0x4F,0x99,0x0D,0x8A);
DEFINE_GUID(IID_IMailboxStoreDB,0x25150F45,0x5734,0x11d2,0xA5,0x93,0x00,0xC0,0x4F,0x99,0x0D,0x8A);
DEFINE_GUID(IID_IMailboxStoreDB2,0x25150F4A,0x5734,0x11d2,0xA5,0x93,0x00,0xC0,0x4F,0x99,0x0D,0x8A);
DEFINE_GUID(IID_IFolderTree,0x25150F43,0x5734,0x11d2,0xA5,0x93,0x00,0xC0,0x4F,0x99,0x0D,0x8A);
DEFINE_GUID(IID_IDataSource2,0x25150F48,0x5734,0x11d2,0xA5,0x93,0x00,0xC0,0x4F,0x99,0x0D,0x8A);

#define DEFINE_EXCHEXTGUID(name,b) \
DEFINE_GUID(name,0x00020D00 | (b),0,0,0xC0,0,0,0,0,0,0,0x46)
DEFINE_EXCHEXTGUID(IID_IExchExtCallback,			0x10);
DEFINE_EXCHEXTGUID(IID_IExchExt,					0x11);
DEFINE_EXCHEXTGUID(IID_IExchExtCommands,			0x12);
DEFINE_EXCHEXTGUID(IID_IExchExtUserEvents,			0x13);
DEFINE_EXCHEXTGUID(IID_IExchExtSessionEvents,		0x14);
DEFINE_EXCHEXTGUID(IID_IExchExtMessageEvents,		0x15);
DEFINE_EXCHEXTGUID(IID_IExchExtAttachedFileEvents,	0x16);
DEFINE_EXCHEXTGUID(IID_IExchExtPropertySheets,		0x17);
DEFINE_EXCHEXTGUID(IID_IExchExtAdvancedCriteria,	0x18);
DEFINE_EXCHEXTGUID(IID_IExchExtModeless,			0x19);
DEFINE_EXCHEXTGUID(IID_IExchExtModelessCallback,	0x1a);

DEFINE_GUID(IID_IConverterSession,0x4b401570,0xb77b,0x11d0,0x9d,0xa5,0x0,0xc0,0x4f,0xd6,0x56,0x85);
DEFINE_GUID(GUID_GlobalState ,0xfbeffd93,0xb11f,0x4094,0x84,0x2b,0x96,0xdc,0xd3,0x1e,0x63,0xd1);
DEFINE_GUID(IID_IMAPIOffline,0x000672B5,0x0000,0x0000,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x46);
DEFINE_GUID(IID_IMAPIOfflineNotify,0x0317bde5,0xfc29,0x44cd,0x8d,0xcd,0x36,0x12,0x5a,0x3b,0xe9,0xec);
DEFINE_GUID(IID_IMAPIOfflineMgr,0x42175607,0xFF3E,0x4790,0xbc,0x18,0x66,0xc8,0x64,0x3e,0x64,0x24);
DEFINE_GUID(IID_IPSTX,0x4FDEEFF0,0x0319,0x11CF,0xB4,0xCF,0x00,0xAA,0x0D,0xBB,0xB6,0xE6);
DEFINE_GUID(IID_IPSTX2,0x2067A790,0x2A45,0x11D1,0xEB,0x86,0x00,0xA0,0xC9,0x0D,0xCA,0x6D);
DEFINE_GUID(IID_IPSTX3,0x55f15320,0x111b,0x11d2,0xa9,0x99,0x00,0x60,0x08,0xb0,0x5a,0xa7);
DEFINE_GUID(IID_IPSTX4,0xaa2e2092,0xac08,0x11d2,0xa2,0xf9,0x00,0x60,0xb0,0xec,0x3d,0x4f);
DEFINE_GUID(IID_IPSTX5,0x55f15322,0x111b,0x11d2,0xa9,0x99,0x00,0x60,0x08,0xb0,0x5a,0xa7);
DEFINE_GUID(IID_IPSTX6,0x55f15323,0x111b,0x11d2,0xa9,0x99,0x00,0x60,0x08,0xb0,0x5a,0xa7);
DEFINE_GUID(IID_IOSTX,0xd2d85db4,0x840f,0x49b8,0x99,0x82,0x07,0xd2,0x40,0x5e,0xc6,0xb7);
DEFINE_GUID(IID_IMAPIFolderNoProvChk,0x57D333A0,0xF589,0x4b23,0xA3,0xF9,0x85,0xF8,0x2F,0xEC,0x15,0x3C);
DEFINE_GUID(IID_IMessageNoProvChk,0xC3505457,0x7B2E,0x4c3b,0xA8,0xD6,0x6D,0xD9,0x49,0xBB,0x97,0xA1);
DEFINE_GUID(IID_IOlkErrorUnknown,0x9240a6c0,0xaf41,0x11d2,0x8c,0x3b,0x0,0x10,0x4b,0x2a,0x66,0x76);
DEFINE_GUID(IID_IOlkEnum,0x9240a6c0,0xaf41,0x11d2,0x8c,0x3b,0x0,0x10,0x4b,0x2a,0x66,0x76);
DEFINE_GUID(IID_IOlkAccountNotify,0x9240a6c3,0xaf41,0x11d2,0x8c,0x3b,0x0,0x10,0x4b,0x2a,0x66,0x76);
DEFINE_GUID(IID_IOlkAccountHelper,0x9240a6cb,0xaf41,0x11d2,0x8c,0x3b,0x0,0x10,0x4b,0x2a,0x66,0x76);
DEFINE_GUID(IID_IOlkAccountManager,0x9240a6cd,0xaf41,0x11d2,0x8c,0x3b,0x0,0x10,0x4b,0x2a,0x66,0x76);
DEFINE_GUID(IID_IOlkAccount,0x9240a6d2,0xaf41,0x11d2,0x8c,0x3b,0x0,0x10,0x4b,0x2a,0x66,0x76);

#define DEFINE_RULEEXTGUID(name,b) \
DEFINE_GUID(name,0x00020E00 | (b),0,0,0xC0,0,0,0,0,0,0,0x46)

DEFINE_RULEEXTGUID(IID_IExchangeRuleExtCallback,	0x10);
DEFINE_RULEEXTGUID(IID_IExchangeRuleExt,			0x11);

DEFINE_GUID(LIBID_aclcls,0xad2495a3,0xa76c,0x11ce,0xb9,0x67,0x0,0x20,0xaf,0x52,0x52,0x44);
DEFINE_GUID(IID_IExchangeFolderACLs,0xad2495a6,0xa76c,0x11ce,0xb9,0x67,0x0,0x20,0xaf,0x52,0x52,0x44);
DEFINE_GUID(LIBID_rulecls,0xF111A8E6,0x4462,0x11CE,0xA8,0xDE,0x00,0xAA,0x00,0x4A,0xC5,0xC1);
DEFINE_GUID(IID_IExchangeFolderRules,0xF111A8E7,0x4462,0x11CE,0xA8,0xDE,0x00,0xAA,0x00,0x4A,0xC5,0xC1);
DEFINE_GUID(GUID_ExchangeFormExts,0x77f69534,0x6b7d,0x101b,0x9f,0x0d,0x00,0xaa,0x00,0x3b,0xa9,0x05);
DEFINE_GUID(IID_IOutlookExtCallback,0x0006720d,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);

#if !defined(INITGUID) || defined(USES_IID_IMessageRaw)
DEFINE_OLEGUID(IID_IMessageRaw,0x0002038A,0,0);
#endif

#define DEFINE_PRXGUID(_name,_l) \
DEFINE_GUID(_name,(0x29F3AB10 + _l),0x554D,0x11D0,0xA9,\
   0x7C,0x00,0xA0,0xC9,0x11,0xF5,0x0A)
DEFINE_PRXGUID(IID_IProxyStoreObject,0x00000000L);
DEFINE_GUID(IID_IAttachmentSecurity,
			0xB2533636,
			0xC3F3,0x416f,0xBF,0x04,0xAE,0xFE,0x41,0xAB,0xAA,0xE2);

DEFINE_GUID(IID_IFolderSupport,0x00375ac3,0xecaf,0x4ef8,0xa5,0x27,0x34,0xf4,0x52,0xfa,0x9c,0x67);
DEFINE_OLEGUID(IID_IMSCapabilities,0x00020393,0,0);

/* Original IID_ISelectUnicode value: {05EB1EB9-E334-4EB7-AC4D-0BCEC7C6E0C1} */

#endif 
