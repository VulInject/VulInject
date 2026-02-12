extern int job_resources_node_inx_to_cpu_inx(job_resources_t *job_resrcs_ptr,
int node_inx)
{
int node_offset;


if (!job_resrcs_ptr || !job_resrcs_ptr->node_bitmap) {
error("%s: no job_resrcs or node_bitmap", __func__);
return -1;
}
if (!bit_test(job_resrcs_ptr->node_bitmap, node_inx)) {

char node_str[128];
bit_fmt(node_str, sizeof(node_str),job_resrcs_ptr->node_bitmap);
error("%s: Invalid node_inx:%d node_bitmap:%s", __func__,
node_inx, node_str);
return -1;
}
if (job_resrcs_ptr->cpu_array_cnt == 0) {
error("%s: Invalid cpu_array_cnt", __func__);
return -1;
}


if (job_resrcs_ptr->nhosts == 1)
return 0;

node_offset = bit_set_count_range(job_resrcs_ptr->node_bitmap, 0,
node_inx);

if (node_offset >= job_resrcs_ptr->nhosts) {
error("%s: Found %d of %d nodes", __func__,
job_resrcs_ptr->nhosts, node_offset);
return -1;
}

return node_offset;
}