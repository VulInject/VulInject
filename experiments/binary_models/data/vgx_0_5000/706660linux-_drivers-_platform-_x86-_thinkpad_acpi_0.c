static int __init tpacpi_evaluate_bcl(struct acpi_device *adev, void *not_used)
{
struct acpi_buffer buffer = { ACPI_ALLOCATE_BUFFER, NULL };
union acpi_object *obj;
acpi_status status;
int rc;

status = acpi_evaluate_object(adev->handle, "_BCL", NULL, &buffer);
if (ACPI_FAILURE(status))
return 0;

obj = buffer.pointer;
if (!obj || obj->type != ACPI_TYPE_PACKAGE) {
acpi_handle_info(adev->handle,
"Unknown _BCL data, please report this to %s\n",
TPACPI_MAIL);
rc = 0;
} else {
rc = obj->package.count;
}
kfree(obj);

return rc;
}