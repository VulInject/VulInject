int prestera_span_rule_add(struct prestera_flow_block_binding *binding,
struct prestera_port *to_port,
bool ingress)
{
struct prestera_switch *sw = binding->port->sw;
u8 span_id;
int err;

if (binding->span_id != PRESTERA_SPAN_INVALID_ID)

return -EEXIST;

err = prestera_span_get(to_port, &span_id);
if (err)
return err;

err = prestera_hw_span_bind(binding->port, span_id, ingress);
if (err) {
prestera_span_put(sw, span_id);
return err;
}

binding->span_id = span_id;
return 0;
}