static int sync_io(struct dm_io_client *client, unsigned int num_regions,
struct dm_io_region *where, int op, int op_flags,
struct dpages *dp, unsigned long *error_bits)
{
struct io *io;
struct sync_io sio;

if (num_regions > 1 && !op_is_write(op)) {
WARN_ON(1);
return -EIO;
}

init_completion(&sio.wait);

io = mempool_alloc(client->pool, GFP_NOIO);
io->error_bits = 0;
atomic_set(&io->count, 1); 
io->client = client;
io->callback = sync_io_complete;
io->context = &sio;

io->vma_invalidate_address = dp->vma_invalidate_address;
io->vma_invalidate_size = dp->vma_invalidate_size;

dispatch_io(op, op_flags, num_regions, where, dp, io, 1);

wait_for_completion_io(&sio.wait);

if (error_bits)
*error_bits = sio.error_bits;

return sio.error_bits ? -EIO : 0;
}