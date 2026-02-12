static const struct vsp1_device_info *vsp1_lookup_info(struct vsp1_device *vsp1)
{
const struct vsp1_device_info *info;
unsigned int i;
u32 model;
u32 soc;


info = of_device_get_match_data(vsp1->dev);
if (info) {
vsp1->version = VI6_IP_VERSION_VSP_SW | info->version | info->soc;
return info;
}

vsp1->version = vsp1_read(vsp1, VI6_IP_VERSION);
model = vsp1->version & VI6_IP_VERSION_MODEL_MASK;
soc = vsp1->version & VI6_IP_VERSION_SOC_MASK;

for (i = 0; i < ARRAY_SIZE(vsp1_device_infos); ++i) {
info = &vsp1_device_infos[i];

if (model == info->version && (!info->soc || soc == info->soc))
return info;
}

dev_err(vsp1->dev, "unsupported IP version 0x%08x\n", vsp1->version);

return NULL;
}