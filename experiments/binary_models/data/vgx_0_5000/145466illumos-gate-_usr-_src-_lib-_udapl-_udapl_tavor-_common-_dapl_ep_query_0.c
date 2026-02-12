DAT_RETURN
dapl_ep_query(
IN DAT_EP_HANDLE ep_handle,
IN DAT_EP_PARAM_MASK ep_param_mask,
OUT DAT_EP_PARAM *ep_param)
{
DAPL_EP *ep_ptr;
DAT_RETURN dat_status;

dapl_dbg_log(DAPL_DBG_TYPE_API, "dapl_ep_query (%p, %x, %p)\n",
ep_handle, ep_param_mask, ep_param);

dat_status = DAT_SUCCESS;
ep_ptr = (DAPL_EP *) ep_handle;


if (DAPL_BAD_HANDLE(ep_ptr, DAPL_MAGIC_EP)) {
dat_status = DAT_ERROR(DAT_INVALID_HANDLE,
DAT_INVALID_HANDLE_EP);
goto bail;
}

if (ep_param == NULL) {
dat_status = DAT_ERROR(DAT_INVALID_PARAMETER, DAT_INVALID_ARG3);
goto bail;
}


if (ep_param_mask & DAT_EP_FIELD_ALL) {
if (ep_ptr->param.ep_state == DAT_EP_STATE_CONNECTED) {

dat_status = dapls_ib_cm_remote_addr(
(DAT_HANDLE)ep_handle, NULL,
&ep_ptr->remote_ia_address);
}
*ep_param = ep_ptr->param;
}

bail:
return (dat_status);
}