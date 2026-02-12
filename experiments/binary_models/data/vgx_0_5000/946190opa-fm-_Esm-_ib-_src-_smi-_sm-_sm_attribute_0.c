Status_t SM_Set_HfiCongestionSetting(SmMaiHandle_t *fd, uint32_t amod, SmpAddr_t *addr, STL_HFI_CONGESTION_SETTING *hfics,
uint64_t mkey)
{
uint32_t bufferLength = sizeof(STL_HFI_CONGESTION_SETTING);
uint8_t  buffer[bufferLength];
Status_t status;

INCREMENT_COUNTER(smCounterSetHfiCongestionSetting);

memcpy(buffer, hfics, sizeof(STL_HFI_CONGESTION_SETTING));
BSWAP_STL_HFI_CONGESTION_SETTING((STL_HFI_CONGESTION_SETTING *)buffer);

if (sm_config.skipAttributeWrite & SM_SKIP_WRITE_CONG) {
status = VSTATUS_OK;
} else {
status = sm_set_stl_attribute(fd, STL_MCLASS_ATTRIB_ID_HFI_CONGESTION_SETTING, amod, addr, buffer, &bufferLength, mkey);
}
if (status == VSTATUS_OK) {
BSWAP_STL_HFI_CONGESTION_SETTING((STL_HFI_CONGESTION_SETTING *)buffer);
memcpy(hfics, buffer, sizeof(STL_HFI_CONGESTION_SETTING));
}

return (status);
}