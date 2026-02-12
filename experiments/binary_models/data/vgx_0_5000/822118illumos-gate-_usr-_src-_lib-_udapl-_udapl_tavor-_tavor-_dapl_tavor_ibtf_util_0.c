DAT_RETURN
dapls_ib_cqd_destroy(
IN  DAPL_HCA		*hca_ptr)
{
dapl_evd_free_t		args;
ib_cq_handle_t		cq_handle;
int			retval;

if (hca_ptr->null_ib_cq_handle != IB_INVALID_HANDLE) {

cq_handle = hca_ptr->null_ib_cq_handle;
dapl_dbg_log(DAPL_DBG_TYPE_UTIL,
"dapls_ib_cqd_destroy: cq %p\n", (void *)cq_handle);

args.evf_hkey = cq_handle->evd_hkey;

retval = ioctl(hca_ptr->ib_hca_handle->ia_fd,
DAPL_EVD_FREE, &args);
if (retval != 0) {
dapl_dbg_log(DAPL_DBG_TYPE_ERR,
"dapls_ib_cqd_destroy: EVD_FREE err:%d errno:%d\n",
retval, errno);
}

dapl_os_free(cq_handle, sizeof (struct dapls_ib_cq_handle));
hca_ptr->null_ib_cq_handle = IB_INVALID_HANDLE;
}

return (DAT_SUCCESS);
}