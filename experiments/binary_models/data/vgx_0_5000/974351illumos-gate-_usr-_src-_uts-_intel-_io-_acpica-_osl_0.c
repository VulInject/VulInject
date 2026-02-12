ACPI_STATUS
acpica_get_apicid_by_object(ACPI_HANDLE hdl, UINT32 *rp)
{
int i;
ACPI_STATUS rc = AE_NOT_EXIST;

ASSERT(rp != NULL);
if (hdl == NULL || rp == NULL) {
return (rc);
}

*rp = UINT32_MAX;
mutex_enter(&cpu_map_lock);
for (i = 0; i < cpu_map_count; i++) {
if (cpu_map[i]->obj == hdl &&
cpu_map[i]->apic_id != UINT32_MAX) {
*rp = cpu_map[i]->apic_id;
rc = AE_OK;
break;
}
}
mutex_exit(&cpu_map_lock);

return (rc);
}