bool bpf_iter_prog_supported(struct bpf_prog *prog)
{
const char *attach_fname = prog->aux->attach_func_name;
struct bpf_iter_target_info *tinfo = NULL, *iter;
u32 prog_btf_id = prog->aux->attach_btf_id;
const char *prefix = BPF_ITER_FUNC_PREFIX;
int prefix_len = strlen(prefix);

if (strncmp(attach_fname, prefix, prefix_len))
return false;

mutex_lock(&targets_mutex);
list_for_each_entry(iter, &targets, list) {
if (iter->btf_id && iter->btf_id == prog_btf_id) {
tinfo = iter;
break;
}
if (!strcmp(attach_fname + prefix_len, iter->reg_info->target)) {
cache_btf_id(iter, prog);
tinfo = iter;
break;
}
}
mutex_unlock(&targets_mutex);

if (tinfo) {
prog->aux->ctx_arg_info_size = tinfo->reg_info->ctx_arg_info_size;
prog->aux->ctx_arg_info = tinfo->reg_info->ctx_arg_info;
}

return tinfo != NULL;
}