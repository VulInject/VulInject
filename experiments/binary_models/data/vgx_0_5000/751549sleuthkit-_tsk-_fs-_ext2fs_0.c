static uint8_t
ext2fs_bmap_load(EXT2FS_INFO * ext2fs, EXT2_GRPNUM_T grp_num)
{
TSK_FS_INFO *fs = (TSK_FS_INFO *) & ext2fs->fs_info;
ssize_t cnt;
TSK_DADDR_T addr;


if (ext2fs_group_load(ext2fs, grp_num)) {
return 1;
}

if (ext2fs->bmap_buf == NULL) {
if ((ext2fs->bmap_buf =
(uint8_t *) tsk_malloc(fs->block_size)) == NULL) {
return 1;
}
}
else if (ext2fs->bmap_grp_num == grp_num) {
return 0;
}

if (ext2fs->ext4_grp_buf != NULL) { 
addr = ext4_getu64(fs->endian,
ext2fs->ext4_grp_buf->bg_block_bitmap_hi,
ext2fs->ext4_grp_buf->bg_block_bitmap_lo);
}
else {
addr = (TSK_DADDR_T) tsk_getu32(fs->endian, ext2fs->grp_buf->bg_block_bitmap);
}

if (addr > fs->last_block) {
tsk_error_reset();
tsk_error_set_errno(TSK_ERR_FS_BLK_NUM);
tsk_error_set_errstr
("ext2fs_bmap_load: Block too large for image: %" PRIu64, addr);
return 1;
}

cnt = tsk_fs_read(fs, addr * fs->block_size, 
(char *) ext2fs->bmap_buf, ext2fs->fs_info.block_size);

if (cnt != ext2fs->fs_info.block_size) {
if (cnt >= 0) {
tsk_error_reset();
tsk_error_set_errno(TSK_ERR_FS_READ);
}
tsk_error_set_errstr2("ext2fs_bmap_load: block bitmap %"
PRI_EXT2GRP " at %" PRIu64, grp_num, addr);
return 1;
}

ext2fs->bmap_grp_num = grp_num;
if (tsk_verbose > 1)
ext2fs_print_map(ext2fs->bmap_buf,
tsk_getu32(fs->endian, ext2fs->fs->s_blocks_per_group));    
return 0;
}