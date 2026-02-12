static int ray_set_frag(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
{
ray_dev_t *local = netdev_priv(dev);
int fthr = wrqu->frag.value;


if (local->card_status != CARD_AWAITING_PARAM)
return -EBUSY;


if (wrqu->frag.disabled)
fthr = 32767;
else {
if ((fthr < 256) || (fthr > 2347))	
return -EINVAL;
}
local->sparm.b5.a_frag_threshold[0] = (fthr >> 8) & 0xFF;
local->sparm.b5.a_frag_threshold[1] = fthr & 0xFF;

return -EINPROGRESS;	
}