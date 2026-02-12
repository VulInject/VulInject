static chunk_t zalloc_chunk(size_t length, const char *name)
{
chunk_t chunk;
chunk.len = length;
chunk.ptr = alloc_bytes(length, name);
memset(chunk.ptr, 0, chunk.len);
return chunk;
}


chunk_t decode_to_chunk(const char *prefix, const char *original)
{
DBGF(DBG_CRYPT, "decode_to_chunk: %s: input \"%s\"",
prefix, original);
chunk_t chunk;
if (startswith(original, "0x")) {
chunk = chunk_from_hex(original + strlen("0x"), original);
} else {
chunk = zalloc_chunk(strlen(original), original);
memcpy(chunk.ptr, original, chunk.len);
}
if (DBGP(DBG_CRYPT)) {
DBG_dump_hunk("decode_to_chunk: output: ", chunk);
}
return chunk;
}