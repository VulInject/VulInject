static void dash_do_groups(GF_DashClient *dash)
{
u32 i, group_count = gf_list_count(dash->groups);

dash->min_wait_ms_before_next_request = 0;


for (i=0; i<group_count; i++) {
GF_DASH_Group *group = gf_list_get(dash->groups, i);
if (group->selection != GF_DASH_GROUP_SELECTED) {
if (group->nb_cached_segments) {
gf_dash_group_reset(dash, group);
}
continue;
}

if (group->depend_on_group) continue;

if (group->rate_adaptation_postponed) {
continue;
}

DownloadGroupStatus res;
res = dash_download_group(dash, group, group, group->groups_depending_on ? GF_TRUE : GF_FALSE);
if (res==GF_DASH_DownloadRestart) {
i--;
continue;
}
}
}