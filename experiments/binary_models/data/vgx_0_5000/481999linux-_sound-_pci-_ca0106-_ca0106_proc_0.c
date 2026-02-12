static void snd_ca0106_proc_reg_read8(struct snd_info_entry *entry, 
struct snd_info_buffer *buffer)
{
struct snd_ca0106 *emu = entry->private_data;
unsigned int value;
unsigned long flags;
int i;
snd_iprintf(buffer, "Registers:\n\n");
for(i = 0; i < 0x20; i+=1) {
spin_lock_irqsave(&emu->emu_lock, flags);
value = inb(emu->port + i);
spin_unlock_irqrestore(&emu->emu_lock, flags);
snd_iprintf(buffer, "Register %02X: %02X\n", i, value);
}
}