static bool sbuf_queue_send(SBuf *sbuf)
{
int err;
AssertActive(sbuf);
Assert(sbuf->wait_type == W_RECV);




err = event_del(&sbuf->ev);
sbuf->wait_type = W_NONE; 
if (err < 0) {
log_warning("sbuf_queue_send: event_del failed: %s", strerror(errno));
return false;
}


event_assign(&sbuf->ev, pgb_event_base, sbuf->dst->sock, EV_WRITE, sbuf_send_cb, sbuf);
err = event_add(&sbuf->ev, NULL);
if (err < 0) {
log_warning("sbuf_queue_send: event_add failed: %s", strerror(errno));
return false;
}
sbuf->wait_type = W_SEND;

return true;
}