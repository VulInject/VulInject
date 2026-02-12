static void get_orlov_stats(struct super_block *sb, ext4_group_t g,
int flex_size, struct orlov_stats *stats)
{
struct ext4_group_desc *desc;
struct flex_groups *flex_group = EXT4_SB(sb)->s_flex_groups;

if (flex_size > 1) {
stats->free_inodes = atomic_read(&flex_group[g].free_inodes);
stats->free_clusters = atomic64_read(&flex_group[g].free_clusters);
stats->used_dirs = atomic_read(&flex_group[g].used_dirs);
return;
}

desc = ext4_get_group_desc(sb, g, NULL);
if (desc) {
stats->free_inodes = ext4_free_inodes_count(sb, desc);
stats->free_clusters = ext4_free_group_clusters(sb, desc);
stats->used_dirs = ext4_used_dirs_count(sb, desc);
} else {
stats->free_inodes = 0;
stats->free_clusters = 0;
stats->used_dirs = 0;
}
}