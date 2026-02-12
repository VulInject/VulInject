static TSK_RETVAL_ENUM 
exfatfs_copy_vol_label_inode(FATFS_INFO *a_fatfs, TSK_INUM_T a_inum, FATFS_DENTRY *a_dentry, TSK_FS_FILE *a_fs_file)
{
EXFATFS_VOL_LABEL_DIR_ENTRY *dentry = NULL;

assert(a_fatfs != NULL);
assert(fatfs_inum_is_in_range(a_fatfs, a_inum));
assert(a_dentry != NULL);
assert(a_fs_file != NULL);
assert(a_fs_file->meta != NULL);

dentry = (EXFATFS_VOL_LABEL_DIR_ENTRY*)a_dentry;
assert(exfatfs_get_enum_from_type(dentry->entry_type) == EXFATFS_DIR_ENTRY_TYPE_VOLUME_LABEL);


if (exfatfs_get_alloc_status_from_type(dentry->entry_type) == 1) {
if (fatfs_utf16_inode_str_2_utf8(a_fatfs, (UTF16*)dentry->volume_label, (size_t)dentry->volume_label_length_chars,
(UTF8*)a_fs_file->meta->name2->name, sizeof(a_fs_file->meta->name2->name), a_inum, "volume label") != TSKconversionOK) {
return TSK_COR;
}
}
else {
strcpy(a_fs_file->meta->name2->name, EXFATFS_EMPTY_VOLUME_LABEL_DENTRY_NAME);
}

return TSK_OK;
}