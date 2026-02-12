static int ipw2100_wx_get_essid(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
{


struct ipw2100_priv *priv = libipw_priv(dev);


if (priv->config & CFG_STATIC_ESSID || priv->status & STATUS_ASSOCIATED) {
IPW_DEBUG_WX("Getting essid: '%*pE'\n",
priv->essid_len, priv->essid);
memcpy(extra, priv->essid, priv->essid_len);
wrqu->essid.length = priv->essid_len;
wrqu->essid.flags = 1;	
} else {
IPW_DEBUG_WX("Getting essid: ANY\n");
wrqu->essid.length = 0;
wrqu->essid.flags = 0;	
}

return 0;
}