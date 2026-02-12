int handle__pingresp(struct mosquitto *mosq)
{
assert(mosq);

if(mosquitto__get_state(mosq) != mosq_cs_active){
return MOSQ_ERR_PROTOCOL;
}

mosq->ping_t = 0; 
if(mosq->bridge == NULL){
return MOSQ_ERR_PROTOCOL;
}
log__printf(NULL, MOSQ_LOG_DEBUG, "Received PINGRESP from %s", SAFE_PRINT(mosq->id));
log__printf(mosq, MOSQ_LOG_DEBUG, "Client %s received PINGRESP", SAFE_PRINT(mosq->id));
return MOSQ_ERR_SUCCESS;
}