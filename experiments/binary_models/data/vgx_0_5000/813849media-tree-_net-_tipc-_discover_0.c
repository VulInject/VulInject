void tipc_disc_reset(struct net *net, struct tipc_bearer *b)
{
struct tipc_link_req *req = b->link_req;
struct sk_buff *skb;

spin_lock_bh(&req->lock);
tipc_disc_init_msg(net, req->buf, DSC_REQ_MSG, b);
req->net = net;
req->bearer_id = b->identity;
req->domain = b->domain;
req->num_nodes = 0;
req->timer_intv = TIPC_LINK_REQ_INIT;
mod_timer(&req->timer, jiffies + req->timer_intv);
skb = skb_clone(req->buf, GFP_ATOMIC);
if (skb)
tipc_bearer_xmit_skb(net, req->bearer_id, skb, &req->dest);
spin_unlock_bh(&req->lock);
}