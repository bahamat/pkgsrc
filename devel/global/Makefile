# $NetBSD: Makefile,v 1.75 2018/12/09 18:52:23 adam Exp $

DISTNAME=	global-6.6.2
PKGREVISION=	5
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GNU:=global/}

MAINTAINER=	uebayasi@NetBSD.org
HOMEPAGE=	http://www.gnu.org/software/global/
COMMENT=	Source code tag system including web browser output
LICENSE=	gnu-gpl-v3

GNU_CONFIGURE=		YES
CONFIGURE_ARGS+=	--sysconfdir=${PKG_SYSCONFDIR:Q}
CONFIGURE_ARGS+=	--with-posix-sort=${SORT:Q}

INFO_FILES=		YES
USE_LANGUAGES=		c99
USE_LIBTOOL=		YES
USE_TOOLS+=		perl:run sort:run

CONF_FILES=	${PREFIX}/share/gtags/gtags.conf ${PKG_SYSCONFDIR}/gtags.conf

REPLACE_PYTHON+=	plugin-factory/pygments_parser.py
REPLACE_PERL+=		plugin-factory/maps2conf.pl

.include "options.mk"

.include "../../lang/python/application.mk"
.include "../../mk/curses.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
