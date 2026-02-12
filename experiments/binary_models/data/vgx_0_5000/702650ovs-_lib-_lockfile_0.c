static struct lockfile *
lockfile_register(const char *name, dev_t device, ino_t inode, int fd)
OVS_REQUIRES(lock_table_mutex)
{
struct lockfile *lockfile;

lockfile = lockfile_find(device, inode);
if (lockfile) {
VLOG_ERR("%s: lock file disappeared and reappeared!", name);
lockfile_unhash(lockfile);
}

lockfile = xmalloc(sizeof *lockfile);
lockfile->name = xstrdup(name);
lockfile->device = device;
lockfile->inode = inode;
lockfile->fd = fd;
hmap_insert(lock_table, &lockfile->hmap_node,
lockfile_hash(device, inode));
return lockfile;
}