static int ray_get_range(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
{
struct iw_range *range = (struct iw_range *)extra;

memset(range, 0, sizeof(struct iw_range));


wrqu->data.length = sizeof(struct iw_range);


range->we_version_compiled = WIRELESS_EXT;
range->we_version_source = 9;


range->throughput = 1.1 * 1000 * 1000;	
range->num_channels = hop_pattern_length[(int)country];
range->num_frequency = 0;
range->max_qual.qual = 0;
range->max_qual.level = 255;	
range->max_qual.noise = 255;	
range->num_bitrates = 2;
range->bitrate[0] = 1000000;	
range->bitrate[1] = 2000000;	
return 0;
}