static void
nfp_flower_queue_ctl_msg(struct nfp_app *app, struct sk_buff *skb, int type)
{
struct nfp_flower_priv *priv = app->priv;
struct sk_buff_head *skb_head;

if (type == NFP_FLOWER_CMSG_TYPE_PORT_MOD)
skb_head = &priv->cmsg_skbs_high;
else
skb_head = &priv->cmsg_skbs_low;

if (skb_queue_len(skb_head) >= NFP_FLOWER_WORKQ_MAX_SKBS) {
nfp_flower_cmsg_warn(app, "Dropping queued control messages\n");
dev_kfree_skb_any(skb);
return;
}

skb_queue_tail(skb_head, skb);
schedule_work(&priv->cmsg_work);
}