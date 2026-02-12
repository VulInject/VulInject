int wfx_hif_set_template_frame(struct wfx_vif *wvif, struct sk_buff *skb,
u8 frame_type, int init_rate)
{
struct wfx_hif_mib_template_frame *arg;

WARN(skb->len > HIF_API_MAX_TEMPLATE_FRAME_SIZE, "frame is too big");
skb_push(skb, 4);
arg = (struct wfx_hif_mib_template_frame *)skb->data;
skb_pull(skb, 4);
arg->init_rate = init_rate;
arg->frame_type = frame_type;
arg->frame_length = cpu_to_le16(skb->len);
return wfx_hif_write_mib(wvif->wdev, wvif->id, HIF_MIB_ID_TEMPLATE_FRAME,
arg, sizeof(*arg) + skb->len);
}