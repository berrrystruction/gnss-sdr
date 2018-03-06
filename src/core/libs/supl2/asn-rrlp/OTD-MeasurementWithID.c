/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#include "OTD-MeasurementWithID.h"

asn_TYPE_member_t asn_MBR_OTD_MeasurementWithID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OTD_MeasurementWithID, neighborIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NeighborIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighborIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OTD_MeasurementWithID, nborTimeSlot),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ModuloTimeSlot,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nborTimeSlot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OTD_MeasurementWithID, eotdQuality),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EOTDQuality,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eotdQuality"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OTD_MeasurementWithID, otdValue),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OTDValue,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otdValue"
		},
};
static const ber_tlv_tag_t asn_DEF_OTD_MeasurementWithID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OTD_MeasurementWithID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* neighborIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nborTimeSlot */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* eotdQuality */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* otdValue */
};
asn_SEQUENCE_specifics_t asn_SPC_OTD_MeasurementWithID_specs_1 = {
	sizeof(struct OTD_MeasurementWithID),
	offsetof(struct OTD_MeasurementWithID, _asn_ctx),
	asn_MAP_OTD_MeasurementWithID_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_OTD_MeasurementWithID = {
	"OTD-MeasurementWithID",
	"OTD-MeasurementWithID",
	&asn_OP_SEQUENCE,
	asn_DEF_OTD_MeasurementWithID_tags_1,
	sizeof(asn_DEF_OTD_MeasurementWithID_tags_1)
		/sizeof(asn_DEF_OTD_MeasurementWithID_tags_1[0]), /* 1 */
	asn_DEF_OTD_MeasurementWithID_tags_1,	/* Same as above */
	sizeof(asn_DEF_OTD_MeasurementWithID_tags_1)
		/sizeof(asn_DEF_OTD_MeasurementWithID_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_OTD_MeasurementWithID_1,
	4,	/* Elements count */
	&asn_SPC_OTD_MeasurementWithID_specs_1	/* Additional specs */
};
