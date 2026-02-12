static void setfreq(struct gspca_dev *gspca_dev)
{
struct sd *sd = (struct sd *) gspca_dev;

if (sd->sensor == SENSOR_OV6650 || sd->sensor == SENSOR_OV7630) {

__u8 i2c[] = {0xa0, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x10};
switch (sd->plfreq->val) {
default:


i2c[3] = 0;
break;
case 1:			
i2c[3] = (sd->sensor == SENSOR_OV6650)
? 0x4f : 0x8a;
break;
}
i2c[1] = sensor_data[sd->sensor].sensor_addr;
i2c_w(gspca_dev, i2c);
}
}