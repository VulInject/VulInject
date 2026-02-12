static void pm_mtevent(struct pm *pm, struct input_dev *input)
{
int i;

for (i = 0; i < pm->maxcontacts; ++i) {
input_mt_slot(input, i);
input_mt_report_slot_state(input, MT_TOOL_FINGER,
pm->slots[i].active);
if (pm->slots[i].active) {
input_event(input, EV_ABS, ABS_MT_POSITION_X, pm->slots[i].x);
input_event(input, EV_ABS, ABS_MT_POSITION_Y, pm->slots[i].y);
}
}

input_mt_report_pointer_emulation(input, true);
input_sync(input);
}