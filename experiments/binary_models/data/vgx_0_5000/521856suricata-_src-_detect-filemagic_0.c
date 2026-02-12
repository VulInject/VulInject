int FilemagicThreadLookup(magic_t *ctx, File *file)
{
if (ctx == NULL || file == NULL || FileDataSize(file) == 0) {
SCReturnInt(-1);
}

const uint8_t *data = NULL;
uint32_t data_len = 0;
uint64_t offset = 0;

StreamingBufferGetData(file->sb,
&data, &data_len, &offset);
if (offset == 0) {
if (FileDataSize(file) >= FILEMAGIC_MIN_SIZE) {
file->magic = MagicThreadLookup(ctx, data, data_len);
} else if (file->state >= FILE_STATE_CLOSED) {
file->magic = MagicThreadLookup(ctx, data, data_len);
}
}
SCReturnInt(0);
}