int bridge__connect_step2(struct mosquitto *context)
{
int rc;

if(!context || !context->bridge) return MOSQ_ERR_INVAL;

log__printf(NULL, MOSQ_LOG_NOTICE, "Connecting bridge (step 2) %s (%s:%d)", context->bridge->name, context->bridge->addresses[context->bridge->cur_address].address, context->bridge->addresses[context->bridge->cur_address].port);
rc = net__try_connect_step2(context, context->bridge->addresses[context->bridge->cur_address].port, &context->sock);
if(rc > 0){
if(rc == MOSQ_ERR_TLS){
mux__delete(context);
net__socket_close(context);
return rc; 
}else if(rc == MOSQ_ERR_ERRNO){
log__printf(NULL, MOSQ_LOG_ERR, "Error creating bridge: %s.", strerror(errno));
}else if(rc == MOSQ_ERR_EAI){
log__printf(NULL, MOSQ_LOG_ERR, "Error creating bridge: %s.", gai_strerror(errno));
}

return rc;
}

HASH_ADD(hh_sock, db.contexts_by_sock, sock, sizeof(context->sock), context);

if(rc == MOSQ_ERR_CONN_PENDING){
mosquitto__set_state(context, mosq_cs_connect_pending);
mux__add_out(context);
}
return rc;
}