static void on_connect(struct mosquitto *mosq, void *obj, int reason_code, int flags, const mosquitto_property *properties)
{
struct mosq_ctrl *ctrl = obj;

UNUSED(flags);
UNUSED(properties);

if(reason_code == 0){
if(ctrl->response_topic){
mosquitto_subscribe(mosq, NULL, ctrl->response_topic, ctrl->cfg.qos);
free(ctrl->response_topic);
ctrl->response_topic = NULL;
}
}else{
if(ctrl->cfg.protocol_version == MQTT_PROTOCOL_V5){
if(reason_code == MQTT_RC_UNSUPPORTED_PROTOCOL_VERSION){
fprintf(stderr, "Connection error: %s. Try connecting to an MQTT v5 broker, or use MQTT v3.x mode.\n", mosquitto_reason_string(reason_code));
}else{
fprintf(stderr, "Connection error: %s\n", mosquitto_reason_string(reason_code));
}
}else{
fprintf(stderr, "Connection error: %s\n", mosquitto_connack_string(reason_code));
}
run = 0;
mosquitto_disconnect_v5(mosq, 0, NULL);
}
}