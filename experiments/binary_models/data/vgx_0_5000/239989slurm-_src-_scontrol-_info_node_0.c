scontrol_load_nodes (node_info_msg_t ** node_buffer_pptr, uint16_t show_flags)
{
int error_code;
static int last_show_flags = 0xffff;
node_info_msg_t *node_info_ptr = NULL;

if (old_node_info_ptr) {
if (last_show_flags != show_flags)
old_node_info_ptr->last_update = (time_t) 0;
error_code = slurm_load_node (old_node_info_ptr->last_update,
&node_info_ptr, show_flags);
if (error_code == SLURM_SUCCESS)
slurm_free_node_info_msg (old_node_info_ptr);
else if (slurm_get_errno () == SLURM_NO_CHANGE_IN_DATA) {
node_info_ptr = old_node_info_ptr;
error_code = SLURM_SUCCESS;
if (quiet_flag == -1)
printf ("slurm_load_node no change in data\n");
}
}
else
error_code = slurm_load_node ((time_t) NULL, &node_info_ptr,
show_flags);

if (error_code == SLURM_SUCCESS) {
old_node_info_ptr = node_info_ptr;
last_show_flags = show_flags;
*node_buffer_pptr = node_info_ptr;
}

return error_code;
}