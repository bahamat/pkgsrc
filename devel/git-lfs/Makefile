# $NetBSD: Makefile,v 1.7 2019/03/09 10:05:01 bsiegert Exp $

DISTNAME=	git-lfs-2.6.1
PKGREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GITHUB:=git-lfs/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://git-lfs.github.com/
COMMENT=	Git extension for versioning large files
LICENSE=	mit

NO_CONFIGURE=	yes
USE_LANGUAGES=	c
GO_SRCPATH=	github.com/git-lfs/git-lfs
GO_DIST_BASE=	${PKGNAME_NOREV}

INSTALLATION_DIRS=	bin

pre-build:
	cp ${WRKSRC}/lfshttp/certs_openbsd.go ${WRKSRC}/lfshttp/certs_netbsd.go
# generate content for "git-lfs --help"
	ln -sf ${GO} ${BUILDLINK_DIR}/bin/go
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} GOPATH=${WRKDIR} ${GO} generate github.com/git-lfs/git-lfs/commands
# https://github.com/git-lfs/git-lfs/pull/3377
	rm -rf ${WRKSRC}/t/git-lfs-test-server-api

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/bin/git-lfs ${DESTDIR}${PREFIX}/bin/git-lfs

.include "../../lang/go/go-package.mk"
.include "../../mk/bsd.pkg.mk"
