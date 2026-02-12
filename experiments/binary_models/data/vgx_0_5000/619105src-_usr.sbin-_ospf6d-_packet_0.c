int
gen_ospf_hdr(struct ibuf *buf, struct iface *iface, u_int8_t type)
{
struct ospf_hdr	ospf_hdr;

bzero(&ospf_hdr, sizeof(ospf_hdr));
ospf_hdr.version = OSPF6_VERSION;
ospf_hdr.type = type;
ospf_hdr.rtr_id = ospfe_router_id();
if (iface->type != IF_TYPE_VIRTUALLINK)
ospf_hdr.area_id = iface->area->id.s_addr;
ospf_hdr.instance = DEFAULT_INSTANCE_ID;
ospf_hdr.zero = 0;		

return (ibuf_add(buf, &ospf_hdr, sizeof(ospf_hdr)));
}