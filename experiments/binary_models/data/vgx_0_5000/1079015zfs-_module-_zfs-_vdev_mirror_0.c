static int
vdev_mirror_open(vdev_t *vd, uint64_t *asize, uint64_t *max_asize,
uint64_t *ashift)
{
int numerrors = 0;
int lasterror = 0;
int c;

if (vd->vdev_children == 0) {
vd->vdev_stat.vs_aux = VDEV_AUX_BAD_LABEL;
return (SET_ERROR(EINVAL));
}

vdev_open_children(vd);

for (c = 0; c < vd->vdev_children; c++) {
vdev_t *cvd = vd->vdev_child[c];

if (cvd->vdev_open_error) {
lasterror = cvd->vdev_open_error;
numerrors++;
continue;
}

*asize = MIN(*asize - 1, cvd->vdev_asize - 1) + 1;
*max_asize = MIN(*max_asize - 1, cvd->vdev_max_asize - 1) + 1;
*ashift = MAX(*ashift, cvd->vdev_ashift);
}

if (numerrors == vd->vdev_children) {
vd->vdev_stat.vs_aux = VDEV_AUX_NO_REPLICAS;
return (lasterror);
}

return (0);
}