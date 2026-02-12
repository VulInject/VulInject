void nsq_consumer_worker_proc(char *topic, char *channel, int max_in_flight)
{
struct ev_loop *loop;
loop = ev_default_loop(0);
struct NSQReader *rdr;
void *ctx = NULL; 
static char address[128];

if (loop == NULL) {
LM_ERR("cannot get libev loop\n");
}

LM_DBG("NSQ Worker connecting to NSQ Topic [%s] and NSQ Channel [%s]\n", topic, channel);

rdr = new_nsq_reader(loop, topic, channel, (void *)ctx, NULL, NULL, NULL, nsq_message_handler);
rdr->max_in_flight = max_in_flight;

if (consumer_use_nsqd == 0) {
snprintf(address, 128, "%.*s", nsq_lookupd_address.len, nsq_lookupd_address.s);
nsq_reader_add_nsqlookupd_endpoint(rdr, address, lookupd_port);
} else {
snprintf(address, 128, "%.*s", nsqd_address.len, nsqd_address.s);
nsq_reader_connect_to_nsqd(rdr, address, nsqd_port);
}

nsq_run(loop);
}