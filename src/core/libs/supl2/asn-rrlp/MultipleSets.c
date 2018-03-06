/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#include "MultipleSets.h"

static int
memb_nbrOfSets_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_nbrOfReferenceBTSs_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_nbrOfSets_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (2..3) */,
	-1};
static asn_per_constraints_t asn_PER_memb_nbrOfSets_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  2,  3 }	/* (2..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_nbrOfReferenceBTSs_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..3) */,
	-1};
static asn_per_constraints_t asn_PER_memb_nbrOfReferenceBTSs_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (1..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MultipleSets_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MultipleSets, nbrOfSets),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_nbrOfSets_constr_2, &asn_PER_memb_nbrOfSets_constr_2,  memb_nbrOfSets_constraint_1 },
		0, 0, /* No default value */
		"nbrOfSets"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MultipleSets, nbrOfReferenceBTSs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_nbrOfReferenceBTSs_constr_3, &asn_PER_memb_nbrOfReferenceBTSs_constr_3,  memb_nbrOfReferenceBTSs_constraint_1 },
		0, 0, /* No default value */
		"nbrOfReferenceBTSs"
		},
	{ ATF_POINTER, 1, offsetof(struct MultipleSets, referenceRelation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReferenceRelation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referenceRelation"
		},
};
static const int asn_MAP_MultipleSets_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_MultipleSets_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MultipleSets_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nbrOfSets */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nbrOfReferenceBTSs */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* referenceRelation */
};
asn_SEQUENCE_specifics_t asn_SPC_MultipleSets_specs_1 = {
	sizeof(struct MultipleSets),
	offsetof(struct MultipleSets, _asn_ctx),
	asn_MAP_MultipleSets_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MultipleSets_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MultipleSets = {
	"MultipleSets",
	"MultipleSets",
	&asn_OP_SEQUENCE,
	asn_DEF_MultipleSets_tags_1,
	sizeof(asn_DEF_MultipleSets_tags_1)
		/sizeof(asn_DEF_MultipleSets_tags_1[0]), /* 1 */
	asn_DEF_MultipleSets_tags_1,	/* Same as above */
	sizeof(asn_DEF_MultipleSets_tags_1)
		/sizeof(asn_DEF_MultipleSets_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MultipleSets_1,
	3,	/* Elements count */
	&asn_SPC_MultipleSets_specs_1	/* Additional specs */
};
