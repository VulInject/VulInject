Status_t sm_dispatch_new_req(
sm_dispatch_t *disp, sm_dispatch_send_params_t *sendParams,
Node_t *nodep, sm_dispatch_req_t **outReq)
{
Status_t status;
sm_dispatch_req_t *req;



status = vs_pool_alloc(&sm_pool, sizeof(sm_dispatch_req_t), (void *)&req);
if (status != VSTATUS_OK) {
IB_LOG_ERROR_FMT(__func__,
"failed to allocate dispatch request (rc %d) for fd 0x%08"PRIxN", method 0x%02x, aid 0x%04x\n",
status, sendParams->fd->fdMai, sendParams->method, sendParams->aid);
return status;
}

memcpy(&req->sendParams, sendParams, sizeof(req->sendParams));
req->nodep = nodep;
req->disp = disp;
req->sweepPasscount = disp->sweepPasscount;
QListSetObj(&req->item, req);

*outReq = req;

return VSTATUS_OK;
}