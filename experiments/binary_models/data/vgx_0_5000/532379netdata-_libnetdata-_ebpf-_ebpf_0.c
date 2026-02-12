void ebpf_update_module(ebpf_module_t *em, struct btf *btf_file, int kver, int is_rh)
{
char filename[FILENAME_MAX+1];
netdata_ebpf_load_mode_t origin;

ebpf_mount_config_name(filename, FILENAME_MAX, ebpf_user_config_dir, em->config_file);
if (!ebpf_load_config(em->cfg, filename)) {
ebpf_mount_config_name(filename, FILENAME_MAX, ebpf_stock_config_dir, em->config_file);
if (!ebpf_load_config(em->cfg, filename)) {
error("Cannot load the ebpf configuration file %s", em->config_file);
return;
}


origin = (!(em->load & NETDATA_EBPF_LOAD_SOURCE)) ? EBPF_LOADED_FROM_STOCK : em->load & NETDATA_EBPF_LOAD_SOURCE;
} else
origin = EBPF_LOADED_FROM_USER;

ebpf_update_module_using_config(em, origin, btf_file, kver, is_rh);
}