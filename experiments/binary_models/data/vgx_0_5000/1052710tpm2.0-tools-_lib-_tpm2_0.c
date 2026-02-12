tool_rc tpm2_policy_authorize(ESYS_CONTEXT *esys_context, ESYS_TR policy_session,
ESYS_TR shandle1, ESYS_TR shandle2, ESYS_TR shandle3,
const TPM2B_DIGEST *approved_policy, const TPM2B_NONCE *policy_ref,
const TPM2B_NAME *key_sign, const TPMT_TK_VERIFIED *check_ticket,
TPM2B_DIGEST *cp_hash, TPMI_ALG_HASH parameter_hash_algorithm) {

TSS2_RC rval = TSS2_RC_SUCCESS;
tool_rc rc = tool_rc_success;
if (cp_hash && cp_hash->size) {

TSS2_SYS_CONTEXT *sys_context = 0;
rc = tpm2_getsapicontext(esys_context, &sys_context);
if(rc != tool_rc_success) {
LOG_ERR("Failed to acquire Tss2_Sys_PolicyAuthorize_Prepare SAPI context.");
return rc;
}

TSS2_RC rval = Tss2_Sys_PolicyAuthorize_Prepare(
sys_context, policy_session, approved_policy, policy_ref, key_sign,
check_ticket);
if (rval != TPM2_RC_SUCCESS) {
LOG_PERR(Tss2_Sys_PolicyAuthorize_Prepare, rval);
return tool_rc_general_error;
}

TPM2_HANDLE sapi_policy_session = 0;
rval = Esys_TR_GetTpmHandle(esys_context, policy_session,
&sapi_policy_session);
if (rval != TPM2_RC_SUCCESS) {
LOG_ERR("Failed to acquire SAPI handle");
return tool_rc_general_error;
}

TPM2B_NAME name1 = { 0 };
name1.size = sizeof(TPM2_HANDLE);
rval = Tss2_MU_TPM2_HANDLE_Marshal(sapi_policy_session, name1.name,
name1.size, 0);
if (rval != TPM2_RC_SUCCESS) {
LOG_ERR("Failed to populate SAPI handle");
return tool_rc_general_error;
}
rc = tpm2_sapi_getcphash(sys_context, &name1, NULL, NULL,
parameter_hash_algorithm, cp_hash);



goto tpm2_policyauthorize_skip_esapi_call;
}

rval = Esys_PolicyAuthorize(esys_context, policy_session, shandle1,
shandle2, shandle3, approved_policy, policy_ref, key_sign,
check_ticket);
if (rval != TSS2_RC_SUCCESS) {
LOG_PERR(Esys_PolicyAuthorize, rval);
return tool_rc_from_tpm(rval);
}

tpm2_policyauthorize_skip_esapi_call:
return rc;
}