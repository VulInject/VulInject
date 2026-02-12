static int sd_start(struct gspca_dev *gspca_dev)
{
struct sd *sd = (struct sd *) gspca_dev;


jpeg_define(sd->jpeg_hdr, gspca_dev->pixfmt.height,
gspca_dev->pixfmt.width,
0x22);		


jpeg_set_qual(sd->jpeg_hdr, 85);

reg_r(gspca_dev, 0x00, 0x2520, 1);
msleep(8);


wait_status_0(gspca_dev);
reg_w(gspca_dev, 0x31, 0x0000, 0x0004);	
wait_status_1(gspca_dev);
wait_status_0(gspca_dev);
msleep(200);

sd->pkt_seq = 0;
return gspca_dev->usb_err;
}