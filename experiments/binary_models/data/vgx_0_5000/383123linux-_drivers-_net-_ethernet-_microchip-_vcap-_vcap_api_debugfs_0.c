static int vcap_debugfs_show_keysets(struct vcap_rule_internal *ri,
struct vcap_output_print *out)
{
struct vcap_admin *admin = ri->admin;
enum vcap_keyfield_set keysets[10];
struct vcap_keyset_list matches;
int err;

matches.keysets = keysets;
matches.cnt = 0;
matches.max = ARRAY_SIZE(keysets);

if (ri->state == VCAP_RS_DISABLED)
err = vcap_rule_get_keysets(ri, &matches);
else
err = vcap_find_keystream_keysets(ri->vctrl, admin->vtype,
admin->cache.keystream,
admin->cache.maskstream,
false, 0, &matches);
if (err) {
pr_err("%s:%d: could not find valid keysets: %d\n",
__func__, __LINE__, err);
return err;
}

out->prf(out->dst, "  keysets:");
for (int idx = 0; idx < matches.cnt; ++idx)
out->prf(out->dst, " %s",
vcap_keyset_name(ri->vctrl, matches.keysets[idx]));
out->prf(out->dst, "\n");
return 0;
}