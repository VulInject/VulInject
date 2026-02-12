u8 shpchp_handle_power_fault(u8 hp_slot, struct controller *ctrl)
{
struct slot *p_slot;
u32 event_type;


ctrl_dbg(ctrl, "Power fault interrupt received\n");

p_slot = shpchp_find_slot(ctrl, hp_slot + ctrl->slot_device_offset);

if (!(p_slot->hpc_ops->query_power_fault(p_slot))) {

ctrl_info(ctrl, "Power fault cleared on Slot(%s)\n",
slot_name(p_slot));
p_slot->status = 0x00;
event_type = INT_POWER_FAULT_CLEAR;
} else {

ctrl_info(ctrl, "Power fault on Slot(%s)\n", slot_name(p_slot));
event_type = INT_POWER_FAULT;

p_slot->status = 0xFF;
ctrl_info(ctrl, "Power fault bit %x set\n", hp_slot);
}

queue_interrupt_event(p_slot, event_type);

return 1;
}