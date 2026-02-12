static int snd_i2c_bit_readbytes(struct snd_i2c_device *device,
unsigned char *bytes, int count)
{
struct snd_i2c_bus *bus = device->bus;
int err, res = 0;

if (device->flags & SND_I2C_DEVICE_ADDRTEN)
return -EIO;		
snd_i2c_bit_start(bus);
err = snd_i2c_bit_sendbyte(bus, (device->addr << 1) | 1);
if (err < 0) {
snd_i2c_bit_hw_stop(bus);
return err;
}
while (count-- > 0) {
err = snd_i2c_bit_readbyte(bus, count == 0);
if (err < 0) {
snd_i2c_bit_hw_stop(bus);
return err;
}
*bytes++ = (unsigned char)err;
res++;
}
snd_i2c_bit_stop(bus);
return res;
}