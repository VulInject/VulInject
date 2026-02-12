static struct cached_info *get_cached_info(struct spu *the_spu, int spu_num)
{
struct kref *ref;
struct cached_info *ret_info;

if (spu_num >= num_spu_nodes) {
printk(KERN_ERR "SPU_PROF: "
"%s, line %d: Invalid index %d into spu info cache\n",
__func__, __LINE__, spu_num);
ret_info = NULL;
goto out;
}
if (!spu_info[spu_num] && the_spu) {
ref = spu_get_profile_private_kref(the_spu->ctx);
if (ref) {
spu_info[spu_num] = container_of(ref, struct cached_info, cache_ref);
kref_get(&spu_info[spu_num]->cache_ref);
}
}

ret_info = spu_info[spu_num];
out:
return ret_info;
}