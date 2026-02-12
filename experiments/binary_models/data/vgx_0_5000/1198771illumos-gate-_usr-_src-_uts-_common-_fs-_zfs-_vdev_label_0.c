void
vdev_top_config_generate(spa_t *spa, nvlist_t *config)
{
vdev_t *rvd = spa->spa_root_vdev;
uint64_t *array;
uint_t c, idx;

array = kmem_alloc(rvd->vdev_children * sizeof (uint64_t), KM_SLEEP);

for (c = 0, idx = 0; c < rvd->vdev_children; c++) {
vdev_t *tvd = rvd->vdev_child[c];

if (tvd->vdev_ishole) {
array[idx++] = c;
}
}

if (idx) {
VERIFY(nvlist_add_uint64_array(config, ZPOOL_CONFIG_HOLE_ARRAY,
array, idx) == 0);
}

VERIFY(nvlist_add_uint64(config, ZPOOL_CONFIG_VDEV_CHILDREN,
rvd->vdev_children) == 0);

kmem_free(array, rvd->vdev_children * sizeof (uint64_t));
}