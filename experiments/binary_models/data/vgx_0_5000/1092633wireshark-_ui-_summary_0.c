void
summary_fill_in_capture(capture_file *cf,capture_options *capture_opts, summary_tally *st)
{
iface_summary_info iface;
interface_t *device;
guint i;

if (st->ifaces->len == 0) {

for (i = 0; i < capture_opts->all_ifaces->len; i++) {
device = &g_array_index(capture_opts->all_ifaces, interface_t, i);
if (!device->selected) {
continue;
}
iface.cfilter = g_strdup(device->cfilter);
iface.name = g_strdup(device->name);
iface.descr = g_strdup(device->display_name);
iface.drops_known = cf->drops_known;
iface.drops = cf->drops;
iface.snap = device->snaplen;
iface.encap_type = wtap_pcap_encap_to_wtap_encap(device->active_dlt);
g_array_append_val(st->ifaces, iface);
}
}
}