static void rdma_user_mmap_entry_free(struct kref *kref)
{
struct rdma_user_mmap_entry *entry =
container_of(kref, struct rdma_user_mmap_entry, ref);
struct ib_ucontext *ucontext = entry->ucontext;
unsigned long i;


xa_lock(&ucontext->mmap_xa);
for (i = 0; i < entry->npages; i++)
__xa_erase(&ucontext->mmap_xa, entry->start_pgoff + i);
xa_unlock(&ucontext->mmap_xa);

ibdev_dbg(ucontext->device, "mmap: pgoff[%#lx] npages[%#zx] removed\n",
entry->start_pgoff, entry->npages);

if (ucontext->device->ops.mmap_free)
ucontext->device->ops.mmap_free(entry);
}