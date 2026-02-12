void vmw_cmdbuf_commit(struct vmw_cmdbuf_man *man, size_t size,
struct vmw_cmdbuf_header *header, bool flush)
{
if (!header) {
vmw_cmdbuf_commit_cur(man, size, flush);
return;
}

(void) vmw_cmdbuf_cur_lock(man, false);
__vmw_cmdbuf_cur_flush(man);
WARN_ON(size > header->reserved);
man->cur = header;
man->cur_pos = size;
if (!size)
header->cb_header->flags &= ~SVGA_CB_FLAG_DX_CONTEXT;
if (flush)
__vmw_cmdbuf_cur_flush(man);
vmw_cmdbuf_cur_unlock(man);
}