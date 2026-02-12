DEFUN_YANG_NOSH (vrf,
vrf_cmd,
"vrf NAME",
"Select a VRF to configure\n"
"VRF's name\n")
{
int idx_name = 1;
const char *vrfname = argv[idx_name]->arg;
char xpath_list[XPATH_MAXLEN];
struct vrf *vrf;
int ret;

if (strlen(vrfname) > VRF_NAMSIZ) {
vty_out(vty,
"%% VRF name %s invalid: length exceeds %d bytes\n",
vrfname, VRF_NAMSIZ);
return CMD_WARNING_CONFIG_FAILED;
}

snprintf(xpath_list, sizeof(xpath_list), FRR_VRF_KEY_XPATH, vrfname);

nb_cli_enqueue_change(vty, xpath_list, NB_OP_CREATE, NULL);
ret = nb_cli_apply_changes_clear_pending(vty, "%s", xpath_list);
if (ret == CMD_SUCCESS) {
VTY_PUSH_XPATH(VRF_NODE, xpath_list);
vrf = vrf_lookup_by_name(vrfname);
if (vrf)
VTY_PUSH_CONTEXT(VRF_NODE, vrf);
}

return ret;
}