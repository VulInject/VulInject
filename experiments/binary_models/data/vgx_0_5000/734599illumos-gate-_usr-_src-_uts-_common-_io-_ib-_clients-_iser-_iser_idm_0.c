static idm_status_t
iser_buf_alloc(idm_buf_t *idb, uint64_t buflen)
{
iser_conn_t	*iser_conn;
iser_hca_t	*iser_hca;
iser_buf_t	*iser_buf;

if (buflen > ISER_DEFAULT_BUFLEN) {
return (IDM_STATUS_FAIL);
}

iser_conn = (iser_conn_t *)idb->idb_ic->ic_transport_private;
iser_hca = iser_conn->ic_chan->ic_hca;


iser_buf = kmem_cache_alloc(iser_hca->iser_buf_cache, KM_NOSLEEP);
if (iser_buf == NULL) {
ISER_LOG(CE_NOTE, "iser_buf_alloc: alloc failed");
return (IDM_STATUS_FAIL);
}


idb->idb_buf = iser_buf->buf;


idb->idb_buf_private = (void *)iser_buf;
idb->idb_reg_private = (void *)iser_buf->iser_mr;

return (IDM_STATUS_SUCCESS);
}