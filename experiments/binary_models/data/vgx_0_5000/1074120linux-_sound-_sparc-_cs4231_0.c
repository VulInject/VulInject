static int snd_cs4231_probe(struct snd_cs4231 *chip)
{
unsigned long flags;
int i;
int id = 0;
int vers = 0;
unsigned char *ptr;

for (i = 0; i < 50; i++) {
mb();
if (__cs4231_readb(chip, CS4231U(chip, REGSEL)) & CS4231_INIT)
msleep(2);
else {
spin_lock_irqsave(&chip->lock, flags);
snd_cs4231_out(chip, CS4231_MISC_INFO, CS4231_MODE2);
id = snd_cs4231_in(chip, CS4231_MISC_INFO) & 0x0f;
vers = snd_cs4231_in(chip, CS4231_VERSION);
spin_unlock_irqrestore(&chip->lock, flags);
if (id == 0x0a)
break;	
}
}
snd_printdd("cs4231: port = %p, id = 0x%x\n", chip->port, id);
if (id != 0x0a)
return -ENODEV;	

spin_lock_irqsave(&chip->lock, flags);


__cs4231_readb(chip, CS4231U(chip, STATUS));
__cs4231_writeb(chip, 0, CS4231U(chip, STATUS));
mb();

spin_unlock_irqrestore(&chip->lock, flags);

chip->image[CS4231_MISC_INFO] = CS4231_MODE2;
chip->image[CS4231_IFACE_CTRL] =
chip->image[CS4231_IFACE_CTRL] & ~CS4231_SINGLE_DMA;
chip->image[CS4231_ALT_FEATURE_1] = 0x80;
chip->image[CS4231_ALT_FEATURE_2] = 0x01;
if (vers & 0x20)
chip->image[CS4231_ALT_FEATURE_2] |= 0x02;

ptr = (unsigned char *) &chip->image;

snd_cs4231_mce_down(chip);

spin_lock_irqsave(&chip->lock, flags);

for (i = 0; i < 32; i++)	
snd_cs4231_out(chip, i, *ptr++);

spin_unlock_irqrestore(&chip->lock, flags);

snd_cs4231_mce_up(chip);

snd_cs4231_mce_down(chip);

mdelay(2);

return 0;		
}