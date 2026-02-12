static bool ath5k_merge_ratetbl(struct ieee80211_sta *sta,
struct ath5k_buf *bf,
struct ieee80211_tx_info *tx_info)
{
struct ieee80211_sta_rates *ratetbl;
u8 i;

if (!sta)
return false;

ratetbl = rcu_dereference(sta->rates);
if (!ratetbl)
return false;

if (tx_info->control.rates[0].idx < 0 ||
tx_info->control.rates[0].count == 0)
{
i = 0;
} else {
bf->rates[0] = tx_info->control.rates[0];
i = 1;
}

for ( ; i < IEEE80211_TX_MAX_RATES; i++) {
bf->rates[i].idx = ratetbl->rate[i].idx;
bf->rates[i].flags = ratetbl->rate[i].flags;
if (tx_info->control.use_rts)
bf->rates[i].count = ratetbl->rate[i].count_rts;
else if (tx_info->control.use_cts_prot)
bf->rates[i].count = ratetbl->rate[i].count_cts;
else
bf->rates[i].count = ratetbl->rate[i].count;
}

return true;
}