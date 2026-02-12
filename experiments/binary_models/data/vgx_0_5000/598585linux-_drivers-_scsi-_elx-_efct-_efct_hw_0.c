static void
efct_hw_wq_process_abort(void *arg, u8 *cqe, int status)
{
struct efct_hw_io *io = arg;
struct efct_hw *hw = io->hw;
u32 ext = 0;
u32 len = 0;
struct hw_wq_callback *wqcb;


ext = sli_fc_ext_status(&hw->sli, cqe);
if (status == SLI4_FC_WCQE_STATUS_LOCAL_REJECT &&
ext == SLI4_FC_LOCAL_REJECT_NO_XRI && io->done) {
efct_hw_done_t done = io->done;

io->done = NULL;


status = io->saved_status;
len = io->saved_len;
ext = io->saved_ext;
io->status_saved = false;
done(io, len, status, ext, io->arg);
}

if (io->abort_done) {
efct_hw_done_t done = io->abort_done;

io->abort_done = NULL;
done(io, len, status, ext, io->abort_arg);
}


io->abort_in_progress = false;


if (io->abort_reqtag == U32_MAX) {
efc_log_err(hw->os, "HW IO already freed\n");
return;
}

wqcb = efct_hw_reqtag_get_instance(hw, io->abort_reqtag);
efct_hw_reqtag_free(hw, wqcb);


(void)efct_hw_io_free(hw, io);
}