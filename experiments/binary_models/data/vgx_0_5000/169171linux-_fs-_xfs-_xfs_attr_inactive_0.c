STATIC int
xfs_attr3_rmt_stale(
struct xfs_inode	*dp,
xfs_dablk_t		blkno,
int			blkcnt)
{
struct xfs_bmbt_irec	map;
int			nmap;
int			error;


while (blkcnt > 0) {

nmap = 1;
error = xfs_bmapi_read(dp, (xfs_fileoff_t)blkno, blkcnt,
&map, &nmap, XFS_BMAPI_ATTRFORK);
if (error)
return error;
if (XFS_IS_CORRUPT(dp->i_mount, nmap != 1))
return -EFSCORRUPTED;


error = xfs_attr_rmtval_stale(dp, &map, 0);
if (error)
return error;

blkno += map.br_blockcount;
blkcnt -= map.br_blockcount;
}

return 0;
}