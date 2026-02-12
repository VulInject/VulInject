int
zfs_crypto_get_encryption_root(zfs_handle_t *zhp, boolean_t *is_encroot,
char *buf)
{
int ret;
char prop_encroot[MAXNAMELEN];


if (zfs_prop_get_int(zhp, ZFS_PROP_ENCRYPTION) == ZIO_CRYPT_OFF) {
*is_encroot = B_FALSE;
if (buf != NULL)
buf[0] = '\0';
return (0);
}

ret = zfs_prop_get(zhp, ZFS_PROP_ENCRYPTION_ROOT, prop_encroot,
sizeof (prop_encroot), NULL, NULL, 0, B_TRUE);
if (ret != 0) {
*is_encroot = B_FALSE;
if (buf != NULL)
buf[0] = '\0';
return (ret);
}

*is_encroot = strcmp(prop_encroot, zfs_get_name(zhp)) == 0;
if (buf != NULL)
strcpy(buf, prop_encroot);

return (0);
}