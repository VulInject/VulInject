l_ok
l_byteaAppendData(L_BYTEA        *ba,
const l_uint8  *newdata,
size_t          newbytes)
{
size_t  size, nalloc, reqsize;

if (!ba)
return ERROR_INT("ba not defined", __func__, 1);
if (!newdata)
return ERROR_INT("newdata not defined", __func__, 1);

size = l_byteaGetSize(ba);
reqsize = size + newbytes + 1;
nalloc = ba->nalloc;
if (nalloc < reqsize) {
if (l_byteaExtendArrayToSize(ba, 2 * reqsize))
return ERROR_INT("extension failed", __func__, 1);
}

memcpy(ba->data + size, newdata, newbytes);
ba->size += newbytes;
return 0;
}