# $NetBSD: buildlink3.mk,v 1.4 2018/01/07 13:04:29 rillig Exp $

BUILDLINK_TREE+=	libsecret

.if !defined(LIBSECRET_BUILDLINK3_MK)
LIBSECRET_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.libsecret+=	libsecret>=0.12
BUILDLINK_ABI_DEPENDS.libsecret?=	libsecret>=0.15nb1
BUILDLINK_PKGSRCDIR.libsecret?=		../../security/libsecret

.include "../../devel/glib2/buildlink3.mk"
.include "../../security/libgcrypt/buildlink3.mk"
.endif	# LIBSECRET_BUILDLINK3_MK

BUILDLINK_TREE+=	-libsecret
