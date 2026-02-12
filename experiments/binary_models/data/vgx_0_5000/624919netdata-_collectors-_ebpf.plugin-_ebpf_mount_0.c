static int ebpf_mount_load_bpf(ebpf_module_t *em)
{
int ret = 0;
if (em->load & EBPF_LOAD_LEGACY) {
em->probe_links = ebpf_load_program(ebpf_plugin_dir, em, running_on_kernel, isrh, &em->objects);
if (!em->probe_links) {
em->enabled = CONFIG_BOOLEAN_NO;
ret = -1;
}
}
else {
bpf_obj = mount_bpf__open();
if (!bpf_obj)
ret = -1;
else
ret = ebpf_mount_load_and_attach(bpf_obj, em);
}

if (ret)
error("%s %s", EBPF_DEFAULT_ERROR_MSG, em->thread_name);

return ret;
}