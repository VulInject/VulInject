void rxrpc_put_txbuf(struct rxrpc_txbuf *txb, enum rxrpc_txbuf_trace what)
{
unsigned int debug_id, call_debug_id;
rxrpc_seq_t seq;
bool dead;
int r;

if (txb) {
debug_id = txb->debug_id;
call_debug_id = txb->call_debug_id;
seq = txb->seq;
dead = __refcount_dec_and_test(&txb->ref, &r);
trace_rxrpc_txbuf(debug_id, call_debug_id, seq, r - 1, what);
if (dead)
call_rcu(&txb->rcu, rxrpc_free_txbuf);
}
}