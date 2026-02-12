static int get_container_image_start_pos(image_t *image_stack, uint32_t align)
{
image_t *img_sp = image_stack;

int file_off = CONTAINER_IMAGE_ARRAY_START_OFFSET;
FILE *fd = NULL;
flash_header_v3_t header;
int ret;

while (img_sp->option != NO_IMG) {
if (img_sp->option == APPEND) {
fd = fopen(img_sp->filename, "r");
if (!fd) {
fprintf(stderr, "Fail open first container file %s\n", img_sp->filename);
exit(EXIT_FAILURE);
}

ret = fread(&header, sizeof(header), 1, fd);
if (ret != 1) {
printf("Failure Read header %d\n", ret);
exit(EXIT_FAILURE);
}

fclose(fd);

if (header.tag != IVT_HEADER_TAG_B0) {
fprintf(stderr, "header tag mismatched \n");
exit(EXIT_FAILURE);
} else {
file_off +=
header.img[header.num_images - 1].size;
file_off = ALIGN(file_off, align);
}
}

img_sp++;
}

return file_off;
}