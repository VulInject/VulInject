static struct tb_switch *alloc_switch(struct tb_switch *parent_sw, u64 route,
const uuid_t *uuid)
{
struct tb *tb = parent_sw->tb;
struct tb_switch *sw;

sw = tb_switch_alloc(tb, &parent_sw->dev, route);
if (IS_ERR(sw)) {
tb_warn(tb, "failed to allocate switch at %llx\n", route);
return sw;
}

sw->uuid = kmemdup(uuid, sizeof(*uuid), GFP_KERNEL);
if (!sw->uuid) {
tb_switch_put(sw);
return ERR_PTR(-ENOMEM);
}

init_completion(&sw->rpm_complete);
return sw;
}