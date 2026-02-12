static void kwbimage_print_header(const void *ptr)
{
struct main_hdr_v0 *mhdr = (struct main_hdr_v0 *)ptr;
struct bin_hdr_v0 *bhdr;
struct opt_hdr_v1 *ohdr;

printf("Image Type:   MVEBU Boot from %s Image\n",
image_boot_mode_name(mhdr->blockid));
printf("Image version:%d\n", kwbimage_version(ptr));

for_each_opt_hdr_v1 (ohdr, mhdr) {
if (ohdr->headertype == OPT_HDR_V1_BINARY_TYPE) {
printf("BIN Img Size: ");
genimg_print_size(opt_hdr_v1_size(ohdr) - 12 -
4 * ohdr->data[0]);
printf("BIN Img Offs: %08x\n",
(unsigned)((uint8_t *)ohdr - (uint8_t *)mhdr) +
8 + 4 * ohdr->data[0]);
}
}

for_each_bin_hdr_v0(bhdr, mhdr) {
printf("BIN Img Size: ");
genimg_print_size(le32_to_cpu(bhdr->size));
printf("BIN Img Addr: %08x\n", le32_to_cpu(bhdr->destaddr));
printf("BIN Img Entr: %08x\n", le32_to_cpu(bhdr->execaddr));
}

printf("Data Size:    ");
genimg_print_size(mhdr->blocksize - sizeof(uint32_t));
printf("Load Address: %08x\n", mhdr->destaddr);
printf("Entry Point:  %08x\n", mhdr->execaddr);
}