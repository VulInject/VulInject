static void igb_ptp_tx_hwtstamp(struct igb_adapter *adapter)
{
struct sk_buff *skb = adapter->ptp_tx_skb;
struct e1000_hw *hw = &adapter->hw;
struct skb_shared_hwtstamps shhwtstamps;
u64 regval;
int adjust = 0;

regval = rd32(E1000_TXSTMPL);
regval |= (u64)rd32(E1000_TXSTMPH) << 32;

igb_ptp_systim_to_hwtstamp(adapter, &shhwtstamps, regval);

if (adapter->hw.mac.type == e1000_i210) {
switch (adapter->link_speed) {
case SPEED_10:
adjust = IGB_I210_TX_LATENCY_10;
break;
case SPEED_100:
adjust = IGB_I210_TX_LATENCY_100;
break;
case SPEED_1000:
adjust = IGB_I210_TX_LATENCY_1000;
break;
}
}

shhwtstamps.hwtstamp =
ktime_add_ns(shhwtstamps.hwtstamp, adjust);


adapter->ptp_tx_skb = NULL;
clear_bit_unlock(__IGB_PTP_TX_IN_PROGRESS, &adapter->state);


skb_tstamp_tx(skb, &shhwtstamps);
dev_kfree_skb_any(skb);
}