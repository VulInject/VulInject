static int checksum_setup(struct xenvif_queue *queue, struct sk_buff *skb)
{
bool recalculate_partial_csum = false;


if (skb->ip_summed != CHECKSUM_PARTIAL && skb_is_gso(skb)) {
queue->stats.rx_gso_checksum_fixup++;
skb->ip_summed = CHECKSUM_PARTIAL;
recalculate_partial_csum = true;
}


if (skb->ip_summed != CHECKSUM_PARTIAL)
return 0;

return skb_checksum_setup(skb, recalculate_partial_csum);
}