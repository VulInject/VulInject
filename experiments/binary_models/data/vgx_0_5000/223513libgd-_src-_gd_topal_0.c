prescan_quantize (gdImagePtr oim, gdImagePtr nim, my_cquantize_ptr cquantize)
{
register JSAMPROW ptr;
register histptr histp;
register hist3d histogram = cquantize->histogram;
int row;
JDIMENSION col;
int width = oim->sx;
int num_rows = oim->sy;

(void)nim;

for (row = 0; row < num_rows; row++) {
ptr = input_buf[row];
for (col = width; col > 0; col--) {
int r = gdTrueColorGetRed (*ptr) >> C0_SHIFT;
int g = gdTrueColorGetGreen (*ptr) >> C1_SHIFT;
int b = gdTrueColorGetBlue (*ptr) >> C2_SHIFT;

if ((oim->transparent >= 0) && (*ptr == oim->transparent)) {
ptr++;
continue;
}

histp = &histogram[r][g][b];

if (++(*histp) == 0)
(*histp)--;
ptr++;
}
}
}