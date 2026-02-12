int ath11k_wmi_force_fw_hang_cmd(struct ath11k *ar, u32 type, u32 delay_time_ms)
{
struct ath11k_pdev_wmi *wmi = ar->wmi;
struct wmi_force_fw_hang_cmd *cmd;
struct sk_buff *skb;
int ret, len;

len = sizeof(*cmd);

skb = ath11k_wmi_alloc_skb(wmi->wmi_ab, len);
if (!skb)
return -ENOMEM;

cmd = (struct wmi_force_fw_hang_cmd *)skb->data;
cmd->tlv_header = FIELD_PREP(WMI_TLV_TAG, WMI_TAG_FORCE_FW_HANG_CMD) |
FIELD_PREP(WMI_TLV_LEN, len - TLV_HDR_SIZE);

cmd->type = type;
cmd->delay_time_ms = delay_time_ms;

ret = ath11k_wmi_cmd_send(wmi, skb, WMI_FORCE_FW_HANG_CMDID);

if (ret) {
ath11k_warn(ar->ab, "Failed to send WMI_FORCE_FW_HANG_CMDID");
dev_kfree_skb(skb);
}
return ret;
}