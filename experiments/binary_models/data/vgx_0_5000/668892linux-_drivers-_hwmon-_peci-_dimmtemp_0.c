static int update_thresholds(struct peci_dimmtemp *priv, int dimm_no)
{
int dimm_order = dimm_no % priv->gen_info->dimm_idx_max;
int chan_rank = dimm_no / priv->gen_info->dimm_idx_max;
u32 data;
int ret;

if (!peci_sensor_need_update(&priv->dimm[dimm_no].thresholds.state))
return 0;

ret = priv->gen_info->read_thresholds(priv, dimm_order, chan_rank, &data);
if (ret == -ENODATA) 
return 0;
if (ret)
return ret;

priv->dimm[dimm_no].thresholds.temp_max = GET_TEMP_MAX(data) * MILLIDEGREE_PER_DEGREE;
priv->dimm[dimm_no].thresholds.temp_crit = GET_TEMP_CRIT(data) * MILLIDEGREE_PER_DEGREE;

peci_sensor_mark_updated(&priv->dimm[dimm_no].thresholds.state);

return 0;
}