static int parse_bit_tmds_tbl_entry(struct drm_device *dev, struct nvbios *bios, struct bit_entry *bitentry)
{


struct nouveau_drm *drm = nouveau_drm(dev);
uint16_t tmdstableptr, script1, script2;

if (bitentry->length != 2) {
NV_ERROR(drm, "Do not understand BIT TMDS table\n");
return -EINVAL;
}

tmdstableptr = ROM16(bios->data[bitentry->offset]);
if (!tmdstableptr) {
NV_INFO(drm, "Pointer to TMDS table not found\n");
return -EINVAL;
}

NV_INFO(drm, "TMDS table version %d.%d\n",
bios->data[tmdstableptr] >> 4, bios->data[tmdstableptr] & 0xf);


if (bios->data[tmdstableptr] != 0x11)
return -ENOSYS;


script1 = ROM16(bios->data[tmdstableptr + 7]);
script2 = ROM16(bios->data[tmdstableptr + 9]);
if (bios->data[script1] != 'q' || bios->data[script2] != 'q')
NV_WARN(drm, "TMDS table script pointers not stubbed\n");

bios->tmds.output0_script_ptr = ROM16(bios->data[tmdstableptr + 11]);
bios->tmds.output1_script_ptr = ROM16(bios->data[tmdstableptr + 13]);

return 0;
}