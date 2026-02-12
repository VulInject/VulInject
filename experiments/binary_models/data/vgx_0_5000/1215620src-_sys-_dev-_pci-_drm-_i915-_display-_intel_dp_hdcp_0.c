int intel_dp_hdcp_read_ksv_ready(struct intel_digital_port *dig_port,
bool *ksv_ready)
{
struct drm_i915_private *i915 = to_i915(dig_port->base.base.dev);
ssize_t ret;
u8 bstatus;

ret = drm_dp_dpcd_read(&dig_port->dp.aux, DP_AUX_HDCP_BSTATUS,
&bstatus, 1);
if (ret != 1) {
drm_dbg_kms(&i915->drm,
"Read bstatus from DP/AUX failed (%zd)\n", ret);
return ret >= 0 ? -EIO : ret;
}
*ksv_ready = bstatus & DP_BSTATUS_READY;
return 0;
}