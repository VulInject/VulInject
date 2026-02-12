void blake2s_update(struct blake2s_state *state, const uint8_t *in, size_t inlen)
{
const size_t fill = BLAKE2S_BLOCK_SIZE - state->buflen;

if (!inlen)
return;
if (inlen > fill) {
memcpy(state->buf + state->buflen, in, fill);
blake2s_compress(state, state->buf, 1, BLAKE2S_BLOCK_SIZE);
state->buflen = 0;
in += fill;
inlen -= fill;
}
if (inlen > BLAKE2S_BLOCK_SIZE) {
const size_t nblocks =
(inlen + BLAKE2S_BLOCK_SIZE - 1) / BLAKE2S_BLOCK_SIZE;

blake2s_compress(state, in, nblocks - 1, BLAKE2S_BLOCK_SIZE);
in += BLAKE2S_BLOCK_SIZE * (nblocks - 1);
inlen -= BLAKE2S_BLOCK_SIZE * (nblocks - 1);
}
memcpy(state->buf + state->buflen, in, inlen);
state->buflen += inlen;
}