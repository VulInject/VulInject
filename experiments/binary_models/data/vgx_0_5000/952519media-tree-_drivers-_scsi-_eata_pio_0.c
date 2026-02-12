static int eata_pio_abort(struct scsi_cmnd *cmd)
{
unsigned int loop = 100;

DBG(DBG_ABNORM, scmd_printk(KERN_WARNING, cmd,
"eata_pio_abort called pid: 0x%p\n", cmd));

while (inb(cmd->device->host->base + HA_RAUXSTAT) & HA_ABUSY)
if (--loop == 0) {
printk(KERN_WARNING "eata_pio: abort, timeout error.\n");
return FAILED;
}
if (CD(cmd)->status == FREE) {
DBG(DBG_ABNORM, printk(KERN_WARNING "Returning: SCSI_ABORT_NOT_RUNNING\n"));
return FAILED;
}
if (CD(cmd)->status == USED) {
DBG(DBG_ABNORM, printk(KERN_WARNING "Returning: SCSI_ABORT_BUSY\n"));

return FAILED;		
}
if (CD(cmd)->status == RESET) {
printk(KERN_WARNING "eata_pio: abort, command reset error.\n");
return FAILED;
}
if (CD(cmd)->status == LOCKED) {
DBG(DBG_ABNORM, printk(KERN_WARNING "eata_pio: abort, queue slot " "locked.\n"));
return FAILED;
}
panic("eata_pio: abort: invalid slot status\n");
}