# $NetBSD: Makefile,v 1.61 2019/01/05 00:01:32 adam Exp $

DISTNAME=	nasm-2.14.02
CATEGORIES=	devel lang
MASTER_SITES=	http://www.nasm.us/pub/nasm/releasebuilds/${PKGVERSION_NOREV}/
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.nasm.us/
COMMENT=	General-purpose x86 assembler
LICENSE=	2-clause-bsd

BUILD_DEPENDS+=	asciidoc-[0-9]*:../../textproc/asciidoc
BUILD_DEPENDS+=	xmlto-[0-9]*:../../textproc/xmlto

USE_TOOLS+=		gmake makeinfo perl
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--docdir=${PREFIX}/share/doc/nasm
CONFIGURE_ARGS+=	--htmldir=${PREFIX}/share/doc/nasm/html

BUILD_TARGET=		everything
INSTALL_TARGET=		install_everything
TEST_TARGET=		test

MAKE_ENV+=	PERL5=${PERL5:Q}

CTF_SUPPORTED=	no # https://smartos.org/bugview/OS-6510

.include "../../mk/bsd.pkg.mk"
