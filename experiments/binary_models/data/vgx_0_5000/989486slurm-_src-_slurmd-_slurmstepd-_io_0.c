static eio_obj_t *
_create_task_out_eio(int fd, uint16_t type,
stepd_step_rec_t *step, stepd_step_task_info_t *task)
{
struct task_read_info *out = xmalloc(sizeof(*out));
eio_obj_t *eio = NULL;

out->magic = TASK_OUT_MAGIC;
out->type = type;
out->gtaskid = task->gtid;
out->ltaskid = task->id;
out->step = step;
out->buf = cbuf_create(MAX_MSG_LEN, MAX_MSG_LEN*4);
out->eof = false;
out->eof_msg_sent = false;
if (cbuf_opt_set(out->buf, CBUF_OPT_OVERWRITE, CBUF_NO_DROP) == -1)
error("setting cbuf options");

eio = eio_obj_create(fd, &task_read_ops, (void *)out);

return eio;
}