$NetBSD: patch-src_include_mips_cpu_types.h,v 1.3 2019/01/04 13:35:16 ryoon Exp $

* Real MIPS MALTA has no FPU.

--- src/include/mips_cpu_types.h.orig	2018-12-07 06:29:22.000000000 +0000
+++ src/include/mips_cpu_types.h
@@ -98,10 +98,10 @@
 	{ "RM7900",	0x34 /*?*/,  0x0 /* ? */,DCOUNT,EXC4K, MMU4K,	4, 0,	64, 4,14,5,1,14,5,1,18, 6, 1 }, /*  instrs/cycle? cachelinesize? assoc = 4ways for all  */ \
 	{ "RM9000",	0x34 /*?*/,  0x0 /* ? */,DCOUNT,EXC4K, MMU4K,	4, 0,	48, 4,14,5,1,14,5,1,18, 6, 1 }, /*  This is totally bogus  */ \
 	{ "RC32334",	MIPS_RC32300,0x00,	0,	EXC32, MMU4K,  32, 1,	16, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, \
-	{ "4Kc",	0x100+MIPS_4Kc, 1,	0,	EXC32, MMU32,  32, 1,	16, 4,14,4,2,14,4,2, 0, 0, 0 }, /*  DCOUNT?  instrs/cycle? BOGUS, TODO  */ \
-	{ "4KEc",	0x100+MIPS_4KEc_R2, 1,	0,	EXC32, MMU32,  32, 2,	16, 4,14,4,2,14,4,2, 0, 0, 0 }, /*  DCOUNT?  instrs/cycle? BOGUS, TODO  */ \
-	{ "5Kc",	0x100+MIPS_5Kc, 1,	0,	EXC64, MMU64,  64, 1,	48, 4,15,5,2,15,5,2, 0, 0, 0 }, /*  DCOUNT?  instrs/cycle? BOGUS, TODO  */ \
-	{ "5KE",	0x100+MIPS_5KE, 1,	0,	EXC64, MMU64,  64, 2,	48, 4,15,5,2,15,5,2, 0, 0, 0 }, /*  DCOUNT?  instrs/cycle? BOGUS, TODO  */ \
+	{ "4Kc",	0x100+MIPS_4Kc, 1,	NOFPU,	EXC32, MMU32,  32, 1,	16, 4,14,4,2,14,4,2, 0, 0, 0 }, /*  DCOUNT?  instrs/cycle? BOGUS, TODO  */ \
+	{ "4KEc",	0x100+MIPS_4KEc_R2, 1,	NOFPU,	EXC32, MMU32,  32, 2,	16, 4,14,4,2,14,4,2, 0, 0, 0 }, /*  DCOUNT?  instrs/cycle? BOGUS, TODO  */ \
+	{ "5Kc",	0x100+MIPS_5Kc, 1,	NOFPU,	EXC64, MMU64,  64, 1,	48, 4,15,5,2,15,5,2, 0, 0, 0 }, /*  DCOUNT?  instrs/cycle? BOGUS, TODO  */ \
+	{ "5KE",	0x100+MIPS_5KE, 1,	NOFPU,	EXC64, MMU64,  64, 2,	48, 4,15,5,2,15,5,2, 0, 0, 0 }, /*  DCOUNT?  instrs/cycle? BOGUS, TODO  */ \
 	{ "24KEc",	0x100+MIPS_24KE, 1,	0,	EXC32, MMU32,  32, 2,	32, 4,15,5,2,15,5,2, 0, 0, 0 }, /*  revision level? DCOUNT? instrs/cycle? cache? BOGUS, TODO  */ \
 	{ "BCM4710",	0x000240,   0x00,       0,	EXC32, MMU32,  32, 1,	32, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /*  TODO: this is just bogus  */ \
 	{ "BCM4712",	0x000290,   0x07,       0,	EXC32, MMU32,  32, 1,	32, 2,13,4,1,12,4,1, 0, 0, 0 }, /*  2ways I, 2ways D  */ \
