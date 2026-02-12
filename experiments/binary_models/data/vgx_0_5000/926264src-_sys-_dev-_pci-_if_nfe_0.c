void
nfe_reset_tx_ring(struct nfe_softc *sc, struct nfe_tx_ring *ring)
{
struct nfe_tx_data *data;
int i;

for (i = 0; i < NFE_TX_RING_COUNT; i++) {
if (sc->sc_flags & NFE_40BIT_ADDR)
ring->desc64[i].flags = 0;
else
ring->desc32[i].flags = 0;

data = &ring->data[i];

if (data->m != NULL) {
bus_dmamap_sync(sc->sc_dmat, data->active, 0,
data->active->dm_mapsize, BUS_DMASYNC_POSTWRITE);
bus_dmamap_unload(sc->sc_dmat, data->active);
m_freem(data->m);
data->m = NULL;
}
}

bus_dmamap_sync(sc->sc_dmat, ring->map, 0, ring->map->dm_mapsize,
BUS_DMASYNC_PREWRITE);

ring->queued = 0;
ring->cur = ring->next = 0;
}