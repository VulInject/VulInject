static void pvc_step_init(struct drm_i915_private *i915, int pci_revid)
{
int ct_subid, bd_subid;

bd_subid = FIELD_GET(PVC_BD_REVID, pci_revid);
ct_subid = FIELD_GET(PVC_CT_REVID, pci_revid);

RUNTIME_INFO(i915)->step.basedie_step =
pvc_step_lookup(i915, "Base Die", pvc_bd_subids,
ARRAY_SIZE(pvc_bd_subids), bd_subid);
RUNTIME_INFO(i915)->step.graphics_step =
pvc_step_lookup(i915, "Compute Tile", pvc_ct_subids,
ARRAY_SIZE(pvc_ct_subids), ct_subid);
}

case STEP_##name:	\
return #name;

const char *intel_step_name(enum intel_step step)
{
switch (step) {
STEP_NAME_LIST(STEP_NAME_CASE);

default:
return "**";
}
}