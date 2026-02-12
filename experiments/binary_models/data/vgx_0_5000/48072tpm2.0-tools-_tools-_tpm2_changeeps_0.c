static tool_rc process_inputs(ESYS_CONTEXT *ectx) {






tool_rc rc = tpm2_auth_util_from_optarg(ectx, ctx.auth_str,
&ctx.auth_session, false);
if (rc != tool_rc_success) {
LOG_ERR("Failed loading platform auth.");
return rc;
}


rc = tpm2_util_aux_sessions_setup(ectx, ctx.aux_session_cnt,
ctx.aux_session_path, ctx.aux_session_handle, ctx.aux_session);
if (rc != tool_rc_success) {
return rc;
}




tpm2_session *all_sessions[MAX_SESSIONS] = {
ctx.auth_session,
ctx.aux_session[0],
ctx.aux_session[1]
};


const char **cphash_path = ctx.cp_hash_path ? &ctx.cp_hash_path : 0;
const char **rphash_path = ctx.rp_hash_path ? &ctx.rp_hash_path : 0;

ctx.parameter_hash_algorithm = tpm2_util_calculate_phash_algorithm(ectx,
cphash_path, &ctx.cp_hash, rphash_path, &ctx.rp_hash, all_sessions);


ctx.is_command_dispatch = (ctx.cp_hash_path && !ctx.rp_hash_path) ?
false : true;

return tool_rc_success;
}