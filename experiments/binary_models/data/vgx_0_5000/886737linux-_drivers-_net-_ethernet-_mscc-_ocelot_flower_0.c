static int ocelot_flower_parse(struct ocelot *ocelot, int port, bool ingress,
struct flow_cls_offload *f,
struct ocelot_vcap_filter *filter)
{
int ret;

filter->prio = f->common.prio;
filter->id.cookie = f->cookie;
filter->id.tc_offload = true;

ret = ocelot_flower_parse_action(ocelot, port, ingress, f, filter);
if (ret)
return ret;


if (filter->type == OCELOT_PSFP_FILTER_OFFLOAD)
return 0;

return ocelot_flower_parse_key(ocelot, port, ingress, f, filter);
}