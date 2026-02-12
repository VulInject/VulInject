static int udf_find_fileset(struct super_block *sb,
struct kernel_lb_addr *fileset,
struct kernel_lb_addr *root)
{
struct buffer_head *bh;
uint16_t ident;
int ret;

if (fileset->logicalBlockNum == 0xFFFFFFFF &&
fileset->partitionReferenceNum == 0xFFFF)
return -EINVAL;

bh = udf_read_ptagged(sb, fileset, 0, &ident);
if (!bh)
return -EIO;
if (ident != TAG_IDENT_FSD) {
brelse(bh);
return -EINVAL;
}

udf_debug("Fileset at block=%u, partition=%u\n",
fileset->logicalBlockNum, fileset->partitionReferenceNum);

UDF_SB(sb)->s_partition = fileset->partitionReferenceNum;
ret = udf_load_fileset(sb, (struct fileSetDesc *)bh->b_data, root);
brelse(bh);
return ret;
}