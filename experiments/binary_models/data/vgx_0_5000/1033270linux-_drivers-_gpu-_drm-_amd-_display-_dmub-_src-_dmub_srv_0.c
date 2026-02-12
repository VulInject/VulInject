enum dmub_status dmub_srv_wait_for_inbox0_ack(struct dmub_srv *dmub, uint32_t timeout_us)
{
uint32_t i = 0;
uint32_t ack = 0;

if (!dmub->hw_init || !dmub->hw_funcs.read_inbox0_ack_register)
return DMUB_STATUS_INVALID;

for (i = 0; i <= timeout_us; i++) {
ack = dmub->hw_funcs.read_inbox0_ack_register(dmub);
if (ack)
return DMUB_STATUS_OK;
}
return DMUB_STATUS_TIMEOUT;
}