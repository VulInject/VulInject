extern void slurm_msg_t_copy(slurm_msg_t *dest, slurm_msg_t *src)
{
slurm_msg_t_init(dest);
dest->protocol_version = src->protocol_version;
dest->forward = src->forward;
dest->ret_list = src->ret_list;
dest->forward_struct = src->forward_struct;


if (dest->orig_addr.ss_family == AF_INET6) {
struct sockaddr_in6 *sin =
(struct sockaddr_in6 *) &dest->orig_addr;
memset(&sin->sin6_addr, 0, 16);
} else {
struct sockaddr_in *sin =
(struct sockaddr_in *) &dest->orig_addr;
sin->sin_addr.s_addr = 0;
}

dest->orig_addr.ss_family = AF_UNSPEC;
if (src->auth_uid_set)
slurm_msg_set_r_uid(dest, src->auth_uid);
}