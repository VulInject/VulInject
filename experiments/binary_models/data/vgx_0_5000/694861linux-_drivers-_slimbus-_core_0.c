int slim_device_report_present(struct slim_controller *ctrl,
struct slim_eaddr *e_addr, u8 *laddr)
{
struct slim_device *sbdev;
int ret;

ret = pm_runtime_get_sync(ctrl->dev);

if (ctrl->sched.clk_state != SLIM_CLK_ACTIVE) {
dev_err(ctrl->dev, "slim ctrl not active,state:%d, ret:%d\n",
ctrl->sched.clk_state, ret);
goto slimbus_not_active;
}

sbdev = slim_get_device(ctrl, e_addr);
if (IS_ERR(sbdev))
return -ENODEV;

if (sbdev->is_laddr_valid) {
*laddr = sbdev->laddr;
return 0;
}

ret = slim_device_alloc_laddr(sbdev, true);

slimbus_not_active:
pm_runtime_mark_last_busy(ctrl->dev);
pm_runtime_put_autosuspend(ctrl->dev);
return ret;
}