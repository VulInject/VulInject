bool enqueue_ih_ring_entry(struct kfd_dev *kfd,	const void *ih_ring_entry)
{
unsigned int rptr = atomic_read(&kfd->interrupt_ring_rptr);
unsigned int wptr = atomic_read(&kfd->interrupt_ring_wptr);

if ((rptr - wptr) % kfd->interrupt_ring_size ==
kfd->device_info->ih_ring_entry_size) {

dev_err_ratelimited(kfd_chardev(),
"Interrupt ring overflow, dropping interrupt.\n");
return false;
}

memcpy(kfd->interrupt_ring + wptr, ih_ring_entry,
kfd->device_info->ih_ring_entry_size);

wptr = (wptr + kfd->device_info->ih_ring_entry_size) %
kfd->interrupt_ring_size;
smp_wmb(); 
atomic_set(&kfd->interrupt_ring_wptr, wptr);

return true;
}