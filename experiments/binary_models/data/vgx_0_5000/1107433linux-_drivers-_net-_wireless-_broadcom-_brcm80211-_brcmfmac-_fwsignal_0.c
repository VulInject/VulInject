static int brcmf_fws_hanger_pushpkt(struct brcmf_fws_hanger *h,
struct sk_buff *pkt, u32 slot_id)
{
if (slot_id >= BRCMF_FWS_HANGER_MAXITEMS)
return -ENOENT;

if (h->items[slot_id].state != BRCMF_FWS_HANGER_ITEM_STATE_FREE) {
brcmf_err("slot is not free\n");
h->failed_to_push++;
return -EINVAL;
}

h->items[slot_id].state = BRCMF_FWS_HANGER_ITEM_STATE_INUSE;
h->items[slot_id].pkt = pkt;
h->pushed++;
return 0;
}