static uint32_t dfu_pkt_char_add(ble_dfu_t * const p_dfu)
{
ble_gatts_char_md_t char_md             = {{0}};
ble_gatts_attr_t    attr_char_value     = {0};
ble_gatts_attr_md_t attr_md             = {{0}};
ble_uuid_t          char_uuid;

char_md.char_props.write_wo_resp = 1;

char_uuid.type = p_dfu->uuid_type;
char_uuid.uuid = BLE_DFU_PKT_CHAR_UUID;

BLE_GAP_CONN_SEC_MODE_SET_NO_ACCESS(&attr_md.read_perm);
BLE_GAP_CONN_SEC_MODE_SET_OPEN(&attr_md.write_perm);

attr_md.vloc    = BLE_GATTS_VLOC_STACK;
attr_md.vlen    = 1;

attr_char_value.p_uuid    = &char_uuid;
attr_char_value.p_attr_md = &attr_md;
attr_char_value.max_len   = MAX_DFU_PKT_LEN;
attr_char_value.p_value   = NULL;

return sd_ble_gatts_characteristic_add(p_dfu->service_handle,
&char_md,
&attr_char_value,
&p_dfu->dfu_pkt_handles);
}