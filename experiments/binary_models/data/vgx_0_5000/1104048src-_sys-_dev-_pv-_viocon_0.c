void
viocon_rx_soft(void *arg)
{
struct viocon_port *vp = arg;
struct virtqueue *vq = vp->vp_rx;
struct virtio_softc *vsc = vq->vq_owner;
struct tty *tp = vp->vp_tty;
int slot, len, i;
u_char *p;

while (!vp->vp_iflow && virtio_dequeue(vsc, vq, &slot, &len) == 0) {
bus_dmamap_sync(vsc->sc_dmat, vp->vp_dmamap,
slot * BUFSIZE, BUFSIZE, BUS_DMASYNC_POSTREAD);
p = vp->vp_rx_buf + slot * BUFSIZE;
for (i = 0; i < len; i++)
(*linesw[tp->t_line].l_rint)(*p++, tp);
virtio_dequeue_commit(vq, slot);
}

viocon_rx_fill(vp);

return;
}