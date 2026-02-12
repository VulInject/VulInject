static void snd_emu_proc_ptr_reg_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer, int iobase, int offset, int length, int voices)
{
struct snd_emu10k1 *emu = entry->private_data;
unsigned long value;
int i,j;
if (offset+length > 0xa0) {
snd_iprintf(buffer, "Input values out of range\n");
return;
}
snd_iprintf(buffer, "Registers 0x%x\n", iobase);
for(i = offset; i < offset+length; i++) {
snd_iprintf(buffer, "%02X: ",i);
for (j = 0; j < voices; j++) {
if(iobase == 0)
value = snd_ptr_read(emu, 0, i, j);
else
value = snd_ptr_read(emu, 0x20, i, j);
snd_iprintf(buffer, "%08lX ", value);
}
snd_iprintf(buffer, "\n");
}
}