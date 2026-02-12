static int cm_build_mpa_frame(struct nes_cm_node *cm_node, u8 **start_buff,
u16 *buff_len, u8 *pci_mem, u8 mpa_key)
{
int ret = 0;

*start_buff = (pci_mem) ? pci_mem : &cm_node->mpa_frame_buf[0];

switch (cm_node->mpa_frame_rev) {
case IETF_MPA_V1:
*start_buff = (u8 *)*start_buff + sizeof(struct ietf_rtr_msg);
*buff_len = sizeof(struct ietf_mpa_v1) + cm_node->mpa_frame_size;
build_mpa_v1(cm_node, *start_buff, mpa_key);
break;
case IETF_MPA_V2:
*buff_len = sizeof(struct ietf_mpa_v2) + cm_node->mpa_frame_size;
build_mpa_v2(cm_node, *start_buff, mpa_key);
break;
default:
ret = -EINVAL;
}
return ret;
}