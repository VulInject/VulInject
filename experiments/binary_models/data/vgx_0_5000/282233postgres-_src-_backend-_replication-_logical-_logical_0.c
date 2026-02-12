static void
commit_cb_wrapper(ReorderBuffer *cache, ReorderBufferTXN *txn,
XLogRecPtr commit_lsn)
{
LogicalDecodingContext *ctx = cache->private_data;
LogicalErrorCallbackState state;
ErrorContextCallback errcallback;

Assert(!ctx->fast_forward);


state.ctx = ctx;
state.callback_name = "commit";
state.report_location = txn->final_lsn; 
errcallback.callback = output_plugin_error_callback;
errcallback.arg = (void *) &state;
errcallback.previous = error_context_stack;
error_context_stack = &errcallback;


ctx->accept_writes = true;
ctx->write_xid = txn->xid;
ctx->write_location = txn->end_lsn; 
ctx->end_xact = true;


ctx->callbacks.commit_cb(ctx, txn, commit_lsn);


error_context_stack = errcallback.previous;
}