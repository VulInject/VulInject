static int fbo_emulate_request_sense(struct tcmu_device *dev, uint8_t *cdb,
struct iovec *iovec, size_t iov_cnt,
uint8_t *sense)
{
struct fbo_state *state = tcmur_dev_get_private(dev);
uint8_t buf[18];

if (cdb[1] & 0x01)
return TCMU_STS_INVALID_CDB;


memset(buf, 0, sizeof(buf));

buf[0] = 0x70;
buf[7] = 0xa;
if (state->flags & FBO_FORMATTING) {
buf[2] = NOT_READY;
buf[12] = 0x04;		
buf[13] = 0x04;		
buf[15] = 0x80;
put_unaligned_be16(state->format_progress, &buf[16]);
}
else {
buf[2] = NO_SENSE;
}

tcmu_memcpy_into_iovec(iovec, iov_cnt, buf, sizeof(buf));

return TCMU_STS_OK;
}