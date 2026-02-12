static void rtl8169_init_counter_offsets(struct rtl8169_private *tp)
{
struct rtl8169_counters *counters = tp->counters;



if (tp->tc_offset.inited)
return;

if (tp->mac_version >= RTL_GIGA_MAC_VER_19) {
rtl8169_do_counters(tp, CounterReset);
} else {
rtl8169_update_counters(tp);
tp->tc_offset.tx_errors = counters->tx_errors;
tp->tc_offset.tx_multi_collision = counters->tx_multi_collision;
tp->tc_offset.tx_aborted = counters->tx_aborted;
tp->tc_offset.rx_missed = counters->rx_missed;
}

tp->tc_offset.inited = true;
}