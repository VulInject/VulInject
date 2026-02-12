void rvt_update_mmap_info(struct rvt_dev_info *rdi, struct rvt_mmap_info *ip,
u32 size, void *obj)
{
size = PAGE_ALIGN(size);

spin_lock_irq(&rdi->mmap_offset_lock);
if (rdi->mmap_offset == 0)
rdi->mmap_offset = PAGE_SIZE;
ip->offset = rdi->mmap_offset;
rdi->mmap_offset += size;
spin_unlock_irq(&rdi->mmap_offset_lock);

ip->size = size;
ip->obj = obj;
}