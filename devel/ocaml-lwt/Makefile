# $NetBSD: Makefile,v 1.40 2019/03/05 16:56:16 jaapb Exp $
#

.include "Makefile.common"

PKGNAME=	ocaml-${DISTNAME}
PKGREVISION= 3
CATEGORIES=	devel

MAINTAINER=	jaapb@NetBSD.org
HOMEPAGE=	http://www.ocsigen.org/
COMMENT=	Cooperative threading library for OCaml

OCAML_FINDLIB_DIRS=	lwt stublibs
DUNE_BUILD_PACKAGES=	lwt

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	-use-libev false

CFLAGS.SunOS+=	-D_POSIX_PTHREAD_SEMANTICS

do-configure:
	cd ${WRKSRC} && ocaml src/util/configure.ml ${CONFIGURE_ARGS}

.include "../../mk/ocaml.mk"
.include "../../devel/ocaml-cppo/buildlink3.mk"
.include "../../devel/ocaml-findlib/buildlink3.mk"
.include "../../devel/ocaml-migrate-parsetree/buildlink3.mk"
.include "../../devel/ocaml-ppx_tools_versioned/buildlink3.mk"
.include "../../devel/ocaml-result/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
