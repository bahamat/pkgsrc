# $NetBSD: Makefile,v 1.13 2019/03/06 07:34:13 gutteridge Exp $

.include "../../meta-pkgs/mate/Makefile.common"

DISTNAME=	mate-sensors-applet-${VERSION}
CATEGORIES=	sysutils

COMMENT=	MATE Sensors applets

TOOL_DEPENDS+=	libxslt-[0-9]*:../../textproc/libxslt # for xsltproc

PLIST_VARS+=	netbsd
.if ${OPSYS} == "NetBSD"
CONFIGURE_ARGS+=	--enable-netbsd
PLIST.netbsd=	yes
.endif

.include "../../devel/glib2/schemas.mk"

.include "../../x11/mate-panel/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../graphics/cairo/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../sysutils/libnotify/buildlink3.mk"
.include "../../mk/dlopen.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
