int qcom_icc_aggregate(struct icc_node *node, u32 tag, u32 avg_bw,
u32 peak_bw, u32 *agg_avg, u32 *agg_peak)
{
size_t i;
struct qcom_icc_node *qn;

qn = node->data;

if (!tag)
tag = QCOM_ICC_TAG_ALWAYS;

for (i = 0; i < QCOM_ICC_NUM_BUCKETS; i++) {
if (tag & BIT(i)) {
qn->sum_avg[i] += avg_bw;
qn->max_peak[i] = max_t(u32, qn->max_peak[i], peak_bw);
}

if (node->init_avg || node->init_peak) {
qn->sum_avg[i] = max_t(u64, qn->sum_avg[i], node->init_avg);
qn->max_peak[i] = max_t(u64, qn->max_peak[i], node->init_peak);
}
}

*agg_avg += avg_bw;
*agg_peak = max_t(u32, *agg_peak, peak_bw);

return 0;
}