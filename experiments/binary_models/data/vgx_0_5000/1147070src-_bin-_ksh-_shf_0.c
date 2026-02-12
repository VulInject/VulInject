struct shf *
shf_open(const char *name, int oflags, int mode, int sflags)
{
struct shf *shf;
int bsize = sflags & SHF_UNBUF ? (sflags & SHF_RD ? 1 : 0) : SHF_BSIZE;
int fd;


shf = alloc(sizeof(struct shf) + bsize, ATEMP);
shf->areap = ATEMP;
shf->buf = (unsigned char *) &shf[1];
shf->bsize = bsize;
shf->flags = SHF_ALLOCS;


fd = open(name, oflags, mode);
if (fd == -1) {
afree(shf, shf->areap);
return NULL;
}
if ((sflags & SHF_MAPHI) && fd < FDBASE) {
int nfd;

nfd = fcntl(fd, F_DUPFD, FDBASE);
close(fd);
if (nfd == -1) {
afree(shf, shf->areap);
return NULL;
}
fd = nfd;
}
sflags &= ~SHF_ACCMODE;
sflags |= (oflags & O_ACCMODE) == O_RDONLY ? SHF_RD :
((oflags & O_ACCMODE) == O_WRONLY ? SHF_WR : SHF_RDWR);

return shf_reopen(fd, sflags, shf);
}