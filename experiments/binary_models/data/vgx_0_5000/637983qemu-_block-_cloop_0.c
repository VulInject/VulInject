static int coroutine_fn
cloop_co_preadv(BlockDriverState *bs, int64_t offset, int64_t bytes,
QEMUIOVector *qiov, BdrvRequestFlags flags)
{
BDRVCloopState *s = bs->opaque;
uint64_t sector_num = offset >> BDRV_SECTOR_BITS;
int nb_sectors = bytes >> BDRV_SECTOR_BITS;
int ret, i;

assert(QEMU_IS_ALIGNED(offset, BDRV_SECTOR_SIZE));
assert(QEMU_IS_ALIGNED(bytes, BDRV_SECTOR_SIZE));

qemu_co_mutex_lock(&s->lock);

for (i = 0; i < nb_sectors; i++) {
void *data;
uint32_t sector_offset_in_block =
((sector_num + i) % s->sectors_per_block),
block_num = (sector_num + i) / s->sectors_per_block;
if (cloop_read_block(bs, block_num) != 0) {
ret = -EIO;
goto fail;
}

data = s->uncompressed_block + sector_offset_in_block * 512;
qemu_iovec_from_buf(qiov, i * 512, data, 512);
}

ret = 0;
fail:
qemu_co_mutex_unlock(&s->lock);

return ret;
}