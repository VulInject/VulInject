static struct sk_buff *named_prepare_buf(struct net *net, u32 type, u32 size,
u32 dest)
{
struct tipc_net *tn = net_generic(net, tipc_net_id);
struct sk_buff *buf = tipc_buf_acquire(INT_H_SIZE + size, GFP_ATOMIC);
struct tipc_msg *msg;

if (buf != NULL) {
msg = buf_msg(buf);
tipc_msg_init(tn->own_addr, msg, NAME_DISTRIBUTOR, type,
INT_H_SIZE, dest);
msg_set_size(msg, INT_H_SIZE + size);
}
return buf;
}