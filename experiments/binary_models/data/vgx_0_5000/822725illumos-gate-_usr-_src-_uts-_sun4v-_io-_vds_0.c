static void
vds_change_vd(vds_t *vds, md_t *prev_md, mde_cookie_t prev_vd_node,
md_t *curr_md, mde_cookie_t curr_vd_node)
{
char		*curr_dev, *prev_dev;
uint64_t	curr_id = 0, curr_ldc_id = 0, curr_options = 0;
uint64_t	prev_id = 0, prev_ldc_id = 0, prev_options = 0;
size_t		len;



if (md_get_prop_val(prev_md, prev_vd_node, VD_ID_PROP, &prev_id) != 0) {
PRN("Error getting previous vdisk \"%s\" property",
VD_ID_PROP);
return;
}
if (md_get_prop_val(curr_md, curr_vd_node, VD_ID_PROP, &curr_id) != 0) {
PRN("Error getting current vdisk \"%s\" property", VD_ID_PROP);
return;
}
if (curr_id != prev_id) {
PRN("Not changing vdisk:  ID changed from %lu to %lu",
prev_id, curr_id);
return;
}


if (vds_get_ldc_id(prev_md, prev_vd_node, &prev_ldc_id) != 0) {
PRN("Error getting LDC ID for vdisk %lu", prev_id);
return;
}

if (vds_get_ldc_id(curr_md, curr_vd_node, &curr_ldc_id) != 0) {
PRN("Error getting LDC ID for vdisk %lu", curr_id);
return;
}
if (curr_ldc_id != prev_ldc_id) {
_NOTE(NOTREACHED);	
PRN("Not changing vdisk:  "
"LDC ID changed from %lu to %lu", prev_ldc_id, curr_ldc_id);
return;
}


if (md_get_prop_str(prev_md, prev_vd_node, VD_BLOCK_DEVICE_PROP,
&prev_dev) != 0) {
PRN("Error getting previous vdisk \"%s\"",
VD_BLOCK_DEVICE_PROP);
return;
}
if (md_get_prop_str(curr_md, curr_vd_node, VD_BLOCK_DEVICE_PROP,
&curr_dev) != 0) {
PRN("Error getting current vdisk \"%s\"", VD_BLOCK_DEVICE_PROP);
return;
}
if (((len = strlen(curr_dev)) == strlen(prev_dev)) &&
(strncmp(curr_dev, prev_dev, len) == 0))
return;	


vds_get_options(prev_md, prev_vd_node, &prev_options);
vds_get_options(curr_md, curr_vd_node, &curr_options);
if (prev_options != curr_options) {
PRN("Not changing vdisk:  options changed from %lx to %lx",
prev_options, curr_options);
return;
}

PR0("Changing vdisk ID %lu", prev_id);


if (mod_hash_destroy(vds->vd_table, (mod_hash_key_t)prev_id) != 0)
PRN("No entry found for vdisk ID %lu", prev_id);


if (vds_init_vd(vds, curr_id, curr_dev, curr_options,
curr_ldc_id) != 0) {
PRN("Failed to change vdisk ID %lu", curr_id);
return;
}
}