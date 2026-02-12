static void
nvmm_io_callback(struct nvmm_io *io)
{
MemTxAttrs attrs = { 0 };
int ret;

ret = address_space_rw(&address_space_io, io->port, attrs, io->data,
io->size, !io->in);
if (ret != MEMTX_OK) {
error_report("NVMM: I/O Transaction Failed "
"[%s, port=%u, size=%zu]", (io->in ? "in" : "out"),
io->port, io->size);
}


current_cpu->vcpu_dirty = false;
}