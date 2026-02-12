static u_int	 findopenbsd_gpt(efi_diskinfo_t, const char **);
static int	 gpt_chk_mbr(struct dos_partition *, u_int64_t);

void
efid_init(struct diskinfo *dip, void *handle)
{
EFI_BLOCK_IO		*blkio = handle;

memset(dip, 0, sizeof(struct diskinfo));
dip->ed.blkio = blkio;
dip->ed.mediaid = blkio->Media->MediaId;
dip->diskio = efid_diskio;
dip->strategy = efistrategy;

if (efi_getdisklabel(&dip->ed, &dip->disklabel) == NULL)
dip->flags |= DISKINFO_FLAG_GOODLABEL;
}