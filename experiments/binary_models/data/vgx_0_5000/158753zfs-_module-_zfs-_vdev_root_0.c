static int
vdev_root_open(vdev_t *vd, uint64_t *asize, uint64_t *max_asize,
uint64_t *ashift)
{
int lasterror = 0;
int numerrors = 0;
int c;

if (vd->vdev_children == 0) {
vd->vdev_stat.vs_aux = VDEV_AUX_BAD_LABEL;
return (SET_ERROR(EINVAL));
}

vdev_open_children(vd);

for (c = 0; c < vd->vdev_children; c++) {
vdev_t *cvd = vd->vdev_child[c];

if (cvd->vdev_open_error && !cvd->vdev_islog) {
lasterror = cvd->vdev_open_error;
numerrors++;
}
}

if (too_many_errors(vd, numerrors)) {
vd->vdev_stat.vs_aux = VDEV_AUX_NO_REPLICAS;
return (lasterror);
}

*asize = 0;
*max_asize = 0;
*ashift = 0;

return (0);
}