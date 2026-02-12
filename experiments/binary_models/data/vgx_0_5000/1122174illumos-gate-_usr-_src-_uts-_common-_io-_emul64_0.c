static void
emul64_i_initcap(struct emul64 *emul64)
{
uint16_t	cap, synch;
int		i;

cap = 0;
synch = 0;
for (i = 0; i < NTARGETS_WIDE; i++) {
emul64->emul64_cap[i] = cap;
emul64->emul64_synch[i] = synch;
}
EMUL64_DEBUG(emul64, SCSI_DEBUG, "default cap = 0x%x", cap);
}