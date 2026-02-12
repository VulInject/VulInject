bus_dma_tag_t
smmu_device_map(void *cookie, uint32_t sid, bus_dma_tag_t dmat)
{
struct smmu_softc *sc = cookie;
struct smmu_domain *dom;

dom = smmu_domain_lookup(sc, sid);
if (dom == NULL)
return dmat;

if (dom->sd_dmat == NULL) {
dom->sd_dmat = malloc(sizeof(*dom->sd_dmat),
M_DEVBUF, M_WAITOK);
memcpy(dom->sd_dmat, sc->sc_dmat,
sizeof(*dom->sd_dmat));
dom->sd_dmat->_cookie = dom;
dom->sd_dmat->_dmamap_create = smmu_dmamap_create;
dom->sd_dmat->_dmamap_destroy = smmu_dmamap_destroy;
dom->sd_dmat->_dmamap_load = smmu_dmamap_load;
dom->sd_dmat->_dmamap_load_mbuf = smmu_dmamap_load_mbuf;
dom->sd_dmat->_dmamap_load_uio = smmu_dmamap_load_uio;
dom->sd_dmat->_dmamap_load_raw = smmu_dmamap_load_raw;
dom->sd_dmat->_dmamap_unload = smmu_dmamap_unload;
dom->sd_dmat->_flags |= BUS_DMA_COHERENT;
}

return dom->sd_dmat;
}