static inline int
xfs_check_new_dalign(
struct xfs_mount	*mp,
int			new_dalign,
bool			*update_sb)
{
struct xfs_sb		*sbp = &mp->m_sb;
xfs_ino_t		calc_ino;

calc_ino = xfs_ialloc_calc_rootino(mp, new_dalign);
trace_xfs_check_new_dalign(mp, new_dalign, calc_ino);

if (sbp->sb_rootino == calc_ino) {
*update_sb = true;
return 0;
}

xfs_warn(mp,
"Cannot change stripe alignment; would require moving root inode.");


xfs_warn(mp, "Skipping superblock stripe alignment update.");
*update_sb = false;
return 0;
}