static void XGIfb_search_mode(struct xgifb_video_info *xgifb_info,
const char *name)
{
unsigned int xres;
unsigned int yres;
unsigned int bpp;
int i;

if (sscanf(name, "%ux%ux%u", &xres, &yres, &bpp) != 3)
goto invalid_mode;

if (bpp == 24)
bpp = 32; 

for (i = 0; XGIbios_mode[i].mode_no != 0; i++)
if (XGIbios_mode[i].xres == xres &&
XGIbios_mode[i].yres == yres &&
XGIbios_mode[i].bpp == bpp) {
xgifb_info->mode_idx = i;
return;
}
invalid_mode:
pr_info("Invalid mode '%s'\n", name);
}