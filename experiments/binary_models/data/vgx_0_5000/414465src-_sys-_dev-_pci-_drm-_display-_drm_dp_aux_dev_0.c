void drm_dp_aux_unregister_devnode(struct drm_dp_aux *aux)
{
struct drm_dp_aux_dev *aux_dev;
unsigned int minor;

aux_dev = drm_dp_aux_dev_get_by_aux(aux);
if (!aux_dev) 
return;


aux->drm_dev = NULL;

mutex_lock(&aux_idr_mutex);
idr_remove(&aux_idr, aux_dev->index);
mutex_unlock(&aux_idr_mutex);

atomic_dec(&aux_dev->usecount);
wait_var_event(&aux_dev->usecount, !atomic_read(&aux_dev->usecount));

minor = aux_dev->index;
if (aux_dev->dev)
device_destroy(drm_dp_aux_dev_class,
MKDEV(drm_dev_major, minor));

DRM_DEBUG("drm_dp_aux_dev: aux [%s] unregistering\n", aux->name);
kref_put(&aux_dev->refcount, release_drm_dp_aux_dev);
}