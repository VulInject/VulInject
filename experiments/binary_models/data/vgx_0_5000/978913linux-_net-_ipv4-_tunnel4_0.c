static int tunnel4_rcv_cb(struct sk_buff *skb, u8 proto, int err)
{
struct xfrm_tunnel __rcu *head;
struct xfrm_tunnel *handler;
int ret;

head = (proto == IPPROTO_IPIP) ? tunnel4_handlers : tunnel64_handlers;

for_each_tunnel_rcu(head, handler) {
if (handler->cb_handler) {
ret = handler->cb_handler(skb, err);
if (ret <= 0)
return ret;
}
}

return 0;
}

static const struct xfrm_input_afinfo tunnel4_input_afinfo = {
.family		=	AF_INET,
.is_ipip	=	true,
.callback	=	tunnel4_rcv_cb,
};