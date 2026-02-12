static void show_dmvpn_entry(struct nhrp_vc *vc, void *ctx)
{
struct dmvpn_cfg *ctxt = ctx;
struct vty *vty;
struct json_object *json = NULL;

if (!ctxt || !ctxt->vty)
return;
vty = ctxt->vty;
if (ctxt->json) {
json = json_object_new_object();
json_object_string_addf(json, "src", "%pSU", &vc->local.nbma);
json_object_string_addf(json, "dst", "%pSU", &vc->remote.nbma);

if (notifier_active(&vc->notifier_list))
json_object_boolean_true_add(json, "notifierActive");
else
json_object_boolean_false_add(json, "notifierActive");

json_object_int_add(json, "sas", vc->ipsec);
json_object_string_add(json, "identity", vc->remote.id);
json_object_array_add(ctxt->json, json);
} else {
vty_out(vty, "%-24pSU %-24pSU %c      %-4d %-24s\n",
&vc->local.nbma, &vc->remote.nbma,
notifier_active(&vc->notifier_list) ? 'n' : ' ',
vc->ipsec, vc->remote.id);
}
}