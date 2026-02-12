int
gen_ospf_hdr(struct ibuf *buf, struct iface *iface, u_int8_t type)
{
struct ospf_hdr	ospf_hdr;

bzero(&ospf_hdr, sizeof(ospf_hdr));
ospf_hdr.version = OSPF_VERSION;
ospf_hdr.type = type;
ospf_hdr.rtr_id = ospfe_router_id();
if (iface->type != IF_TYPE_VIRTUALLINK)
ospf_hdr.area_id = iface->area->id.s_addr;
ospf_hdr.auth_type = htons(iface->auth_type);

return (ibuf_add(buf, &ospf_hdr, sizeof(ospf_hdr)));
}