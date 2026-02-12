int tcp_fastopen_reset_cipher(struct net *net, struct sock *sk,
void *primary_key, void *backup_key)
{
struct tcp_fastopen_context *ctx, *octx;
struct fastopen_queue *q;
int err = 0;

ctx = kmalloc(sizeof(*ctx), GFP_KERNEL);
if (!ctx) {
err = -ENOMEM;
goto out;
}

ctx->key[0].key[0] = get_unaligned_le64(primary_key);
ctx->key[0].key[1] = get_unaligned_le64(primary_key + 8);
if (backup_key) {
ctx->key[1].key[0] = get_unaligned_le64(backup_key);
ctx->key[1].key[1] = get_unaligned_le64(backup_key + 8);
ctx->num = 2;
} else {
ctx->num = 1;
}

if (sk) {
q = &inet_csk(sk)->icsk_accept_queue.fastopenq;
octx = xchg((__force struct tcp_fastopen_context **)&q->ctx, ctx);
} else {
octx = xchg((__force struct tcp_fastopen_context **)&net->ipv4.tcp_fastopen_ctx, ctx);
}

if (octx)
call_rcu(&octx->rcu, tcp_fastopen_ctx_free);
out:
return err;
}