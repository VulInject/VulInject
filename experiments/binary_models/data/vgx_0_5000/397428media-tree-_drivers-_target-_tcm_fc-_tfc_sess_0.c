static int ft_prli(struct fc_rport_priv *rdata, u32 spp_len,
const struct fc_els_spp *rspp, struct fc_els_spp *spp)
{
int ret;

mutex_lock(&ft_lport_lock);
ret = ft_prli_locked(rdata, spp_len, rspp, spp);
mutex_unlock(&ft_lport_lock);
TFC_SESS_DBG(rdata->local_port, "port_id %x flags %x ret %x\n",
rdata->ids.port_id, rspp ? rspp->spp_flags : 0, ret);
return ret;
}