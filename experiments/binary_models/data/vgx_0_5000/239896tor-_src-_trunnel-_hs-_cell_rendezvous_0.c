static ssize_t
trn_cell_rendezvous1_parse_into(trn_cell_rendezvous1_t *obj, const uint8_t *input, const size_t len_in)
{
const uint8_t *ptr = input;
size_t remaining = len_in;
ssize_t result = 0;
(void)result;


CHECK_REMAINING(TRUNNEL_REND_COOKIE_LEN, truncated);
memcpy(obj->rendezvous_cookie, ptr, TRUNNEL_REND_COOKIE_LEN);
remaining -= TRUNNEL_REND_COOKIE_LEN; ptr += TRUNNEL_REND_COOKIE_LEN;


TRUNNEL_DYNARRAY_EXPAND(uint8_t, &obj->handshake_info, remaining, {});
obj->handshake_info.n_ = remaining;
if (remaining)
memcpy(obj->handshake_info.elts_, ptr, remaining);
ptr += remaining; remaining -= remaining;
trunnel_assert(ptr + remaining == input + len_in);
return len_in - remaining;

truncated:
return -2;
trunnel_alloc_failed:
return -1;
}