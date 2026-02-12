int spapr_caps_post_migration(SpaprMachineState *spapr)
{
int i;
bool ok = true;
SpaprCapabilities dstcaps = spapr->eff;
SpaprCapabilities srccaps;

srccaps = default_caps_with_cpu(spapr, MACHINE(spapr)->cpu_type);
for (i = 0; i < SPAPR_CAP_NUM; i++) {

if (spapr->mig.caps[i] != spapr->def.caps[i]) {
srccaps.caps[i] = spapr->mig.caps[i];
}
}

for (i = 0; i < SPAPR_CAP_NUM; i++) {
SpaprCapabilityInfo *info = &capability_table[i];

if (srccaps.caps[i] > dstcaps.caps[i]) {
error_report("cap-%s higher level (%d) in incoming stream than on destination (%d)",
info->name, srccaps.caps[i], dstcaps.caps[i]);
ok = false;
}

if (srccaps.caps[i] < dstcaps.caps[i]) {
warn_report("cap-%s lower level (%d) in incoming stream than on destination (%d)",
info->name, srccaps.caps[i], dstcaps.caps[i]);
}
}

return ok ? 0 : -EINVAL;
}