static xfs_failaddr_t
xfs_da3_node_verify(
struct xfs_buf		*bp)
{
struct xfs_mount	*mp = bp->b_mount;
struct xfs_da_intnode	*hdr = bp->b_addr;
struct xfs_da3_icnode_hdr ichdr;
xfs_failaddr_t		fa;

xfs_da3_node_hdr_from_disk(mp, &ichdr, hdr);

fa = xfs_da3_blkinfo_verify(bp, bp->b_addr);
if (fa)
return fa;

if (ichdr.level == 0)
return __this_address;
if (ichdr.level > XFS_DA_NODE_MAXDEPTH)
return __this_address;
if (ichdr.count == 0)
return __this_address;


if (ichdr.count > mp->m_dir_geo->node_ents &&
ichdr.count > mp->m_attr_geo->node_ents)
return __this_address;



return NULL;
}