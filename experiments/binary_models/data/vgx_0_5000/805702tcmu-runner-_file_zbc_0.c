static int zbc_format_meta(struct zbc_dev *zdev)
{
struct zbc_dev_config *cfg = &zdev->cfg;
struct zbc_meta *meta;
struct zbc_zone *zone;
unsigned int nr_seq_zones;
__u64 lba = 0;
unsigned int i;
int ret;

zdev->model = cfg->model;
zdev->lba_size = cfg->lba_size;
zdev->capacity = cfg->dev_size / zdev->lba_size;
zdev->zone_size = cfg->zone_size / zdev->lba_size;

zdev->nr_zones = (zdev->capacity + zdev->zone_size - 1) /
zdev->zone_size;
if (cfg->conv_num == ZBC_CONF_DEFAULT_CONV_NUM) {

zdev->nr_conv_zones = zdev->nr_zones / 100;
if (!zdev->nr_conv_zones)
zdev->nr_conv_zones = 1;
} else {
zdev->nr_conv_zones = cfg->conv_num;
if (zdev->nr_conv_zones >= zdev->nr_zones) {
tcmu_dev_err(zdev->dev,
"Too many conventional zones\n");
return -ENOSPC;
}
}

zdev->nr_open_zones = cfg->open_num;
nr_seq_zones = zdev->nr_zones - zdev->nr_conv_zones;
if (zdev->nr_open_zones >= nr_seq_zones / 2) {
zdev->nr_open_zones = nr_seq_zones / 2;
if (!zdev->nr_open_zones)
zdev->nr_open_zones = 1;
}

tcmu_dev_dbg(zdev->dev, "Formatting...\n");
tcmu_dev_dbg(zdev->dev, "  Model: %s\n",
cfg->model == ZBC_HM ? "HM" : "HA");
tcmu_dev_dbg(zdev->dev, "  LBA size: %zu B\n",
cfg->lba_size);
tcmu_dev_dbg(zdev->dev, "  Zone size: %zu MiB\n",
cfg->zone_size);
tcmu_dev_dbg(zdev->dev, "  Number of conventional zones: %u\n",
zdev->nr_conv_zones);
tcmu_dev_dbg(zdev->dev, "  Number of open zones: %u\n",
cfg->open_num);


zdev->meta_size = zbc_meta_size_aligned(zdev->nr_zones);
ret = ftruncate(zdev->fd, zdev->meta_size + cfg->dev_size);
if (ret < 0) {
ret = -errno;
tcmu_dev_err(zdev->dev, "Truncate %s failed (%m)\n",
cfg->path);
return ret;
}


ret = zbc_map_meta(zdev);
if (ret)
return ret;


meta = zdev->meta;
memset(meta, 0, zdev->meta_size);
meta->magic = ZBC_MAGIC;
meta->model = zdev->model;
meta->capacity = zdev->capacity;
meta->lba_size = zdev->lba_size;
meta->zone_size = zdev->zone_size;
meta->nr_zones = zdev->nr_zones;
meta->nr_conv_zones = zdev->nr_conv_zones;
meta->nr_open_zones = zdev->nr_open_zones;


zone = zdev->zones;
for (i = 0; i < zdev->nr_zones; i++) {

zone->start = lba;
if (zone->start + meta->zone_size > meta->capacity)
zone->len = meta->capacity - zone->start;
else
zone->len = meta->zone_size;

if (i < zdev->nr_conv_zones) {
zone->wp = ULLONG_MAX;
zone->type = ZBC_ZONE_TYPE_CONVENTIONAL;
zone->cond = ZBC_ZONE_COND_NOT_WP;
} else {
zone->wp = zone->start;
if (meta->model == ZBC_HA)
zone->type = ZBC_ZONE_TYPE_SEQWRITE_PREF;
else
zone->type = ZBC_ZONE_TYPE_SEQWRITE_REQ;
zone->cond = ZBC_ZONE_COND_EMPTY;
}

lba += zone->len;
zone++;

}

ret = zbc_flush_meta(zdev);
if (ret) {
zbc_unmap_meta(zdev);
return ret;
}

return 0;
}