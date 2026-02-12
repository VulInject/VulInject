static void wf_smu_create_slots_fans(void)
{
struct wf_pid_param param = {
.interval	= 1,
.history_len	= 8,
.gd		= 0x00000000,
.gp		= 0x00000000,
.gr		= 0x00020000,
.itarget	= 0x00000000
};


wf_smu_slots_fans = kmalloc(sizeof(struct wf_smu_slots_fans_state),
GFP_KERNEL);
if (wf_smu_slots_fans == NULL) {
printk(KERN_WARNING "windfarm: Memory allocation error"
" max fan speed\n");
goto fail;
}
wf_smu_slots_fans->ticks = 1;


param.additive = (fan_slots->type == WF_CONTROL_RPM_FAN);
param.min = wf_control_get_min(fan_slots);
param.max = wf_control_get_max(fan_slots);
wf_pid_init(&wf_smu_slots_fans->pid, &param);

DBG("wf: Slots Fan control initialized.\n");
DBG("    itarged=%d.%03d, min=%d RPM, max=%d RPM\n",
FIX32TOPRINT(param.itarget), param.min, param.max);
return;

fail:
if (fan_slots)
wf_control_set_max(fan_slots);
}