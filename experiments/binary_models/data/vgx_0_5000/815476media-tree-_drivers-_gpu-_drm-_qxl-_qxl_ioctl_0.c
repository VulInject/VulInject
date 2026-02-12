static int qxlhw_handle_to_bo(struct drm_file *file_priv, uint64_t handle,
struct qxl_release *release, struct qxl_bo **qbo_p)
{
struct drm_gem_object *gobj;
struct qxl_bo *qobj;
int ret;

gobj = drm_gem_object_lookup(file_priv, handle);
if (!gobj)
return -EINVAL;

qobj = gem_to_qxl_bo(gobj);

ret = qxl_release_list_add(release, qobj);
drm_gem_object_unreference_unlocked(gobj);
if (ret)
return ret;

*qbo_p = qobj;
return 0;
}