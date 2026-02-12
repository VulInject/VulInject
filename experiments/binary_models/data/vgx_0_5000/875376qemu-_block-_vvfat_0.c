*/
DLOG(fprintf(stderr, "Write to qcow backend: %d + %d\n", (int)sector_num, nb_sectors));
ret = bdrv_pwrite(s->qcow, sector_num * BDRV_SECTOR_SIZE, buf,
nb_sectors * BDRV_SECTOR_SIZE);
if (ret < 0) {
fprintf(stderr, "Error writing to qcow backend\n");
return ret;
}

for (i = first_cluster; i <= last_cluster; i++) {
if (i >= 0) {
s->used_clusters[i] |= USED_ALLOCATED;
}
}

DLOG(checkpoint());

try_commit(s);

DLOG(checkpoint());
return 0;
}