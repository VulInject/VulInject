int hfs_find_init(struct hfs_btree *tree, struct hfs_find_data *fd)
{
void *ptr;

fd->tree = tree;
fd->bnode = NULL;
ptr = kmalloc(tree->max_key_len * 2 + 4, GFP_KERNEL);
if (!ptr)
return -ENOMEM;
fd->search_key = ptr;
fd->key = ptr + tree->max_key_len + 2;
hfs_dbg(BNODE_REFS, "find_init: %d (%p)\n",
tree->cnid, __builtin_return_address(0));
switch (tree->cnid) {
case HFS_CAT_CNID:
mutex_lock_nested(&tree->tree_lock, CATALOG_BTREE_MUTEX);
break;
case HFS_EXT_CNID:
mutex_lock_nested(&tree->tree_lock, EXTENTS_BTREE_MUTEX);
break;
case HFS_ATTR_CNID:
mutex_lock_nested(&tree->tree_lock, ATTR_BTREE_MUTEX);
break;
default:
return -EINVAL;
}
return 0;
}