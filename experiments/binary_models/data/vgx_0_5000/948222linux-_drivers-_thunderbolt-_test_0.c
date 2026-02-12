static struct tb_switch *alloc_switch(struct kunit *test, u64 route,
u8 upstream_port, u8 max_port_number)
{
struct tb_switch *sw;
size_t size;
int i;

sw = kunit_kzalloc(test, sizeof(*sw), GFP_KERNEL);
if (!sw)
return NULL;

sw->config.upstream_port_number = upstream_port;
sw->config.depth = tb_route_length(route);
sw->config.route_hi = upper_32_bits(route);
sw->config.route_lo = lower_32_bits(route);
sw->config.enabled = 0;
sw->config.max_port_number = max_port_number;

size = (sw->config.max_port_number + 1) * sizeof(*sw->ports);
sw->ports = kunit_kzalloc(test, size, GFP_KERNEL);
if (!sw->ports)
return NULL;

for (i = 0; i <= sw->config.max_port_number; i++) {
sw->ports[i].sw = sw;
sw->ports[i].port = i;
sw->ports[i].config.port_number = i;
if (i) {
kunit_ida_init(test, &sw->ports[i].in_hopids);
kunit_ida_init(test, &sw->ports[i].out_hopids);
}
}

return sw;
}