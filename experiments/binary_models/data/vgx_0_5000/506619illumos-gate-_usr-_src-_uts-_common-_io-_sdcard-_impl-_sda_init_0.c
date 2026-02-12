sda_err_t
sda_init_ifcond(sda_slot_t *slot)
{
int		rv;
int		tries;
uint32_t	vchk;
uint32_t	resp;


vchk = R7_VHS_27_36V | R7_PATTERN;


for (tries = 0; tries < 5; tries++) {
rv = sda_init_cmd(slot, CMD_GO_IDLE, 0, R0, NULL);
if (rv != SDA_EOK) {
sda_slot_err(slot, "Failed to IDLE card");
return (rv);
}

rv = sda_init_cmd(slot, CMD_SEND_IF_COND, vchk, R7, &resp);
if (rv == SDA_EOK) {
break;
}
delay(drv_usectohz(10000));
}

if (rv != SDA_EOK) {
(void) sda_init_cmd(slot, CMD_GO_IDLE, 0, R0, NULL);
slot->s_flags &= ~SLOTF_IFCOND;

} else if (resp != vchk) {
sda_slot_err(slot, "Card voltages incompatible! (%x)", resp);
return (SDA_ENOTSUP);

} else {

slot->s_flags |= SLOTF_IFCOND;
}

return (SDA_EOK);
}