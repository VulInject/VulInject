static int xsk_configure_umem(struct xsk_umem_info *umem, void *buffer, u64 size)
{
struct xsk_umem_config cfg = {
.fill_size = XSK_RING_PROD__DEFAULT_NUM_DESCS,
.comp_size = XSK_RING_CONS__DEFAULT_NUM_DESCS,
.frame_size = umem->frame_size,
.frame_headroom = umem->frame_headroom,
.flags = XSK_UMEM__DEFAULT_FLAGS
};
int ret;

if (umem->unaligned_mode)
cfg.flags |= XDP_UMEM_UNALIGNED_CHUNK_FLAG;

ret = xsk_umem__create(&umem->umem, buffer, size,
&umem->fq, &umem->cq, &cfg);
if (ret)
return ret;

umem->buffer = buffer;
return 0;
}