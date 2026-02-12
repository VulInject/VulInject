static int sub__add_leaf(struct mosquitto *context, uint8_t qos, uint32_t identifier, int options, struct mosquitto__subleaf **head, struct mosquitto__subleaf **newleaf)
{
struct mosquitto__subleaf *leaf;

*newleaf = NULL;
leaf = *head;

while(leaf){
if(leaf->context && leaf->context->id && !strcmp(leaf->context->id, context->id)){

leaf->qos = qos;
leaf->identifier = identifier;
return MOSQ_ERR_SUB_EXISTS;
}
leaf = leaf->next;
}
leaf = mosquitto__calloc(1, sizeof(struct mosquitto__subleaf));
if(!leaf) return MOSQ_ERR_NOMEM;
leaf->context = context;
leaf->qos = qos;
leaf->identifier = identifier;
leaf->no_local = ((options & MQTT_SUB_OPT_NO_LOCAL) != 0);
leaf->retain_as_published = ((options & MQTT_SUB_OPT_RETAIN_AS_PUBLISHED) != 0);

DL_APPEND(*head, leaf);
*newleaf = leaf;

return MOSQ_ERR_SUCCESS;
}