static void setwhite(struct gspca_dev *gspca_dev, s32 white, s32 contrast)
{
struct sd *sd = (struct sd *) gspca_dev;
__u8 blue, red;
__u16 reg;


red = 0x20 + white * 3 / 8;
blue = 0x90 - white * 5 / 8;
if (sd->chip_revision == Rev012A) {
reg = 0x8614;
} else {
reg = 0x8651;
red += contrast - 0x20;
blue += contrast - 0x20;
reg_w_val(gspca_dev, 0x8652, contrast + 0x20); 
reg_w_val(gspca_dev, 0x8654, contrast + 0x20); 
}
reg_w_val(gspca_dev, reg, red);
reg_w_val(gspca_dev, reg + 2, blue);
}