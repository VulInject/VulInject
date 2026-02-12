__le64 *squashfs_read_inode_lookup_table(struct super_block *sb,
u64 lookup_table_start, unsigned int inodes)
{
unsigned int length = SQUASHFS_LOOKUP_BLOCK_BYTES(inodes);
__le64 *inode_lookup_table;
int err;

TRACE("In read_inode_lookup_table, length %d\n", length);


inode_lookup_table = kmalloc(length, GFP_KERNEL);
if (inode_lookup_table == NULL) {
ERROR("Failed to allocate inode lookup table\n");
return ERR_PTR(-ENOMEM);
}

err = squashfs_read_table(sb, inode_lookup_table, lookup_table_start,
length);
if (err < 0) {
ERROR("unable to read inode lookup table\n");
kfree(inode_lookup_table);
return ERR_PTR(err);
}

return inode_lookup_table;
}