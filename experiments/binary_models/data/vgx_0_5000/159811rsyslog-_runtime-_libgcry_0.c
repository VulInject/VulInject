static rsRetVal
eiWriteRec(gcryfile gf, const char *recHdr, size_t lenRecHdr, const char *buf, size_t lenBuf)
{
struct iovec iov[3];
ssize_t nwritten, towrite;
DEFiRet;

iov[0].iov_base = (void*)recHdr;
iov[0].iov_len = lenRecHdr;
iov[1].iov_base = (void*)buf;
iov[1].iov_len = lenBuf;
iov[2].iov_base = (void*)"\n";
iov[2].iov_len = 1;
towrite = iov[0].iov_len + iov[1].iov_len + iov[2].iov_len;
nwritten = writev(gf->fd, iov, sizeof(iov)/sizeof(struct iovec));
if(nwritten != towrite) {
DBGPRINTF("eiWrite%s: error writing file, towrite %d, "
"nwritten %d\n", recHdr, (int) towrite, (int) nwritten);
ABORT_FINALIZE(RS_RET_EI_WR_ERR);
}
DBGPRINTF("encryption info file %s: written %s, len %d\n",
recHdr, gf->eiName, (int) nwritten);
finalize_it:
RETiRet;
}