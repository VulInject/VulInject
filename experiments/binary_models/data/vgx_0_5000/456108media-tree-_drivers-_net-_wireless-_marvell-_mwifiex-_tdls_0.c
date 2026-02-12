static void
mwifiex_add_wmm_info_ie(struct mwifiex_private *priv, struct sk_buff *skb,
u8 qosinfo)
{
u8 *buf;

buf = (void *)skb_put(skb, MWIFIEX_TDLS_WMM_INFO_SIZE +
sizeof(struct ieee_types_header));

*buf++ = WLAN_EID_VENDOR_SPECIFIC;
*buf++ = 7; 
*buf++ = 0x00; 
*buf++ = 0x50;
*buf++ = 0xf2;
*buf++ = 2; 
*buf++ = 0; 
*buf++ = 1; 
*buf++ = qosinfo; 
}