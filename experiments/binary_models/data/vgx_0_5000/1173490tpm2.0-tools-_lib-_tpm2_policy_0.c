tool_rc tpm2_policy_build_policyduplicationselect(ESYS_CONTEXT *ectx,
tpm2_session *session, const char *obj_name_path,
const char *new_parent_name_path, TPMI_YES_NO is_include_obj) {

TPM2B_NAME obj_name;
bool result = true;

if (obj_name_path) {
obj_name.size = sizeof(obj_name.name);
result = files_load_bytes_from_path(obj_name_path, obj_name.name,
&obj_name.size);
} else {
obj_name.size = 0;
}

if (!result) {
LOG_ERR("Failed to load duplicable object name.");
return tool_rc_general_error;
}

TPM2B_NAME new_parent_name = { .size = sizeof(new_parent_name.name) };

result = files_load_bytes_from_path(new_parent_name_path,
new_parent_name.name, &new_parent_name.size);
if (!result) {
return tool_rc_general_error;
}

ESYS_TR handle = tpm2_session_get_handle(session);

return tpm2_policy_duplication_select(ectx, handle, ESYS_TR_NONE,
ESYS_TR_NONE, ESYS_TR_NONE, &obj_name, &new_parent_name,
is_include_obj);
}