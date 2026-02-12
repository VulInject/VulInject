static void
keysock_error(keysock_t *ks, mblk_t *mp, int error, int diagnostic)
{
sadb_msg_t *samsg = (sadb_msg_t *)mp->b_rptr;
keysock_stack_t	*keystack = ks->keysock_keystack;

ASSERT(mp->b_datap->db_type == M_DATA);

if (samsg->sadb_msg_type < SADB_GETSPI ||
samsg->sadb_msg_type > SADB_MAX)
samsg->sadb_msg_type = SADB_RESERVED;


ASSERT(mp->b_rptr + sizeof (*samsg) <= mp->b_datap->db_lim);
mp->b_wptr = mp->b_rptr + sizeof (*samsg);
samsg->sadb_msg_len = SADB_8TO64(sizeof (sadb_msg_t));
samsg->sadb_msg_errno = (uint8_t)error;
samsg->sadb_x_msg_diagnostic = (uint16_t)diagnostic;

keysock_passup(mp, samsg, ks->keysock_serial, NULL, B_FALSE, keystack);
}