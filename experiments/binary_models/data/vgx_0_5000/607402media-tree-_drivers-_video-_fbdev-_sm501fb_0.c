static int sm501fb_probe_one(struct sm501fb_info *info,
enum sm501_controller head)
{
unsigned char *name = (head == HEAD_CRT) ? "crt" : "panel";
struct sm501_platdata_fbsub *pd;
struct sm501fb_par *par;
struct fb_info *fbi;

pd = (head == HEAD_CRT) ? info->pdata->fb_crt : info->pdata->fb_pnl;


if (pd == NULL) {
dev_info(info->dev, "no data for fb %s (disabled)\n", name);
return 0;
}

fbi = framebuffer_alloc(sizeof(struct sm501fb_par), info->dev);
if (fbi == NULL) {
dev_err(info->dev, "cannot allocate %s framebuffer\n", name);
return -ENOMEM;
}

par = fbi->par;
par->info = info;
par->head = head;
fbi->pseudo_palette = &par->pseudo_palette;

info->fb[head] = fbi;

return 0;
}