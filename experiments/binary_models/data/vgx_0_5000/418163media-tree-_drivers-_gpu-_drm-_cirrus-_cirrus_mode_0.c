static void cirrus_crtc_load_lut(struct drm_crtc *crtc)
{
struct cirrus_crtc *cirrus_crtc = to_cirrus_crtc(crtc);
struct drm_device *dev = crtc->dev;
struct cirrus_device *cdev = dev->dev_private;
int i;

if (!crtc->enabled)
return;

for (i = 0; i < CIRRUS_LUT_SIZE; i++) {

WREG8(PALETTE_INDEX, i);
WREG8(PALETTE_DATA, cirrus_crtc->lut_r[i]);
WREG8(PALETTE_DATA, cirrus_crtc->lut_g[i]);
WREG8(PALETTE_DATA, cirrus_crtc->lut_b[i]);
}
}