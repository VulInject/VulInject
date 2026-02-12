static uint32_t glucose_feature_char_add(nrf_ble_cgms_t * p_cgms)
{
uint8_t               init_value_len;
uint8_t               encoded_initial_feature[NRF_BLE_CGMS_FEATURE_LEN];
ble_add_char_params_t add_char_params;

memset(&add_char_params, 0, sizeof(add_char_params));

init_value_len = encode_feature_location_type(encoded_initial_feature, &(p_cgms->feature));

add_char_params.uuid         = BLE_UUID_CGM_FEATURE;
add_char_params.max_len      = init_value_len;
add_char_params.init_len     = init_value_len;
add_char_params.p_init_value = encoded_initial_feature;
add_char_params.read_access  = SEC_JUST_WORKS;
add_char_params.write_access = SEC_NO_ACCESS;


return characteristic_add(p_cgms->service_handle,
&add_char_params,
&p_cgms->char_handles.feature);
}