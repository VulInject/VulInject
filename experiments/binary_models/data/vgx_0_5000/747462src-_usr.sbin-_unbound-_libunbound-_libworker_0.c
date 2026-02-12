static void*
libworker_dobg(void* arg)
{

uint32_t m;
struct libworker* w = (struct libworker*)arg;
struct ub_ctx* ctx;
if(!w) {
log_err("libunbound bg worker init failed, nomem");
return NULL;
}
ctx = w->ctx;
log_thread_set(&w->thread_num);

w->is_bg_thread = 0;

tube_close_write(ctx->qq_pipe);
tube_close_read(ctx->rr_pipe);
if(!tube_setup_bg_listen(ctx->qq_pipe, w->base, 
libworker_handle_control_cmd, w)) {
log_err("libunbound bg worker init failed, no bglisten");
return NULL;
}
if(!tube_setup_bg_write(ctx->rr_pipe, w->base)) {
log_err("libunbound bg worker init failed, no bgwrite");
return NULL;
}


comm_base_dispatch(w->base);


m = UB_LIBCMD_QUIT;
w->want_quit = 1;
tube_remove_bg_listen(w->ctx->qq_pipe);
tube_remove_bg_write(w->ctx->rr_pipe);
libworker_delete(w);
(void)tube_write_msg(ctx->rr_pipe, (uint8_t*)&m, 
(uint32_t)sizeof(m), 0);

tube_close_read(ctx->qq_pipe);
tube_close_write(ctx->rr_pipe);
return NULL;
}