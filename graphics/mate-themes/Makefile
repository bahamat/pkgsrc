# $NetBSD: Makefile,v 1.13 2019/01/16 18:21:09 youri Exp $

.include "../../meta-pkgs/mate/Makefile.common"

DISTNAME=	mate-themes-3.22.18
CATEGORIES=	graphics
MASTER_SITES=	http://pub.mate-desktop.org/releases/themes/3.22/

COMMENT=	Icons and themes for MATE desktop

DEPENDS+=	gtk2-engines-[0-9]*:../../x11/gtk2-engines
DEPENDS+=	gtk2-engines-murrine>=0.98.0:../../x11/gtk2-engines-murrine

.include "../../graphics/icon-naming-utils/buildlink3.mk"
.include "../../x11/gtk2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
