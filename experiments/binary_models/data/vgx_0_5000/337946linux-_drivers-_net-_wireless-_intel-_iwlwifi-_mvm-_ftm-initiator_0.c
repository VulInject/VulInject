void iwl_mvm_ftm_restart(struct iwl_mvm *mvm)
{
struct cfg80211_pmsr_result result = {
.status = NL80211_PMSR_STATUS_FAILURE,
.final = 1,
.host_time = ktime_get_boottime_ns(),
.type = NL80211_PMSR_TYPE_FTM,
};
int i;

lockdep_assert_held(&mvm->mutex);

if (!mvm->ftm_initiator.req)
return;

for (i = 0; i < mvm->ftm_initiator.req->n_peers; i++) {
memcpy(result.addr, mvm->ftm_initiator.req->peers[i].addr,
ETH_ALEN);
result.ftm.burst_index = mvm->ftm_initiator.responses[i];

cfg80211_pmsr_report(mvm->ftm_initiator.req_wdev,
mvm->ftm_initiator.req,
&result, GFP_KERNEL);
}

cfg80211_pmsr_complete(mvm->ftm_initiator.req_wdev,
mvm->ftm_initiator.req, GFP_KERNEL);
iwl_mvm_ftm_reset(mvm);
}