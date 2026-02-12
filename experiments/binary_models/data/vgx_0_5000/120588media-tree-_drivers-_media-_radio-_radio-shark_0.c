static void shark_write_val(struct snd_tea575x *tea, u32 val)
{
struct shark_device *shark = tea->private_data;
int i, res, actual_len;


if (shark->last_val == val)
return;

memset(shark->transfer_buffer, 0, TB_LEN);
shark->transfer_buffer[0] = 0xc0; 
for (i = 0; i < 4; i++)
shark->transfer_buffer[i] |= (val >> (24 - i * 8)) & 0xff;

res = usb_interrupt_msg(shark->usbdev,
usb_sndintpipe(shark->usbdev, SHARK_OUT_EP),
shark->transfer_buffer, TB_LEN,
&actual_len, 1000);
if (res >= 0)
shark->last_val = val;
else
v4l2_err(&shark->v4l2_dev, "set-freq error: %d\n", res);
}