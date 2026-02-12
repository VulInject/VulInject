static apr_status_t ocsp_req_make(OCSP_REQUEST **pocsp_req, OCSP_CERTID *certid)
{
OCSP_REQUEST *req = NULL;
OCSP_CERTID *id_copy = NULL;
apr_status_t rv = APR_ENOMEM;

req = OCSP_REQUEST_new();
if (!req) goto cleanup;
id_copy = OCSP_CERTID_dup(certid);
if (!id_copy) goto cleanup;
if (!OCSP_request_add0_id(req, id_copy)) goto cleanup;
id_copy = NULL;
OCSP_request_add1_nonce(req, 0, -1);
rv = APR_SUCCESS;
cleanup:
if (id_copy) OCSP_CERTID_free(id_copy);
if (APR_SUCCESS != rv && req) {
OCSP_REQUEST_free(req);
req = NULL;
}
*pocsp_req = req;
return rv;
}