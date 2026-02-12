void davinci_get_mac_addr(struct nvmem_device *nvmem, void *context)
{
char *mac_addr = davinci_soc_info.emac_pdata->mac_addr;
off_t offset = (off_t)context;

if (!IS_BUILTIN(CONFIG_NVMEM)) {
pr_warn("Cannot read MAC addr from EEPROM without CONFIG_NVMEM\n");
return;
}


if (nvmem_device_read(nvmem, offset, ETH_ALEN, mac_addr) == ETH_ALEN)
pr_info("Read MAC addr from EEPROM: %pM\n", mac_addr);
}