*/



static const char *name = "EDID";


static void query_edid(struct via_aux_drv *drv)
{
struct fb_monspecs *spec = drv->data;
unsigned char edid[EDID_LENGTH];
bool valid = false;

if (spec) {
fb_destroy_modedb(spec->modedb);
} else {
spec = kmalloc(sizeof(*spec), GFP_KERNEL);
if (!spec)
return;
}

spec->version = spec->revision = 0;
if (via_aux_read(drv, 0x00, edid, EDID_LENGTH)) {
fb_edid_to_monspecs(edid, spec);
valid = spec->version || spec->revision;
}

if (!valid) {
kfree(spec);
spec = NULL;
} else
printk(KERN_DEBUG "EDID: %s %s\n", spec->manufacturer, spec->monitor);

drv->data = spec;
}