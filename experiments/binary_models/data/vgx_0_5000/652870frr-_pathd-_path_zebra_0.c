void path_zebra_add_sr_policy(struct srte_policy *policy,
struct srte_segment_list *segment_list)
{
struct zapi_sr_policy zp = {};
struct srte_segment_entry *segment;

zp.color = policy->color;
zp.endpoint = policy->endpoint;
strlcpy(zp.name, policy->name, sizeof(zp.name));
zp.segment_list.type = ZEBRA_LSP_SRTE;
zp.segment_list.local_label = policy->binding_sid;
zp.segment_list.label_num = 0;
RB_FOREACH (segment, srte_segment_entry_head, &segment_list->segments)
zp.segment_list.labels[zp.segment_list.label_num++] =
segment->sid_value;
policy->status = SRTE_POLICY_STATUS_GOING_UP;

(void)zebra_send_sr_policy(zclient, ZEBRA_SR_POLICY_SET, &zp);
}