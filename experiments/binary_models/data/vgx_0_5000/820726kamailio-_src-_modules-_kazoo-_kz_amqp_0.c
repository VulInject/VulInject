int check_timeout(struct timeval *now, struct timeval *start, struct timeval *timeout)
{
struct timeval chk;
chk.tv_sec = now->tv_sec - start->tv_sec;
chk.tv_usec = now->tv_usec - start->tv_usec;
if(chk.tv_usec >= timeout->tv_usec)
if(chk.tv_sec >= timeout->tv_sec)
return 1;
return 0;
}

int consumer = 0;

void kz_amqp_send_consumer_event_ex(char* payload, char* event_key, char* event_subkey, amqp_channel_t channel, uint64_t delivery_tag, int nextConsumer)
{
kz_amqp_consumer_delivery_ptr ptr = (kz_amqp_consumer_delivery_ptr) shm_malloc(sizeof(kz_amqp_consumer_delivery));
if(ptr == NULL) {
SHM_MEM_ERROR;
return;
}
memset(ptr, 0, sizeof(kz_amqp_consumer_delivery));
ptr->channel = channel;
ptr->delivery_tag = delivery_tag;
ptr->payload = payload;
ptr->event_key = event_key;
ptr->event_subkey = event_subkey;
if (write(kz_worker_pipes[consumer], &ptr, sizeof(ptr)) != sizeof(ptr)) {
LM_ERR("failed to send payload to consumer %d : %s\nPayload %s\n", consumer, strerror(errno), payload);
}

if(nextConsumer) {
consumer++;
if(consumer >= dbk_consumer_workers) {
consumer = 0;
}
}
}