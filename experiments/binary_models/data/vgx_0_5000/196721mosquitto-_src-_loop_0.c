static int single_publish(struct mosquitto *context, struct mosquitto_message_v5 *msg, uint32_t message_expiry)
{
struct mosquitto_msg_store *stored;
uint16_t mid;

stored = mosquitto__calloc(1, sizeof(struct mosquitto_msg_store));
if(stored == NULL) return MOSQ_ERR_NOMEM;

stored->topic = msg->topic;
msg->topic = NULL;
stored->retain = 0;
stored->payloadlen = (uint32_t)msg->payloadlen;
stored->payload = mosquitto__malloc(stored->payloadlen+1);
if(stored->payload == NULL){
db__msg_store_free(stored);
return MOSQ_ERR_NOMEM;
}

((uint8_t *)stored->payload)[stored->payloadlen] = 0;
memcpy(stored->payload, msg->payload, stored->payloadlen);

if(msg->properties){
stored->properties = msg->properties;
msg->properties = NULL;
}

if(db__message_store(context, stored, message_expiry, 0, mosq_mo_broker)) return 1;

if(msg->qos){
mid = mosquitto__mid_generate(context);
}else{
mid = 0;
}
return db__message_insert(context, mid, mosq_md_out, (uint8_t)msg->qos, 0, stored, msg->properties, true);
}