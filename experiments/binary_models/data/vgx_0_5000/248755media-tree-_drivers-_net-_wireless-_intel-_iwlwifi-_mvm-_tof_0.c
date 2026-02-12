static int iwl_mvm_tof_range_resp(struct iwl_mvm *mvm, void *data)
{
struct iwl_tof_range_rsp_ntfy *resp = (void *)data;

if (resp->request_id != mvm->tof_data.active_range_request) {
IWL_ERR(mvm, "Request id mismatch, got %d, active %d\n",
resp->request_id, mvm->tof_data.active_range_request);
return -EIO;
}

memcpy(&mvm->tof_data.range_resp, resp,
sizeof(struct iwl_tof_range_rsp_ntfy));
mvm->tof_data.active_range_request = IWL_MVM_TOF_RANGE_REQ_MAX_ID;

return 0;
}