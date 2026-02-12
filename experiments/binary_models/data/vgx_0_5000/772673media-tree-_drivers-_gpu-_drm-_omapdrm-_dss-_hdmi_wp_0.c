void hdmi_wp_video_config_interface(struct hdmi_wp_data *wp,
struct videomode *vm)
{
u32 r;
bool vsync_inv, hsync_inv;
DSSDBG("Enter hdmi_wp_video_config_interface\n");

vsync_inv = !!(vm->flags & DISPLAY_FLAGS_VSYNC_LOW);
hsync_inv = !!(vm->flags & DISPLAY_FLAGS_HSYNC_LOW);

r = hdmi_read_reg(wp->base, HDMI_WP_VIDEO_CFG);
r = FLD_MOD(r, 1, 7, 7);	
r = FLD_MOD(r, 1, 6, 6);	
r = FLD_MOD(r, vsync_inv, 5, 5);	
r = FLD_MOD(r, hsync_inv, 4, 4);	
r = FLD_MOD(r, !!(vm->flags & DISPLAY_FLAGS_INTERLACED), 3, 3);
r = FLD_MOD(r, 1, 1, 0); 
hdmi_write_reg(wp->base, HDMI_WP_VIDEO_CFG, r);
}