u8 acpi_tb_is_table_loaded(u32 table_index)
{
u8 is_loaded = FALSE;

(void)acpi_ut_acquire_mutex(ACPI_MTX_TABLES);
if (table_index < acpi_gbl_root_table_list.current_table_count) {
is_loaded = (u8)
(acpi_gbl_root_table_list.tables[table_index].flags &
ACPI_TABLE_IS_LOADED);
}

(void)acpi_ut_release_mutex(ACPI_MTX_TABLES);
return (is_loaded);
}