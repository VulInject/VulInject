static bool bdrv_init_padding(BlockDriverState *bs,
int64_t offset, int64_t bytes,
BdrvRequestPadding *pad)
{
int64_t align = bs->bl.request_alignment;
int64_t sum;

bdrv_check_request(offset, bytes, &error_abort);
assert(align <= INT_MAX); 
assert(align <= SIZE_MAX / 2); 

memset(pad, 0, sizeof(*pad));

pad->head = offset & (align - 1);
pad->tail = ((offset + bytes) & (align - 1));
if (pad->tail) {
pad->tail = align - pad->tail;
}

if (!pad->head && !pad->tail) {
return false;
}

assert(bytes); 

sum = pad->head + bytes + pad->tail;
pad->buf_len = (sum > align && pad->head && pad->tail) ? 2 * align : align;
pad->buf = qemu_blockalign(bs, pad->buf_len);
pad->merge_reads = sum == pad->buf_len;
if (pad->tail) {
pad->tail_buf = pad->buf + pad->buf_len - align;
}

return true;
}