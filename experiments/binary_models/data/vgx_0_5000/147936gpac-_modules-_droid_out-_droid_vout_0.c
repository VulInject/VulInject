static GF_Err droid_Resize(GF_VideoOutput *dr, u32 w, u32 h)
{
DROIDVOUTCTX;
GF_LOG(GF_LOG_DEBUG, GF_LOG_MMIO, ("[DroidVOUT] Resize: %u x %u", w, h));

rc->width = w;
rc->height = h;

if ((dr->max_screen_width < w) || (dr->max_screen_height < h)) {
dr->max_screen_width = w;
dr->max_screen_height = h;
}

rc->tex_width = rc->width;
rc->tex_height = rc->height;
if (rc->non_power_two) {
rc->tex_width = rc->width;
rc->tex_height = rc->height;
} else {
rc->tex_width = find_pow_2(rc->width);
rc->tex_height = find_pow_2(rc->height);
}
gl_check_error();
resizeWindow(rc);

if (rc->out_3d_type == 0) {
createTexture(rc);
}
gl_check_error();
return GF_OK;
}