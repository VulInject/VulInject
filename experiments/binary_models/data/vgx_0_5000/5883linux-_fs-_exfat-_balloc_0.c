int exfat_set_bitmap(struct inode *inode, unsigned int clu, bool sync)
{
int i, b;
unsigned int ent_idx;
struct super_block *sb = inode->i_sb;
struct exfat_sb_info *sbi = EXFAT_SB(sb);

if (!is_valid_cluster(sbi, clu))
return -EINVAL;

ent_idx = CLUSTER_TO_BITMAP_ENT(clu);
i = BITMAP_OFFSET_SECTOR_INDEX(sb, ent_idx);
b = BITMAP_OFFSET_BIT_IN_SECTOR(sb, ent_idx);

set_bit_le(b, sbi->vol_amap[i]->b_data);
exfat_update_bh(sbi->vol_amap[i], sync);
return 0;
}