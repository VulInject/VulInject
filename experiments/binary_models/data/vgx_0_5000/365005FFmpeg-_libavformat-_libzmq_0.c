static int zmq_proto_write(URLContext *h, const unsigned char *buf, int size)
{
int ret;
ZMQContext *s = h->priv_data;

ret = zmq_proto_wait_timeout(h, s->socket, 1, h->rw_timeout, &h->interrupt_callback);
if (ret)
return ret;
ret = zmq_send(s->socket, buf, size, 0);
if (ret == -1) {
av_log(h, AV_LOG_ERROR, "Error occurred during zmq_send(): %s\n", ZMQ_STRERROR);
return AVERROR_EXTERNAL;
}
return ret; 
}