static tool_rc process_outputs(ESYS_CONTEXT *ectx) {

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


FILE *fp = fopen(ctx.commit_counter_path, "wb");
is_file_op_success = files_write_16(fp, ctx.counter);
fclose(fp);
if (!is_file_op_success) {
LOG_ERR("Failed to write out the ECC commit count");
return tool_rc_general_error;
}

is_file_op_success = files_save_ecc_point(ctx.Q, ctx.ephemeral_pub_key_path);
if (!is_file_op_success) {
LOG_ERR("Failed to write out the ECC pub key");
return tool_rc_general_error;
}

return tool_rc_success;
}