static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,			
int len)			
{
struct sd *sd = (struct sd *) gspca_dev;

if (data[0] == 0xff && data[1] == 0xd8) {


gspca_frame_add(gspca_dev, LAST_PACKET, NULL, 0);


gspca_frame_add(gspca_dev, FIRST_PACKET,
sd->jpeg_hdr, JPEG_HDR_SZ);
data += 2;
len -= 2;
}
gspca_frame_add(gspca_dev, INTER_PACKET, data, len);
}