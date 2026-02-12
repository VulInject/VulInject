static ret_code_t nfc_ep_oob_bluetooth_device_address_encode(uint8_t  * const p_encoded_data,
uint16_t         max_len)
{
ret_code_t      err_code = NRF_SUCCESS;
ble_gap_addr_t  device_address;

memset(&device_address, 0x00, sizeof(device_address));

if (NFC_EP_OOB_REC_GAP_ADDR_LEN > max_len)
{
return NRF_ERROR_NO_MEM;
}


err_code = sd_ble_gap_address_get(&device_address);
if (err_code != NRF_SUCCESS)
{
return err_code;
}

err_code = sd_ble_gap_addr_get(&device_address);
if (err_code != NRF_SUCCESS)
{
return err_code;
}


memcpy(p_encoded_data, device_address.addr, NFC_EP_OOB_REC_GAP_ADDR_LEN);

return NRF_SUCCESS;
}