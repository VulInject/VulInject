static int create_mpu401(struct snd_card *card, int devnum,
unsigned long port, int irq)
{
struct soundscape *sscape = get_card_soundscape(card);
struct snd_rawmidi *rawmidi;
int err;

err = snd_mpu401_uart_new(card, devnum, MPU401_HW_MPU401, port,
MPU401_INFO_INTEGRATED, irq, &rawmidi);
if (err == 0) {
struct snd_mpu401 *mpu = rawmidi->private_data;
mpu->open_input = mpu401_open;
mpu->open_output = mpu401_open;
mpu->private_data = sscape;

initialise_mpu401(mpu);
}

return err;
}