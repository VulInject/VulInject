static int ov9650_set_gain(struct gspca_dev *gspca_dev, __s32 val)
{
int err;
u8 i2c_data;
struct sd *sd = (struct sd *) gspca_dev;

PDEBUG(D_CONF, "Setting gain to %d", val);



err = m5602_read_sensor(sd, OV9650_VREF, &i2c_data, 1);
if (err < 0)
return err;


i2c_data = ((val & 0x0300) >> 2) |
(i2c_data & 0x3f);
err = m5602_write_sensor(sd, OV9650_VREF, &i2c_data, 1);
if (err < 0)
return err;


i2c_data = val & 0xff;
err = m5602_write_sensor(sd, OV9650_GAIN, &i2c_data, 1);
return err;
}