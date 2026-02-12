void zebra_evpn_es_evi_show(struct vty *vty, bool uj, int detail)
{
json_object *json_array = NULL;
struct zebra_vrf *zvrf;
struct evpn_mh_show_ctx wctx;

zvrf = zebra_vrf_get_evpn();
if (uj)
json_array = json_object_new_array();

memset(&wctx, 0, sizeof(wctx));
wctx.vty = vty;
wctx.json = json_array;
wctx.detail = detail;

if (!detail && !json_array) {
vty_out(vty, "Type: L local, R remote\n");
vty_out(vty, "%-8s %-30s %-4s\n", "VNI", "ESI", "Type");
}

hash_iterate(zvrf->evpn_table, zebra_evpn_es_evi_show_one_evpn_hash_cb,
&wctx);

if (uj)
vty_json(vty, json_array);
}