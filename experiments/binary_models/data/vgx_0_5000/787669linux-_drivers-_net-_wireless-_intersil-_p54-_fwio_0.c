int p54_set_edcf(struct p54_common *priv)
{
struct sk_buff *skb;
struct p54_edcf *edcf;
u8 rtd;

skb = p54_alloc_skb(priv, P54_HDR_FLAG_CONTROL_OPSET, sizeof(*edcf),
P54_CONTROL_TYPE_DCFINIT, GFP_ATOMIC);
if (unlikely(!skb))
return -ENOMEM;

edcf = skb_put(skb, sizeof(*edcf));
if (priv->use_short_slot) {
edcf->slottime = 9;
edcf->sifs = 0x10;
edcf->eofpad = 0x00;
} else {
edcf->slottime = 20;
edcf->sifs = 0x0a;
edcf->eofpad = 0x06;
}

rtd = 3 * priv->coverage_class;
edcf->slottime += rtd;
edcf->round_trip_delay = cpu_to_le16(rtd);

edcf->frameburst = cpu_to_le16(0);
edcf->flags = 0;
memset(edcf->mapping, 0, sizeof(edcf->mapping));
memcpy(edcf->queue, priv->qos_params, sizeof(edcf->queue));
p54_tx(priv, skb);
return 0;
}