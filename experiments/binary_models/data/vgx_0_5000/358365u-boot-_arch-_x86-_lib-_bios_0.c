static void vbe_set_graphics(int vesa_mode, struct vesa_state *mode_info)
{
unsigned char *framebuffer;

mode_info->video_mode = (1 << 14) | vesa_mode;
vbe_get_mode_info(mode_info);

framebuffer = (unsigned char *)(ulong)mode_info->vesa.phys_base_ptr;
debug("VBE: resolution:  %dx%d@%d\n",
le16_to_cpu(mode_info->vesa.x_resolution),
le16_to_cpu(mode_info->vesa.y_resolution),
mode_info->vesa.bits_per_pixel);
debug("VBE: framebuffer: %p\n", framebuffer);
if (!framebuffer) {
debug("VBE: Mode does not support linear framebuffer\n");
return;
}

mode_info->video_mode &= 0x3ff;
vbe_set_mode(mode_info);
}