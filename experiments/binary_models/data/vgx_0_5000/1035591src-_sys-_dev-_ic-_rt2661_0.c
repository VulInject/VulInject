void
rt2661_reset_tx_ring(struct rt2661_softc *sc, struct rt2661_tx_ring *ring)
{
int i;

for (i = 0; i < ring->count; i++) {
struct rt2661_tx_desc *desc = &ring->desc[i];
struct rt2661_tx_data *data = &ring->data[i];

if (data->m != NULL) {
bus_dmamap_sync(sc->sc_dmat, data->map, 0,
data->map->dm_mapsize, BUS_DMASYNC_POSTWRITE);
bus_dmamap_unload(sc->sc_dmat, data->map);
m_freem(data->m);
data->m = NULL;
}


data->ni = NULL;

desc->flags = 0;
}

bus_dmamap_sync(sc->sc_dmat, ring->map, 0, ring->map->dm_mapsize,
BUS_DMASYNC_PREWRITE);

ring->queued = 0;
ring->cur = ring->next = ring->stat = 0;
}