# $NetBSD: Makefile,v 1.12 2019/01/06 13:47:19 bsiegert Exp $

DISTNAME=	uriparser-0.9.1
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_GITHUB:=uriparser/}
GITHUB_RELEASE=	${DISTNAME}
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://uriparser.github.io/
COMMENT=	URI parsing library
LICENSE=	modified-bsd

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+= --disable-doc
USE_LIBTOOL=	yes
USE_TOOLS+=	gmake
USE_FEATURES=	snprintf
PKGCONFIG_OVERRIDE+= liburiparser.pc.in
TEST_TARGET=	check

LDFLAGS.SunOS+=	-lsocket -lnsl

.include "../../mk/bsd.fast.prefs.mk"

# needs "libcpptest" for test
#.if !empty(PKGSRC_RUN_TEST:M[Yy][Ee][Ss])
#USE_LANGUAGES=	c c++
#.else
CONFIGURE_ARGS+= --disable-test
#.endif

.include "../../mk/bsd.pkg.mk"
