static void virt_memory_pre_plug(HotplugHandler *hotplug_dev, DeviceState *dev,
Error **errp)
{
VirtMachineState *vms = VIRT_MACHINE(hotplug_dev);
const MachineState *ms = MACHINE(hotplug_dev);
const bool is_nvdimm = object_dynamic_cast(OBJECT(dev), TYPE_NVDIMM);

if (!vms->acpi_dev) {
error_setg(errp,
"memory hotplug is not enabled: missing acpi-ged device");
return;
}

if (vms->mte) {
error_setg(errp, "memory hotplug is not enabled: MTE is enabled");
return;
}

if (is_nvdimm && !ms->nvdimms_state->is_enabled) {
error_setg(errp, "nvdimm is not enabled: add 'nvdimm=on' to '-M'");
return;
}

pc_dimm_pre_plug(PC_DIMM(dev), MACHINE(hotplug_dev), NULL, errp);
}