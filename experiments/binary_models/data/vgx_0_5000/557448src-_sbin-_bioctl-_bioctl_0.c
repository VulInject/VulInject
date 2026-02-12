void
bio_setstate(char *arg, int status, char *devicename)
{
struct bioc_setstate	bs;
struct locator		location;
struct stat		sb;
const char		*errstr;

memset(&bs, 0, sizeof(bs));
if (stat(arg, &sb) == -1) {

errstr = str2locator(arg, &location);
if (errstr)
errx(1, "Target %s: %s", arg, errstr);
bs.bs_channel = location.channel;
bs.bs_target = location.target;
bs.bs_lun = location.lun;
} else {

bs.bs_other_id = sb.st_rdev;
bs.bs_other_id_type = BIOC_SSOTHER_DEVT;
}

bs.bs_bio.bio_cookie = bio_cookie;
bs.bs_status = status;

if (status != BIOC_SSHOTSPARE) {

bs.bs_volid = bio_getvolbyname(devicename);
if (bs.bs_volid == -1)
errx(1, "invalid device %s", devicename);
}

if (ioctl(devh, BIOCSETSTATE, &bs) == -1)
err(1, "BIOCSETSTATE");

bio_status(&bs.bs_bio.bio_status);
}