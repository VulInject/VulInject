static M_bool M_io_block_regevent(M_io_t *io, M_io_block_request_t request, M_io_block_data_t **ret_data)
{
M_event_t *event;
M_io_block_data_t *data;

if (io == NULL)
return M_FALSE;

if (io->reg_event != NULL) {
if (!io->private_event || io->sync_data == NULL) {
return M_FALSE;
}
data = io->sync_data;
} else {
event             = M_event_create(M_EVENT_FLAG_NON_SCALABLE);
if (io->sync_data != NULL) {
data          = io->sync_data;
} else {
data          = M_malloc_zero(sizeof(*data));
io->sync_data = data;
}
M_event_add(event, io, M_io_block_event, data);
io->private_event = M_TRUE; 
}

M_mem_set(data, 0, sizeof(*data));
data->request = request;
data->retval  = M_IO_ERROR_ERROR;
*ret_data     = data;
return M_TRUE;
}