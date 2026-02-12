void qemu_guest_free_page_hint(void *addr, size_t len)
{
RAMBlock *block;
ram_addr_t offset;
size_t used_len, start, npages;
MigrationState *s = migrate_get_current();


if (!migration_is_setup_or_active(s->state)) {
return;
}

for (; len > 0; len -= used_len, addr += used_len) {
block = qemu_ram_block_from_host(addr, false, &offset);
if (unlikely(!block || offset >= block->used_length)) {

error_report_once("%s unexpected error", __func__);
return;
}

if (len <= block->used_length - offset) {
used_len = len;
} else {
used_len = block->used_length - offset;
}

start = offset >> TARGET_PAGE_BITS;
npages = used_len >> TARGET_PAGE_BITS;

qemu_mutex_lock(&ram_state->bitmap_mutex);

migration_clear_memory_region_dirty_bitmap_range(block, start, npages);
ram_state->migration_dirty_pages -=
bitmap_count_one_with_offset(block->bmap, start, npages);
bitmap_clear(block->bmap, start, npages);
qemu_mutex_unlock(&ram_state->bitmap_mutex);
}
}