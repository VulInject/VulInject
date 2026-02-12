int pv_sms_ack(struct sip_msg *msg, pv_param_t *param, pv_value_t *res) {
str rp_data_ack = {0, 0};


if (decode_3gpp_sms(msg) != 1) {
LM_ERR("Error getting/decoding RP-Data from request!\n");
return -1;
}


rp_data_ack.len = 13;
rp_data_ack.s = (char*)pkg_malloc(rp_data_ack.len);
if (!rp_data_ack.s) {
LM_ERR("Error allocating %d bytes!\n", rp_data_ack.len);
return -1;
}



rp_data_ack.s[0] = RP_ACK_NETWORK_TO_MS;

rp_data_ack.s[1] = rp_data->reference;

rp_data_ack.s[2] = 0x41;

rp_data_ack.s[3] = 9;


rp_data_ack.s[4] = SUBMIT;

rp_data_ack.s[5] = 0x0;

EncodeTime(&rp_data_ack.s[6]);

return pv_get_strval(msg, param, res, &rp_data_ack);
}