# $NetBSD: Makefile,v 1.15 2018/02/26 08:19:29 adam Exp $
#

GST_PLUGINS0.10_NAME=	x264
GST_PLUGINS0.10_DIRS=	ext/x264
PKGREVISION=		4

.include "../../multimedia/gst-plugins0.10-ugly/Makefile.common"

# need shared lib
BUILDLINK_API_DEPENDS.x264-devel+= x264-devel>=20071218nb1
.include "../../multimedia/x264-devel/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
