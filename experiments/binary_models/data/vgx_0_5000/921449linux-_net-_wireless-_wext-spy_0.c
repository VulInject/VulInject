}
EXPORT_SYMBOL(iw_handler_get_thrspy);



static void iw_send_thrspy_event(struct net_device *	dev,
struct iw_spy_data *	spydata,
unsigned char *	address,
struct iw_quality *	wstats)
{
union iwreq_data	wrqu;
struct iw_thrspy	threshold;


wrqu.data.length = 1;
wrqu.data.flags = 0;

memcpy(threshold.addr.sa_data, address, ETH_ALEN);
threshold.addr.sa_family = ARPHRD_ETHER;

threshold.qual = *wstats;

threshold.low = spydata->spy_thr_low;
threshold.high = spydata->spy_thr_high;


wireless_send_event(dev, SIOCGIWTHRSPY, &wrqu, (char *) &threshold);
}