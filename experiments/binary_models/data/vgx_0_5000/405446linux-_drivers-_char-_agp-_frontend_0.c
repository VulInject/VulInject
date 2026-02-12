int agp_create_segment(struct agp_client *client, struct agp_region *region)
{
struct agp_segment_priv **ret_seg;
struct agp_segment_priv *seg;
struct agp_segment *user_seg;
size_t i;

seg = kzalloc((sizeof(struct agp_segment_priv) * region->seg_count), GFP_KERNEL);
if (seg == NULL) {
kfree(region->seg_list);
region->seg_list = NULL;
return -ENOMEM;
}
user_seg = region->seg_list;

for (i = 0; i < region->seg_count; i++) {
seg[i].pg_start = user_seg[i].pg_start;
seg[i].pg_count = user_seg[i].pg_count;
seg[i].prot = agp_convert_mmap_flags(user_seg[i].prot);
}
kfree(region->seg_list);
region->seg_list = NULL;

ret_seg = kmalloc(sizeof(void *), GFP_KERNEL);
if (ret_seg == NULL) {
kfree(seg);
return -ENOMEM;
}
*ret_seg = seg;
agp_add_seg_to_client(client, ret_seg, region->seg_count);
return 0;
}