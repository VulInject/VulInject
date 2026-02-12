static int ubi_set_skip_check(char *volume, bool skip_check)
{
struct ubi_vtbl_record vtbl_rec;
struct ubi_volume *vol;

vol = ubi_find_volume(volume);
if (!vol)
return ENODEV;

printf("%sing skip_check on volume %s\n",
skip_check ? "Sett" : "Clear", volume);

vtbl_rec = ubi->vtbl[vol->vol_id];
if (skip_check) {
vtbl_rec.flags |= UBI_VTBL_SKIP_CRC_CHECK_FLG;
vol->skip_check = 1;
} else {
vtbl_rec.flags &= ~UBI_VTBL_SKIP_CRC_CHECK_FLG;
vol->skip_check = 0;
}

return ubi_change_vtbl_record(ubi, vol->vol_id, &vtbl_rec);
}