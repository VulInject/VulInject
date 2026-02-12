static void blkcg_iolatency_throttle(struct rq_qos *rqos, struct bio *bio)
{
struct blk_iolatency *blkiolat = BLKIOLATENCY(rqos);
struct blkcg_gq *blkg = bio->bi_blkg;
bool issue_as_root = bio_issue_as_root_blkg(bio);

if (!blkiolat->enabled)
return;

while (blkg && blkg->parent) {
struct iolatency_grp *iolat = blkg_to_lat(blkg);
if (!iolat) {
blkg = blkg->parent;
continue;
}

check_scale_change(iolat);
__blkcg_iolatency_throttle(rqos, iolat, issue_as_root,
(bio->bi_opf & REQ_SWAP) == REQ_SWAP);
blkg = blkg->parent;
}
if (!timer_pending(&blkiolat->timer))
mod_timer(&blkiolat->timer, jiffies + HZ);
}