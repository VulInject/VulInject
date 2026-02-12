void crypto_rng_add_event(enum crypto_rng_src sid, unsigned int *pnum,
const void *data, size_t dlen)
{
unsigned int pn = get_next_pnum(pnum);
uint8_t snum = sid >> 1;

if (CRYPTO_RNG_SRC_IS_QUICK(sid)) {
push_ring_buffer(snum, pn, data, dlen);
} else {
mutex_lock(&state_mu);
add_event(snum, pn, data, dlen);
drain_ring_buffer();
mutex_unlock(&state_mu);
}
}