static int __must_check
il4965_request_firmware(struct il_priv *il, bool first)
{
const char *name_pre = il->cfg->fw_name_pre;
char tag[8];

if (first) {
il->fw_idx = il->cfg->ucode_api_max;
sprintf(tag, "%d", il->fw_idx);
} else {
il->fw_idx--;
sprintf(tag, "%d", il->fw_idx);
}

if (il->fw_idx < il->cfg->ucode_api_min) {
IL_ERR("no suitable firmware found!\n");
return -ENOENT;
}

sprintf(il->firmware_name, "%s%s%s", name_pre, tag, ".ucode");

D_INFO("attempting to load firmware '%s'\n", il->firmware_name);

return request_firmware_nowait(THIS_MODULE, 1, il->firmware_name,
&il->pci_dev->dev, GFP_KERNEL, il,
il4965_ucode_callback);
}