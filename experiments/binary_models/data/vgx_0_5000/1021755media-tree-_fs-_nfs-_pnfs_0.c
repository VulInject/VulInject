}
EXPORT_SYMBOL_GPL(pnfs_generic_pg_cleanup);


size_t
pnfs_generic_pg_test(struct nfs_pageio_descriptor *pgio,
struct nfs_page *prev, struct nfs_page *req)
{
unsigned int size;
u64 seg_end, req_start, seg_left;

size = nfs_generic_pg_test(pgio, prev, req);
if (!size)
return 0;


if (pgio->pg_lseg) {
seg_end = pnfs_end_offset(pgio->pg_lseg->pls_range.offset,
pgio->pg_lseg->pls_range.length);
req_start = req_offset(req);
WARN_ON_ONCE(req_start >= seg_end);

if (req_start >= seg_end) {

if (pgio->pg_ops->pg_cleanup)
pgio->pg_ops->pg_cleanup(pgio);
if (pgio->pg_ops->pg_init)
pgio->pg_ops->pg_init(pgio, req);
return 0;
}


seg_left = seg_end - req_start;
if (seg_left < size)
size = (unsigned int)seg_left;
}

return size;
}