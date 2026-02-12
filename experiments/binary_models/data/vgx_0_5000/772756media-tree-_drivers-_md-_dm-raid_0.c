static int rs_setup_reshape(struct raid_set *rs)
{
int r = 0;
unsigned int cur_raid_devs, d;
struct mddev *mddev = &rs->md;
struct md_rdev *rdev;

mddev->delta_disks = rs->delta_disks;
cur_raid_devs = mddev->raid_disks;


if (mddev->delta_disks &&
mddev->layout != mddev->new_layout) {
DMINFO("Ignoring invalid layout change with delta_disks=%d", rs->delta_disks);
mddev->new_layout = mddev->layout;
}




if (rs->delta_disks > 0) {

for (d = cur_raid_devs; d < rs->raid_disks; d++) {
rdev = &rs->dev[d].rdev;
clear_bit(In_sync, &rdev->flags);


rdev->saved_raid_disk = -1;
rdev->raid_disk = d;

rdev->sectors = mddev->dev_sectors;
rdev->recovery_offset = rs_is_raid1(rs) ? 0 : MaxSector;
}

mddev->reshape_backwards = 0; 


} else if (rs->delta_disks < 0) {
r = rs_set_dev_and_array_sectors(rs, true);
mddev->reshape_backwards = 1; 


} else {

mddev->reshape_backwards = rs->dev[0].rdev.data_offset ? 0 : 1;
}

return r;
}