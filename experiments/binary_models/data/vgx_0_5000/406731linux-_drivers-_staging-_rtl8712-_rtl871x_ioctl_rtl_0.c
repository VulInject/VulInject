uint oid_rt_get_middle_packet_crc_hdl(struct oid_par_priv *poid_par_priv)
{
struct _adapter *padapter = poid_par_priv->adapter_context;

if (poid_par_priv->type_of_oid != QUERY_OID)
return RNDIS_STATUS_NOT_ACCEPTED;
if (poid_par_priv->information_buf_len >=  sizeof(u32)) {
*(u32 *)poid_par_priv->information_buf =
padapter->recvpriv.rx_middlepacket_crcerr;
*poid_par_priv->bytes_rw = poid_par_priv->information_buf_len;
} else {
return RNDIS_STATUS_INVALID_LENGTH;
}
return RNDIS_STATUS_SUCCESS;
}