enum pkcs11_rc entry_ck_slot_list(uint32_t ptypes, TEE_Param *params)
{
const uint32_t exp_pt = TEE_PARAM_TYPES(TEE_PARAM_TYPE_MEMREF_INOUT,
TEE_PARAM_TYPE_NONE,
TEE_PARAM_TYPE_MEMREF_OUTPUT,
TEE_PARAM_TYPE_NONE);
TEE_Param *out = params + 2;
uint32_t token_id = 0;
const size_t out_size = sizeof(token_id) * TOKEN_COUNT;
uint8_t *id = NULL;

if (ptypes != exp_pt ||
params[0].memref.size != TEE_PARAM0_SIZE_MIN)
return PKCS11_CKR_ARGUMENTS_BAD;

if (out->memref.size < out_size) {
out->memref.size = out_size;

if (out->memref.buffer)
return PKCS11_CKR_BUFFER_TOO_SMALL;
else
return PKCS11_CKR_OK;
}

for (token_id = 0, id = out->memref.buffer; token_id < TOKEN_COUNT;
token_id++, id += sizeof(token_id))
TEE_MemMove(id, &token_id, sizeof(token_id));

out->memref.size = out_size;

return PKCS11_CKR_OK;
}