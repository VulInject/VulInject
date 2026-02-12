sda_err_t
sda_init_rca(sda_slot_t *slot)
{
int		rv;
int		tries;
uint32_t	resp;


for (tries = 0; tries < 10; tries++) {

if (slot->s_flags & SLOTF_MMC) {

rv = sda_init_cmd(slot, CMD_SEND_RCA,
(0x100 + tries) << 16, R1, NULL);
if (rv == SDA_EOK)
slot->s_rca = 0x100 + tries;
} else {

rv = sda_init_cmd(slot, CMD_SEND_RCA, 0, R6, &resp);
if (rv == SDA_EOK)
slot->s_rca = resp >> 16;
}
if ((rv == SDA_EOK) && (slot->s_rca != 0)) {
sda_slot_debug(slot, "Relative address (RCA) = %d",
slot->s_rca);
return (SDA_EOK);
}
}

sda_slot_err(slot, "Unable to negotiate a suitable RCA (%d)", rv);
return ((rv != SDA_EOK) ? rv : SDA_EINVAL);
}