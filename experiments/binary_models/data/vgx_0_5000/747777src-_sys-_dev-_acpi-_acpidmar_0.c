static int
dmar_dmamap_load_mbuf(bus_dma_tag_t tag, bus_dmamap_t dmam, struct mbuf *chain,
int flags)
{
struct domain	*dom = tag->_cookie;
int		rc;

rc = _bus_dmamap_load_mbuf(tag, dmam, chain, flags);
if (!rc) {
dmar_dumpseg(tag, dmam->dm_nsegs, dmam->dm_segs,
__FUNCTION__);
domain_load_map(dom, dmam, flags, PTE_R|PTE_W,__FUNCTION__);
dmar_dumpseg(tag, dmam->dm_nsegs, dmam->dm_segs,
__FUNCTION__);
}
return (rc);
}