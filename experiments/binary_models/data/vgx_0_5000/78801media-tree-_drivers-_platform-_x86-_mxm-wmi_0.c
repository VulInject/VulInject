int mxm_wmi_call_mxmx(int adapter)
{
struct mxds_args args = {
.func = MXM_WMMX_FUNC_MXMX,
.args = 0,
.xarg = 1,
};
struct acpi_buffer input = { (acpi_size)sizeof(args), &args };
struct acpi_buffer output = { ACPI_ALLOCATE_BUFFER, NULL };
acpi_status status;

printk("calling mux switch %d\n", adapter);

status = wmi_evaluate_method(MXM_WMMX_GUID, 0x1, adapter, &input,
&output);

if (ACPI_FAILURE(status))
return status;

printk("mux mutex set switched %d\n", status);
return 0;

}