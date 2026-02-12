void
ffs_rdfs(daddr_t bno, int size, void *bf, const fsinfo_t *fsopts)
{
int n;
off_t offset;

offset = bno * fsopts->sectorsize + fsopts->offset;
if (lseek(fsopts->fd, offset, SEEK_SET) < 0)
err(1, "%s: seek error for sector %lld", __func__,
(long long)bno);
n = read(fsopts->fd, bf, size);
if (n == -1) {
err(1, "%s: read error bno %lld size %d", __func__,
(long long)bno, size);
}
else if (n != size)
errx(1, "%s: short read error for sector %lld", __func__,
(long long)bno);
}