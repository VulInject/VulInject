static int omapimage_verify_header(unsigned char *ptr, int image_size,
struct image_tool_params *params)
{
struct ch_toc *toc = (struct ch_toc *)ptr;
struct gp_header *gph = (struct gp_header *)(ptr+OMAP_CH_HDR_SIZE);
uint32_t offset, size;

while (toc->section_offset != 0xffffffff
&& toc->section_size != 0xffffffff) {
if (do_swap32) {
offset = cpu_to_be32(toc->section_offset);
size = cpu_to_be32(toc->section_size);
} else {
offset = toc->section_offset;
size = toc->section_size;
}
if (!offset || !size)
return -1;
if (offset >= OMAP_CH_HDR_SIZE ||
offset+size >= OMAP_CH_HDR_SIZE)
return -1;
toc++;
}

return gph_verify_header(gph, do_swap32);
}