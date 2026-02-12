void btrfs_return_ino(struct btrfs_root *root, u64 objectid)
{
struct btrfs_fs_info *fs_info = root->fs_info;
struct btrfs_free_space_ctl *pinned = root->free_ino_pinned;

if (!btrfs_test_opt(fs_info, INODE_MAP_CACHE))
return;
again:
if (root->ino_cache_state == BTRFS_CACHE_FINISHED) {
__btrfs_add_free_space(fs_info, pinned, objectid, 1);
} else {
down_write(&fs_info->commit_root_sem);
spin_lock(&root->ino_cache_lock);
if (root->ino_cache_state == BTRFS_CACHE_FINISHED) {
spin_unlock(&root->ino_cache_lock);
up_write(&fs_info->commit_root_sem);
goto again;
}
spin_unlock(&root->ino_cache_lock);

start_caching(root);

__btrfs_add_free_space(fs_info, pinned, objectid, 1);

up_write(&fs_info->commit_root_sem);
}
}