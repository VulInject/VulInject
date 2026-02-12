void
TsInitAddBA(
struct ieee80211_device *ieee,
struct tx_ts_record     *pTS,
u8		Policy,
u8		bOverwritePending
)
{
struct ba_record *pBA = &pTS->tx_pending_ba_record;

if (pBA->valid && !bOverwritePending)
return;


DeActivateBAEntry(ieee, pBA);

pBA->dialog_token++;						
pBA->param_set.field.amsdu_support = 0;	
pBA->param_set.field.ba_policy = Policy;	
pBA->param_set.field.tid = pTS->ts_common_info.t_spec.ts_info.uc_tsid;	

pBA->param_set.field.buffer_size = 32;		
pBA->timeout_value = 0;					
pBA->start_seq_ctrl.field.seq_num = (pTS->tx_cur_seq + 3) % 4096;	

ActivateBAEntry(ieee, pBA, BA_SETUP_TIMEOUT);

ieee80211_send_ADDBAReq(ieee, pTS->ts_common_info.addr, pBA);
}