static tool_rc process_output(ESYS_CONTEXT *ectx) {

UNUSED(ectx);

bool is_file_op_success = true;
if (ctx.cp_hash_path) {
is_file_op_success = files_save_digest(&ctx.cp_hash, ctx.cp_hash_path);

if (!is_file_op_success) {
return tool_rc_general_error;
}
}

tool_rc rc = tool_rc_success;
if (!ctx.is_command_dispatch) {
return rc;
}




tpm2_tool_output("persistent-handle: 0x%x\n", ctx.persist_handle);

bool is_evicted = (ctx.out_tr == ESYS_TR_NONE);
tpm2_tool_output("action: %s\n", is_evicted ? "evicted" : "persisted");

tool_rc tmp_rc = tool_rc_success;
if (ctx.output_arg) {
tmp_rc = files_save_ESYS_TR(ectx, ctx.out_tr, ctx.output_arg);
}

if (!is_evicted) {
rc = tpm2_close(ectx, &ctx.out_tr);
}

return (tmp_rc == tool_rc_success) ? rc : tmp_rc;
}