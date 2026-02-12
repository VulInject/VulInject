int
sr_raid5_addio(struct sr_workunit *wu, int chunk, daddr_t blkno,
long len, void *data, int xsflags, int ccbflags, void *xorbuf)
{
struct sr_discipline	*sd = wu->swu_dis;
struct sr_ccb		*ccb;

DNPRINTF(SR_D_DIS, "sr_raid5_addio: %s chunk %d block %lld "
"length %ld %s\n", (xsflags & SCSI_DATA_IN) ? "read" : "write",
chunk, (long long)blkno, len, xorbuf ? "X0R" : "-");


if (data == NULL) {
data = sr_block_get(sd, len);
if (data == NULL)
return (-1);
ccbflags |= SR_CCBF_FREEBUF;
}

ccb = sr_ccb_rw(sd, chunk, blkno, len, data, xsflags, ccbflags);
if (ccb == NULL) {
if (ccbflags & SR_CCBF_FREEBUF)
sr_block_put(sd, data, len);
return (-1);
}
ccb->ccb_opaque = xorbuf;
sr_wu_enqueue_ccb(wu, ccb);

return (0);
}