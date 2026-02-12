cntxt_entry_t*
cs_cntxt_get( Mai_t* mad, generic_cntxt_t *cntx, boolean wait )
{
cntxt_entry_t   *req_cntxt = NULL;
Status_t        status;

IB_ENTER(__func__, mad, cntx, 0, 0 );

if ((status = vs_lock(&cntx->lock)) != VSTATUS_OK) {
IB_LOG_ERRORRC("Failed to lock context rc:", status);
} else {
req_cntxt = cs_cntxt_get_nolock(mad, cntx, wait );
if ((status = vs_unlock(&cntx->lock)) != VSTATUS_OK) {
IB_LOG_ERRORRC("Failed to unlock context rc:", status);
}
}
IB_EXIT(__func__, req_cntxt );
return req_cntxt ;
}