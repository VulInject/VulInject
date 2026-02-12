int rt2x00mac_conf_tx(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
unsigned int link_id, u16 queue_idx,
const struct ieee80211_tx_queue_params *params)
{
struct rt2x00_dev *rt2x00dev = hw->priv;
struct data_queue *queue;

queue = rt2x00queue_get_tx_queue(rt2x00dev, queue_idx);
if (unlikely(!queue))
return -EINVAL;


if (params->cw_min > 0)
queue->cw_min = fls(params->cw_min);
else
queue->cw_min = 5; 

if (params->cw_max > 0)
queue->cw_max = fls(params->cw_max);
else
queue->cw_max = 10; 

queue->aifs = params->aifs;
queue->txop = params->txop;

rt2x00_dbg(rt2x00dev,
"Configured TX queue %d - CWmin: %d, CWmax: %d, Aifs: %d, TXop: %d\n",
queue_idx, queue->cw_min, queue->cw_max, queue->aifs,
queue->txop);

return 0;
}