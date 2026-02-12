static inline void dlm_get_next_cookie(u8 node_num, u64 *cookie)
{
u64 tmpnode = node_num;


tmpnode <<= 56;

spin_lock(&dlm_cookie_lock);
*cookie = (dlm_next_cookie | tmpnode);
if (++dlm_next_cookie & 0xff00000000000000ull) {
mlog(0, "This node's cookie will now wrap!\n");
dlm_next_cookie = 1;
}
spin_unlock(&dlm_cookie_lock);
}