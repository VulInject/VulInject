static int subs__process(struct mosquitto__subhier *hier, const char *source_id, const char *topic, uint8_t qos, int retain, struct mosquitto_msg_store *stored)
{
int rc = 0;
int rc2;
struct mosquitto__subleaf *leaf;

rc = subs__shared_process(hier, topic, qos, retain, stored);

leaf = hier->subs;
while(source_id && leaf){
if(!leaf->context->id || (leaf->no_local && !strcmp(leaf->context->id, source_id))){
leaf = leaf->next;
continue;
}
rc2 = subs__send(leaf, topic, qos, retain, stored);
if(rc2){
rc = 1;
}
leaf = leaf->next;
}
if(hier->subs || hier->shared){
return rc;
}else{
return MOSQ_ERR_NO_SUBSCRIBERS;
}
}