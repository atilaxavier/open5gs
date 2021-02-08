/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.4.0/38413-g40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_IntersystemSONConfigurationTransfer_H_
#define	_NGAP_IntersystemSONConfigurationTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_IntersystemSONTransferType.h"
#include "NGAP_IntersystemSONInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_IntersystemSONConfigurationTransfer */
typedef struct NGAP_IntersystemSONConfigurationTransfer {
	NGAP_IntersystemSONTransferType_t	 transferType;
	NGAP_IntersystemSONInformation_t	 intersystemSONInformation;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_IntersystemSONConfigurationTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_IntersystemSONConfigurationTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_IntersystemSONConfigurationTransfer_H_ */
#include <asn_internal.h>