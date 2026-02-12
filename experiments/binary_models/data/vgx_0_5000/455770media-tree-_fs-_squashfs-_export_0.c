__le64 *squashfs_read_inode_lookup_table(struct super_block *sb,
u64 lookup_table_start, u64 next_table, unsigned int inodes)
{
unsigned int length = SQUASHFS_LOOKUP_BLOCK_BYTES(inodes);
__le64 *table;

TRACE("In read_inode_lookup_table, length %d\n", length);




if (inodes == 0)
return ERR_PTR(-EINVAL);


if (lookup_table_start + length > next_table)
return ERR_PTR(-EINVAL);

table = squashfs_read_table(sb, lookup_table_start, length);


if (!IS_ERR(table) && le64_to_cpu(table[0]) >= lookup_table_start) {
kfree(table);
return ERR_PTR(-EINVAL);
}

return table;
}


const struct export_operations squashfs_export_ops = {
.fh_to_dentry = squashfs_fh_to_dentry,
.fh_to_parent = squashfs_fh_to_parent,
.get_parent = squashfs_get_parent
};