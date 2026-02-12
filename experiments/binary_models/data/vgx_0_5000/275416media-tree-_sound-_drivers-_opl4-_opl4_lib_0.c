void snd_opl4_read_memory(struct snd_opl4 *opl4, char *buf, int offset, int size)
{
unsigned long flags;
u8 memcfg;

spin_lock_irqsave(&opl4->reg_lock, flags);

memcfg = snd_opl4_read(opl4, OPL4_REG_MEMORY_CONFIGURATION);
snd_opl4_write(opl4, OPL4_REG_MEMORY_CONFIGURATION, memcfg | OPL4_MODE_BIT);

snd_opl4_write(opl4, OPL4_REG_MEMORY_ADDRESS_HIGH, offset >> 16);
snd_opl4_write(opl4, OPL4_REG_MEMORY_ADDRESS_MID, offset >> 8);
snd_opl4_write(opl4, OPL4_REG_MEMORY_ADDRESS_LOW, offset);

snd_opl4_wait(opl4);
outb(OPL4_REG_MEMORY_DATA, opl4->pcm_port);
snd_opl4_wait(opl4);
insb(opl4->pcm_port + 1, buf, size);

snd_opl4_write(opl4, OPL4_REG_MEMORY_CONFIGURATION, memcfg);

spin_unlock_irqrestore(&opl4->reg_lock, flags);
}