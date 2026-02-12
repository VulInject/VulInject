static eio_obj_t *
create_file_write_eio_obj(int fd, uint32_t taskid, uint32_t nodeid,
client_io_t *cio)
{
eio_obj_t *eio = NULL;
struct file_write_info *info = xmalloc(sizeof(*info));

info->cio = cio;
info->msg_queue = list_create(NULL); 
info->out_msg = NULL;
info->out_remaining = 0;
info->eof = false;
info->taskid = taskid;
info->nodeid = nodeid;

eio = eio_obj_create(fd, &file_write_ops, (void *)info);

return eio;
}