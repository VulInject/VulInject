static void snd_es1938_reset(struct es1938 *chip)
{
int i;

outb(3, SLSB_REG(chip, RESET));
inb(SLSB_REG(chip, RESET));
outb(0, SLSB_REG(chip, RESET));
for (i = 0; i < RESET_LOOP_TIMEOUT; i++) {
if (inb(SLSB_REG(chip, STATUS)) & 0x80) {
if (inb(SLSB_REG(chip, READDATA)) == 0xaa)
goto __next;
}
}
dev_err(chip->card->dev, "ESS Solo-1 reset failed\n");

__next:
snd_es1938_write_cmd(chip, ESS_CMD_ENABLEEXT);


snd_es1938_write(chip, ESS_CMD_DMATYPE, 2);


snd_es1938_mixer_write(chip, ESSSB_IREG_AUDIO2MODE, 0x32);

snd_es1938_bits(chip, ESS_CMD_IRQCONTROL, 0xf0, 0x50);
snd_es1938_bits(chip, ESS_CMD_DRQCONTROL, 0xf0, 0x50);
snd_es1938_write_cmd(chip, ESS_CMD_ENABLEAUDIO1);

snd_es1938_mixer_write(chip, 0x54, 0x8f);
snd_es1938_mixer_write(chip, 0x56, 0x95);
snd_es1938_mixer_write(chip, 0x58, 0x94);
snd_es1938_mixer_write(chip, 0x5a, 0x80);
}