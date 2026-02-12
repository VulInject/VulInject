static void vc4_bo_stats_print(struct drm_printer *p, struct vc4_dev *vc4)
{
int i;

for (i = 0; i < vc4->num_labels; i++) {
if (!vc4->bo_labels[i].num_allocated)
continue;

drm_printf(p, "%30s: %6dkb BOs (%d)\n",
vc4->bo_labels[i].name,
vc4->bo_labels[i].size_allocated / 1024,
vc4->bo_labels[i].num_allocated);
}

mutex_lock(&vc4->purgeable.lock);
if (vc4->purgeable.num)
drm_printf(p, "%30s: %6zdkb BOs (%d)\n", "userspace BO cache",
vc4->purgeable.size / 1024, vc4->purgeable.num);

if (vc4->purgeable.purged_num)
drm_printf(p, "%30s: %6zdkb BOs (%d)\n", "total purged BO",
vc4->purgeable.purged_size / 1024,
vc4->purgeable.purged_num);
mutex_unlock(&vc4->purgeable.lock);
}