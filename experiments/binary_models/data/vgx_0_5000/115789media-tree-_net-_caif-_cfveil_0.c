struct cflayer *cfvei_create(u8 channel_id, struct dev_info *dev_info)
{
struct cfsrvl *vei = kzalloc(sizeof(struct cfsrvl), GFP_ATOMIC);
if (!vei)
return NULL;
caif_assert(offsetof(struct cfsrvl, layer) == 0);
cfsrvl_init(vei, channel_id, dev_info, true);
vei->layer.receive = cfvei_receive;
vei->layer.transmit = cfvei_transmit;
snprintf(vei->layer.name, CAIF_LAYER_NAME_SZ - 1, "vei%d", channel_id);
return &vei->layer;
}