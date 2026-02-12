int virtio_scsi_read_many(VDev *vdev,
ulong sector, void *load_addr, int sec_num)
{
int sector_count;
int f = vdev->blk_factor;
unsigned int data_size;
unsigned int max_transfer = MIN_NON_ZERO(vdev->config.scsi.max_sectors,
vdev->max_transfer);

do {
sector_count = MIN_NON_ZERO(sec_num, max_transfer);
data_size = sector_count * virtio_get_block_size() * f;
if (!scsi_read_10(vdev, sector * f, sector_count * f, load_addr,
data_size)) {
virtio_scsi_verify_response(&resp, "virtio-scsi:read_many");
}
load_addr += data_size;
sector += sector_count;
sec_num -= sector_count;
} while (sec_num > 0);

return 0;
}