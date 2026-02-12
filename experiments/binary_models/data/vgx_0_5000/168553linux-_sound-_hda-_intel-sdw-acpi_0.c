static acpi_status sdw_intel_acpi_cb(acpi_handle handle, u32 level,
void *cdata, void **return_value)
{
struct sdw_intel_acpi_info *info = cdata;
acpi_status status;
u64 adr;

status = acpi_evaluate_integer(handle, METHOD_NAME__ADR, NULL, &adr);
if (ACPI_FAILURE(status))
return AE_OK; 

if (!acpi_fetch_acpi_dev(handle)) {
pr_err("%s: Couldn't find ACPI handle\n", __func__);
return AE_NOT_FOUND;
}


if (FIELD_GET(GENMASK(31, 28), adr) != SDW_LINK_TYPE)
return AE_OK; 


info->handle = handle;


return AE_CTRL_TERMINATE;
}