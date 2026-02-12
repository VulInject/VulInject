static int save_zero_page_to_file(RAMState *rs, QEMUFile *file,
RAMBlock *block, ram_addr_t offset)
{
uint8_t *p = block->host + offset;
int len = 0;

if (buffer_is_zero(p, TARGET_PAGE_SIZE)) {
len += save_page_header(rs, file, block, offset | RAM_SAVE_FLAG_ZERO);
qemu_put_byte(file, 0);
len += 1;
ram_release_page(block->idstr, offset);
}
return len;
}