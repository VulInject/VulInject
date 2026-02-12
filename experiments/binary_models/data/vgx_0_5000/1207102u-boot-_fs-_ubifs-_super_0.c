void iput(struct inode *inode)
{
int i;
struct inode *ino;


for (i = 0; i < INODE_LOCKED_MAX; i++) {
if (inodes_locked_down[i] == NULL)
break;
}

if (i >= INODE_LOCKED_MAX) {
dbg_gen("Error, can't lock (save) more inodes while recovery!!!");
return;
}


ino = (struct inode *)malloc_cache_aligned(sizeof(struct ubifs_inode));
memcpy(ino, inode, sizeof(struct ubifs_inode));


inodes_locked_down[i] = ino;
}