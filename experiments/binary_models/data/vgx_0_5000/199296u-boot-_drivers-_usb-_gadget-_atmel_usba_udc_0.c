static void next_fifo_transaction(struct usba_ep *ep, struct usba_request *req)
{
unsigned int transaction_len;

transaction_len = req->req.length - req->req.actual;
req->last_transaction = 1;
if (transaction_len > ep->ep.maxpacket) {
transaction_len = ep->ep.maxpacket;
req->last_transaction = 0;
} else if (transaction_len == ep->ep.maxpacket && req->req.zero) {
req->last_transaction = 0;
}

DBG(DBG_QUEUE, "%s: submit_transaction, req %p (length %d)%s\n",
ep->ep.name, req, transaction_len,
req->last_transaction ? ", done" : "");

memcpy(ep->fifo, req->req.buf + req->req.actual, transaction_len);
usba_ep_writel(ep, SET_STA, USBA_TX_PK_RDY);
req->req.actual += transaction_len;
}