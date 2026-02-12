CK_RV
soft_unpack_obj_attribute(uchar_t *buf, biginteger_t *key_dest,
cert_attr_t **cert_dest, ulong_t *offset, boolean_t cert)
{

CK_RV rv;
CK_ATTRIBUTE template;


template.ulValueLen = SWAP64(*(uint64_t *)buf);
buf = buf + sizeof (uint64_t);
template.pValue = malloc(template.ulValueLen);
if (template.pValue == NULL) {
return (CKR_HOST_MEMORY);
}

(void) memcpy(template.pValue, buf, template.ulValueLen);
if (cert) {
rv = get_cert_attr_from_template(cert_dest, &template);
} else {
rv = get_bigint_attr_from_template(key_dest, &template);
}

freezero(template.pValue, template.ulValueLen);
if (rv != CKR_OK) {
return (rv);
}

*offset = sizeof (uint64_t) + template.ulValueLen;
return (CKR_OK);
}