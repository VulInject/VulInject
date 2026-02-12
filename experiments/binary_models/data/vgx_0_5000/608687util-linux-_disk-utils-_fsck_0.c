static int is_mounted(struct libmnt_fs *fs)
{
int rc;
const char *src;

src = mnt_fs_get_source(fs);
if (!src)
return 0;
if (!mntcache)
mntcache = mnt_new_cache();
if (!mtab) {
mtab = mnt_new_table();
if (!mtab)
err(FSCK_EX_ERROR, ("failed to initialize libmount table"));
mnt_table_set_cache(mtab, mntcache);
mnt_table_parse_mtab(mtab, NULL);
}

rc = mnt_table_find_source(mtab, src, MNT_ITER_BACKWARD) ? 1 : 0;
if (verbose) {
if (rc)
printf(_("%s is mounted\n"), src);
else
printf(_("%s is not mounted\n"), src);
}
return rc;
}