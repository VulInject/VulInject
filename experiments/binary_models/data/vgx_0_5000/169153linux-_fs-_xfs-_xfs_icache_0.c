static int
xfs_icwalk(
struct xfs_mount	*mp,
enum xfs_icwalk_goal	goal,
struct xfs_icwalk	*icw)
{
struct xfs_perag	*pag;
int			error = 0;
int			last_error = 0;
xfs_agnumber_t		agno;

for_each_perag_tag(mp, agno, pag, goal) {
error = xfs_icwalk_ag(pag, goal, icw);
if (error) {
last_error = error;
if (error == -EFSCORRUPTED) {
xfs_perag_put(pag);
break;
}
}
}
return last_error;
BUILD_BUG_ON(XFS_ICWALK_PRIVATE_FLAGS & XFS_ICWALK_FLAGS_VALID);
}