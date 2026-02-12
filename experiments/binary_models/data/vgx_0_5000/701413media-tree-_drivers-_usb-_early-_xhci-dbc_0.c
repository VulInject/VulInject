static void xdbc_reset_ring(struct xdbc_ring *ring)
{
struct xdbc_segment *seg = ring->segment;
struct xdbc_trb *link_trb;

memset(seg->trbs, 0, PAGE_SIZE);

ring->enqueue = seg->trbs;
ring->dequeue = seg->trbs;
ring->cycle_state = 1;

if (ring != &xdbc.evt_ring) {
link_trb = &seg->trbs[XDBC_TRBS_PER_SEGMENT - 1];
link_trb->field[0] = cpu_to_le32(lower_32_bits(seg->dma));
link_trb->field[1] = cpu_to_le32(upper_32_bits(seg->dma));
link_trb->field[3] = cpu_to_le32(TRB_TYPE(TRB_LINK)) | cpu_to_le32(LINK_TOGGLE);
}
}