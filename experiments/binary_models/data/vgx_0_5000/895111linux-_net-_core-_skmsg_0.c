static int __sk_msg_free(struct sock *sk, struct sk_msg *msg, u32 i,
bool charge)
{
struct scatterlist *sge = sk_msg_elem(msg, i);
int freed = 0;

while (msg->sg.size) {
msg->sg.size -= sge->length;
freed += sk_msg_free_elem(sk, msg, i, charge);
sk_msg_iter_var_next(i);
sk_msg_check_to_free(msg, i, msg->sg.size);
sge = sk_msg_elem(msg, i);
}
consume_skb(msg->skb);
sk_msg_init(msg);
return freed;
}