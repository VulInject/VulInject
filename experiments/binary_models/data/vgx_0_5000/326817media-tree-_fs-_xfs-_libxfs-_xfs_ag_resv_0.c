static int
__xfs_ag_resv_free(
struct xfs_perag		*pag,
enum xfs_ag_resv_type		type)
{
struct xfs_ag_resv		*resv;
xfs_extlen_t			oldresv;
int				error;

trace_xfs_ag_resv_free(pag, type, 0);

resv = xfs_perag_resv(pag, type);
pag->pag_mount->m_ag_max_usable += resv->ar_asked;

if (type == XFS_AG_RESV_AGFL)
oldresv = resv->ar_orig_reserved;
else
oldresv = resv->ar_reserved;
error = xfs_mod_fdblocks(pag->pag_mount, oldresv, true);
resv->ar_reserved = 0;
resv->ar_asked = 0;

if (error)
trace_xfs_ag_resv_free_error(pag->pag_mount, pag->pag_agno,
error, _RET_IP_);
return error;
}