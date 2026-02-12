__STATIC_INLINE ret_code_t nfc_ble_oob_name_size_calc(ble_advdata_t const * const p_advdata,
uint16_t            * const p_len)
{
ret_code_t err_code = NRF_SUCCESS;
uint16_t   device_len;

if (p_advdata->name_type == BLE_ADVDATA_SHORT_NAME)
{
device_len = p_advdata->short_name_len;
}
else
{
err_code = sd_ble_gap_device_name_get(NULL, &device_len);
}

*p_len  += ADV_LENGTH_FIELD_SIZE + ADV_AD_TYPE_FIELD_SIZE + device_len;
return err_code;
}