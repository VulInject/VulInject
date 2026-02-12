void
acpi_ns_dump_objects(acpi_object_type type,
u8 display_type,
u32 max_depth,
acpi_owner_id owner_id, acpi_handle start_handle)
{
struct acpi_walk_info info;
acpi_status status;

ACPI_FUNCTION_ENTRY();


status = acpi_ut_acquire_mutex(ACPI_MTX_NAMESPACE);
if (ACPI_FAILURE(status)) {
acpi_os_printf("Could not acquire namespace mutex\n");
return;
}

info.count = 0;
info.debug_level = ACPI_LV_TABLES;
info.owner_id = owner_id;
info.display_type = display_type;

(void)acpi_ns_walk_namespace(type, start_handle, max_depth,
ACPI_NS_WALK_NO_UNLOCK |
ACPI_NS_WALK_TEMP_NODES,
acpi_ns_dump_one_object, NULL,
(void *)&info, NULL);

acpi_os_printf("\nNamespace node count: %u\n\n", info.count);
(void)acpi_ut_release_mutex(ACPI_MTX_NAMESPACE);
}