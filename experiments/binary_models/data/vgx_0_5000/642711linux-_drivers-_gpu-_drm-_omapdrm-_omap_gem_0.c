int omap_gem_roll(struct drm_gem_object *obj, u32 roll)
{
struct omap_gem_object *omap_obj = to_omap_bo(obj);
u32 npages = obj->size >> PAGE_SHIFT;
int ret = 0;

if (roll > npages) {
dev_err(obj->dev->dev, "invalid roll: %d\n", roll);
return -EINVAL;
}

omap_obj->roll = roll;

mutex_lock(&omap_obj->lock);


if (omap_obj->block) {
ret = omap_gem_attach_pages(obj);
if (ret)
goto fail;

ret = tiler_pin(omap_obj->block, omap_obj->pages, npages,
roll, true);
if (ret)
dev_err(obj->dev->dev, "could not repin: %d\n", ret);
}

fail:
mutex_unlock(&omap_obj->lock);

return ret;
}