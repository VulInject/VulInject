static int
nl_sock_transact(struct nl_sock *sock, const struct ofpbuf *request,
struct ofpbuf **replyp)
{
struct nl_transaction *transactionp;
struct nl_transaction transaction;

transaction.request = CONST_CAST(struct ofpbuf *, request);
transaction.reply = replyp ? ofpbuf_new(1024) : NULL;
transactionp = &transaction;

nl_sock_transact_multiple(sock, &transactionp, 1);

if (replyp) {
if (transaction.error) {
ofpbuf_delete(transaction.reply);
*replyp = NULL;
} else {
*replyp = transaction.reply;
}
}

return transaction.error;
}