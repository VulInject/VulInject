static int
asn1_encode_ec_params(sc_context_t *ctx, void *params,
u8 **buf, size_t *buflen, int depth)
{
struct sc_ec_parameters *ecp = (struct sc_ec_parameters *) params;


sc_debug(ctx, SC_LOG_DEBUG_ASN1, "asn1_encode_ec_params() called");
*buf = NULL;
*buflen = 0;
if (ecp && ecp->type == 1 && ecp->der.value) { 
*buf = malloc(ecp->der.len);
if (*buf == NULL)
return SC_ERROR_OUT_OF_MEMORY;

memcpy(*buf, ecp->der.value, ecp->der.len);
*buflen = ecp->der.len;
}
else   {
sc_debug(ctx, SC_LOG_DEBUG_ASN1, "Not named curve");
}

return 0;
}