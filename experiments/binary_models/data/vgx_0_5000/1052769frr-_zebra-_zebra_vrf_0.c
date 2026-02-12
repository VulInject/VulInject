static int zebra_vrf_new(struct vrf *vrf)
{
struct zebra_vrf *zvrf;

if (IS_ZEBRA_DEBUG_EVENT)
zlog_debug("VRF %s created, id %u", vrf->name, vrf->vrf_id);

zvrf = zebra_vrf_alloc(vrf);
if (!vrf_is_backend_netns())
zvrf->zns = zebra_ns_lookup(NS_DEFAULT);

otable_init(&zvrf->other_tables);

router_id_init(zvrf);


table_manager_enable(zvrf);

return 0;
}