HISI_PMU_EVENT_ATTR_EXTRACTOR(srcid_cmd, config1, 32, 22);
HISI_PMU_EVENT_ATTR_EXTRACTOR(srcid_msk, config1, 43, 33);
HISI_PMU_EVENT_ATTR_EXTRACTOR(tracetag_en, config1, 44, 44);

static void hisi_pa_pmu_enable_tracetag(struct perf_event *event)
{
struct hisi_pmu *pa_pmu = to_hisi_pmu(event->pmu);
u32 tt_en = hisi_get_tracetag_en(event);

if (tt_en) {
u32 val;

val = readl(pa_pmu->base + PA_TT_CTRL);
val |= PA_TRACETAG_EN;
writel(val, pa_pmu->base + PA_TT_CTRL);
}
}