static void _cred_verify_signature(slurm_cred_ctx_t ctx, slurm_cred_t *cred)
{
int rc;
void *start = get_buf_data(cred->buffer);
uint32_t len = get_buf_offset(cred->buffer);

debug("Checking credential with %u bytes of sig data", cred->siglen);

rc = (*(ops.cred_verify_sign))(ctx->key, start, len,
cred->signature,
cred->siglen);
if (rc && _exkey_is_valid(ctx)) {
rc = (*(ops.cred_verify_sign))(ctx->exkey, start, len,
cred->signature,
cred->siglen);
}

if (rc) {
error("Credential signature check: %s",
(*(ops.cred_str_error))(rc));
return;
}

cred->verified = true;
}