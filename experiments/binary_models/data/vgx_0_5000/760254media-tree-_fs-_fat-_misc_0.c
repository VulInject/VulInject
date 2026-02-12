void __fat_fs_error(struct super_block *sb, int report, const char *fmt, ...)
{
struct fat_mount_options *opts = &MSDOS_SB(sb)->options;
va_list args;
struct va_format vaf;

if (report) {
va_start(args, fmt);
vaf.fmt = fmt;
vaf.va = &args;
fat_msg(sb, KERN_ERR, "error, %pV", &vaf);
va_end(args);
}

if (opts->errors == FAT_ERRORS_PANIC)
panic("FAT-fs (%s): fs panic from previous error\n", sb->s_id);
else if (opts->errors == FAT_ERRORS_RO && !(sb->s_flags & MS_RDONLY)) {
sb->s_flags |= MS_RDONLY;
fat_msg(sb, KERN_ERR, "Filesystem has been set read-only");
}
}