# $NetBSD: Makefile,v 1.4 2019/03/09 10:05:08 bsiegert Exp $

DISTNAME=	imaging-1.5.0
PKGNAME=	go-${DISTNAME}
PKGREVISION=	3
MASTER_SITES=	${MASTER_SITE_GITHUB:=disintegration/}
CATEGORIES=	graphics
GITHUB_PROJECT=	imaging
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/disintegration/imaging
COMMENT=	Simple image processing package for Go
LICENSE=	mit

GO_DIST_BASE=	${DISTNAME}
GO_SRCPATH=	github.com/disintegration/imaging

.include "../../graphics/go-image/buildlink3.mk"
.include "../../lang/go/go-package.mk"
.include "../../mk/bsd.pkg.mk"
