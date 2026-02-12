static void umc_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
{
ide_hwif_t *mate = hwif->mate;
unsigned long uninitialized_var(flags);
const u8 pio = drive->pio_mode - XFER_PIO_0;

printk("%s: setting umc8672 to PIO mode%d (speed %d)\n",
drive->name, pio, pio_to_umc[pio]);
if (mate)
spin_lock_irqsave(&mate->lock, flags);
if (mate && mate->handler) {
printk(KERN_ERR "umc8672: other interface is busy: exiting tune_umc()\n");
} else {
current_speeds[drive->name[2] - 'a'] = pio_to_umc[pio];
umc_set_speeds(current_speeds);
}
if (mate)
spin_unlock_irqrestore(&mate->lock, flags);
}