static struct bpf_shim_tramp_link *cgroup_shim_alloc(const struct bpf_prog *prog,
bpf_func_t bpf_func,
int cgroup_atype)
{
struct bpf_shim_tramp_link *shim_link = NULL;
struct bpf_prog *p;

shim_link = kzalloc(sizeof(*shim_link), GFP_USER);
if (!shim_link)
return NULL;

p = bpf_prog_alloc(1, 0);
if (!p) {
kfree(shim_link);
return NULL;
}

p->jited = false;
p->bpf_func = bpf_func;

p->aux->cgroup_atype = cgroup_atype;
p->aux->attach_func_proto = prog->aux->attach_func_proto;
p->aux->attach_btf_id = prog->aux->attach_btf_id;
p->aux->attach_btf = prog->aux->attach_btf;
btf_get(p->aux->attach_btf);
p->type = BPF_PROG_TYPE_LSM;
p->expected_attach_type = BPF_LSM_MAC;
bpf_prog_inc(p);
bpf_link_init(&shim_link->link.link, BPF_LINK_TYPE_UNSPEC,
&bpf_shim_tramp_link_lops, p);
bpf_cgroup_atype_get(p->aux->attach_btf_id, cgroup_atype);

return shim_link;
}