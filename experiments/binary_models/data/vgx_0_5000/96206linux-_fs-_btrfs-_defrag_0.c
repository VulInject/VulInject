static struct extent_map *defrag_lookup_extent(struct inode *inode, u64 start,
u64 newer_than, bool locked)
{
struct extent_map_tree *em_tree = &BTRFS_I(inode)->extent_tree;
struct extent_io_tree *io_tree = &BTRFS_I(inode)->io_tree;
struct extent_map *em;
const u32 sectorsize = BTRFS_I(inode)->root->fs_info->sectorsize;


read_lock(&em_tree->lock);
em = lookup_extent_mapping(em_tree, start, sectorsize);
read_unlock(&em_tree->lock);


if (em && test_bit(EXTENT_FLAG_MERGED, &em->flags) &&
newer_than && em->generation >= newer_than) {
free_extent_map(em);
em = NULL;
}

if (!em) {
struct extent_state *cached = NULL;
u64 end = start + sectorsize - 1;


if (!locked)
lock_extent(io_tree, start, end, &cached);
em = defrag_get_extent(BTRFS_I(inode), start, newer_than);
if (!locked)
unlock_extent(io_tree, start, end, &cached);

if (IS_ERR(em))
return NULL;
}

return em;
}