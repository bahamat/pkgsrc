# $NetBSD: Makefile,v 1.2 2019/03/05 10:45:38 nia Exp $

DISTNAME=	liblcf-0.6.0
CATEGORIES=	games
MASTER_SITES=	https://easyrpg.org/downloads/player/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://easyrpg.org/
COMMENT=	Library to handle RPG Maker 2000/2003 and EasyRPG projects
LICENSE=	mit

HAS_CONFIGURE=	yes
GNU_CONFIGURE=	yes
USE_TOOLS+=	pkg-config gmake
USE_LANGUAGES+=	c c++
USE_LIBTOOL=	yes

.include "../../databases/shared-mime-info/buildlink3.mk"
.include "../../textproc/expat/buildlink3.mk"
.include "../../textproc/icu/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
