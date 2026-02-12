DAT_RETURN
dapls_rbuf_alloc(
INOUT	DAPL_RING_BUFFER	*rbuf,
IN	DAT_COUNT		 size)
{
unsigned int			rsize;	


size++;


rsize = 1;
while ((DAT_COUNT)rsize < size) {
rsize <<= 1;
}

rbuf->base = (void *) dapl_os_alloc(rsize * sizeof (void *));
if (rbuf->base != NULL) {
rbuf->lim = rsize - 1;
rbuf->head = 0;
rbuf->tail = 0;
dapl_os_lock_init(&rbuf->lock);
} else {
return (DAT_INSUFFICIENT_RESOURCES | DAT_RESOURCE_MEMORY);
}

return (DAT_SUCCESS);
}