static int zmq_proto_read(URLContext *h, unsigned char *buf, int size)
{
int ret;
ZMQContext *s = h->priv_data;

ret = zmq_proto_wait_timeout(h, s->socket, 0, h->rw_timeout, &h->interrupt_callback);
if (ret)
return ret;
ret = zmq_recv(s->socket, buf, size, 0);
if (ret == -1) {
av_log(h, AV_LOG_ERROR, "Error occurred during zmq_recv(): %s\n", ZMQ_STRERROR);
return AVERROR_EXTERNAL;
}
if (ret > size) {
s->pkt_size_overflow = FFMAX(s->pkt_size_overflow, ret);
av_log(h, AV_LOG_WARNING, "Message exceeds available space in the buffer. Message will be truncated. Setting -pkt_size %d may resolve the issue.\n", s->pkt_size_overflow);
ret = size;
}
return ret; 
}