static void put_buf(struct r1bio *r1_bio)
{
struct r1conf *conf = r1_bio->mddev->private;
sector_t sect = r1_bio->sector;
int i;

for (i = 0; i < conf->raid_disks * 2; i++) {
struct bio *bio = r1_bio->bios[i];
if (bio->bi_end_io)
rdev_dec_pending(conf->mirrors[i].rdev, r1_bio->mddev);
}

mempool_free(r1_bio, conf->r1buf_pool);

lower_barrier(conf, sect);
}