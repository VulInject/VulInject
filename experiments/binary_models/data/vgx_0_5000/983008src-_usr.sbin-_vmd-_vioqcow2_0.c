int
virtio_qcow2_init(struct virtio_backing *file, off_t *szp, int *fd, size_t nfd)
{
struct qcdisk *diskp;

diskp = malloc(sizeof(struct qcdisk));
if (diskp == NULL)
return -1;
if (qc2_open(diskp, fd, nfd) == -1) {
log_warnx("could not open qcow2 disk");
return -1;
}
file->p = diskp;
file->pread = qc2_pread;
file->pwrite = qc2_pwrite;
file->close = qc2_close;
*szp = diskp->disksz;
return 0;
}