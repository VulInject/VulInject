static int find_bio_disk(struct r1bio *r1_bio, struct bio *bio)
{
int mirror;
struct r1conf *conf = r1_bio->mddev->private;
int raid_disks = conf->raid_disks;

for (mirror = 0; mirror < raid_disks * 2; mirror++)
if (r1_bio->bios[mirror] == bio)
break;

BUG_ON(mirror == raid_disks * 2);
update_head_pos(mirror, r1_bio);

return mirror;
}