static void setexposure(struct gspca_dev *gspca_dev, s32 val)
{
u16 value;
unsigned int w = gspca_dev->pixfmt.width;

if (w == 800)
value = val * 5;
else if (w == 1600)
value = val * 3;
else if (w == 3264)
value = val * 3 / 2;
else {
gspca_err(gspca_dev, "Invalid width %u\n", w);
gspca_dev->usb_err = -EINVAL;
return;
}
gspca_dbg(gspca_dev, D_STREAM, "exposure: 0x%04X ms\n\n", value);


reg_w(gspca_dev, value, REG_COARSE_INTEGRATION_TIME_);
reg_w(gspca_dev, value, REG_COARSE_INTEGRATION_TIME_);
}