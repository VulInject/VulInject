bool msm_edp_ctrl_panel_connected(struct edp_ctrl *ctrl)
{
mutex_lock(&ctrl->dev_mutex);
DBG("connect status = %d", ctrl->edp_connected);
if (ctrl->edp_connected) {
mutex_unlock(&ctrl->dev_mutex);
return true;
}

if (!ctrl->power_on) {
edp_ctrl_phy_aux_enable(ctrl, 1);
edp_ctrl_irq_enable(ctrl, 1);
}

if (drm_dp_dpcd_read(ctrl->drm_aux, DP_DPCD_REV, ctrl->dpcd,
DP_RECEIVER_CAP_SIZE) < DP_RECEIVER_CAP_SIZE) {
pr_err("%s: AUX channel is NOT ready\n", __func__);
memset(ctrl->dpcd, 0, DP_RECEIVER_CAP_SIZE);
} else {
ctrl->edp_connected = true;
}

if (!ctrl->power_on) {
edp_ctrl_irq_enable(ctrl, 0);
edp_ctrl_phy_aux_enable(ctrl, 0);
}

DBG("exit: connect status=%d", ctrl->edp_connected);

mutex_unlock(&ctrl->dev_mutex);

return ctrl->edp_connected;
}