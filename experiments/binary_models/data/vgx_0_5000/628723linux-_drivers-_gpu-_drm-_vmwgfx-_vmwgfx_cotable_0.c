static int vmw_cotable_create(struct vmw_resource *res)
{
struct vmw_cotable *vcotbl = vmw_cotable(res);
size_t new_size = res->backup_size;
size_t needed_size;
int ret;


needed_size = (vcotbl->seen_entries + 1) * co_info[vcotbl->type].size;
while (needed_size > new_size)
new_size *= 2;

if (likely(new_size <= res->backup_size)) {
if (vcotbl->scrubbed && vmw_resource_mob_attached(res)) {
ret = vmw_cotable_unscrub(res);
if (ret)
return ret;
}
res->id = vcotbl->type;
return 0;
}

return vmw_cotable_resize(res, new_size);
}