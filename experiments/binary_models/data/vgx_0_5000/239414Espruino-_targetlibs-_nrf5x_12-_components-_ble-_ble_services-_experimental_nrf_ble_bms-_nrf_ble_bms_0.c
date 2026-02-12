static void on_ctrlpt_write(nrf_ble_bms_t                * p_bms,
ble_gatts_evt_write_t        * p_evt_write,
ble_gatts_authorize_params_t * p_auth_params)
{
ret_code_t           err_code;
nrf_ble_bms_ctrlpt_t ctrlpt;

err_code = ctrlpt_process(p_bms, p_evt_write->data, p_evt_write->len, &ctrlpt);
if (err_code != NRF_SUCCESS)
{
p_auth_params->gatt_status = err_code;
p_auth_params->update      = 0;

return;
}

p_auth_params->gatt_status = BLE_GATT_STATUS_SUCCESS;
p_auth_params->update      = 1;

NRF_LOG_INFO("Control point write: Success\r\n");


ctrlpt_execute(p_bms, ctrlpt.op_code);
}