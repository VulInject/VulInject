static int setup_spc_bits(int sector_bits, int user_defined, off_t volume_size)
{
int i;

if (user_defined != -1)
{
off_t cluster_size = 1 << sector_bits << user_defined;
if (volume_size / cluster_size > EXFAT_LAST_DATA_CLUSTER)
{
struct exfat_human_bytes chb, vhb;

exfat_humanize_bytes(cluster_size, &chb);
exfat_humanize_bytes(volume_size, &vhb);
exfat_error("cluster size %"PRIu64" %s is too small for "
"%"PRIu64" %s volume, try -s %d",
chb.value, chb.unit,
vhb.value, vhb.unit,
1 << setup_spc_bits(sector_bits, -1, volume_size));
return -1;
}
return user_defined;
}

if (volume_size < 256LL * 1024 * 1024)
return MAX(0, 12 - sector_bits);	
if (volume_size < 32LL * 1024 * 1024 * 1024)
return MAX(0, 15 - sector_bits);	

for (i = 17; ; i++)						
if (DIV_ROUND_UP(volume_size, 1 << i) <= EXFAT_LAST_DATA_CLUSTER)
return MAX(0, i - sector_bits);
}