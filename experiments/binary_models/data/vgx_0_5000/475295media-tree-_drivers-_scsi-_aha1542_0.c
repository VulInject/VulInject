static int aha1542_biosparam(struct scsi_device *sdev,
struct block_device *bdev, sector_t capacity, int geom[])
{
struct aha1542_hostdata *aha1542 = shost_priv(sdev->host);

if (capacity >= 0x200000 &&
aha1542->bios_translation == BIOS_TRANSLATION_25563) {

geom[0] = 255;	
geom[1] = 63;	
} else {
geom[0] = 64;	
geom[1] = 32;	
}
geom[2] = sector_div(capacity, geom[0] * geom[1]);	

return 0;
}