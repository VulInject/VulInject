static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,			
int len)			
{
int seqframe;

seqframe = data[0] & 0x3f;
len = (int) (((data[0] & 0xc0) << 2) | data[1]);
if (seqframe == 0x3f) {
PDEBUG(D_FRAM,
"header packet found datalength %d !!", len);
PDEBUG(D_FRAM, "G %d R %d G %d B %d",
data[2], data[3], data[4], data[5]);
data += 30;

gspca_frame_add(gspca_dev, LAST_PACKET, NULL, 0);
gspca_frame_add(gspca_dev, FIRST_PACKET, data, len);
return;
}
if (len) {
data += 8;
gspca_frame_add(gspca_dev, INTER_PACKET, data, len);
} else {			
gspca_dev->last_packet_type = DISCARD_PACKET;
}
}