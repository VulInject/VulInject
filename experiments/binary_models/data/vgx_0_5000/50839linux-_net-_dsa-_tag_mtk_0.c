static struct sk_buff *mtk_tag_xmit(struct sk_buff *skb,
struct net_device *dev)
{
struct dsa_port *dp = dsa_slave_to_port(dev);
u8 xmit_tpid;
u8 *mtk_tag;

skb_set_queue_mapping(skb, dp->index);


switch (skb->protocol) {
case htons(ETH_P_8021Q):
xmit_tpid = MTK_HDR_XMIT_TAGGED_TPID_8100;
break;
case htons(ETH_P_8021AD):
xmit_tpid = MTK_HDR_XMIT_TAGGED_TPID_88A8;
break;
default:
xmit_tpid = MTK_HDR_XMIT_UNTAGGED;
skb_push(skb, MTK_HDR_LEN);
dsa_alloc_etype_header(skb, MTK_HDR_LEN);
}

mtk_tag = dsa_etype_header_pos_tx(skb);


mtk_tag[0] = xmit_tpid;
mtk_tag[1] = (1 << dp->index) & MTK_HDR_XMIT_DP_BIT_MASK;


if (xmit_tpid == MTK_HDR_XMIT_UNTAGGED) {
mtk_tag[2] = 0;
mtk_tag[3] = 0;
}

return skb;
}