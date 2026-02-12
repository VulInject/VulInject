static void arm_ccn_pmu_event_release(struct perf_event *event)
{
struct arm_ccn *ccn = pmu_to_arm_ccn(event->pmu);
struct hw_perf_event *hw = &event->hw;

if (hw->idx == CCN_IDX_PMU_CYCLE_COUNTER) {
clear_bit(CCN_IDX_PMU_CYCLE_COUNTER, ccn->dt.pmu_counters_mask);
} else {
struct arm_ccn_component *source =
ccn->dt.pmu_counters[hw->idx].source;

if (CCN_CONFIG_TYPE(event->attr.config) == CCN_TYPE_XP &&
CCN_CONFIG_EVENT(event->attr.config) ==
CCN_EVENT_WATCHPOINT)
clear_bit(hw->config_base, source->xp.dt_cmp_mask);
else
clear_bit(hw->config_base, source->pmu_events_mask);
clear_bit(hw->idx, ccn->dt.pmu_counters_mask);
}

ccn->dt.pmu_counters[hw->idx].source = NULL;
ccn->dt.pmu_counters[hw->idx].event = NULL;
}