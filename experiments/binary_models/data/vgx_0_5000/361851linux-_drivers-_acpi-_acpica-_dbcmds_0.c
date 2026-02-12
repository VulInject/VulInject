void acpi_db_generate_gpe(char *gpe_arg, char *block_arg)
{
u32 block_number = 0;
u32 gpe_number;
struct acpi_gpe_event_info *gpe_event_info;

gpe_number = strtoul(gpe_arg, NULL, 0);


if (block_arg) {
block_number = strtoul(block_arg, NULL, 0);
if (block_number == 1) {
block_number = 0;
}
}

gpe_event_info =
acpi_ev_get_gpe_event_info(ACPI_TO_POINTER(block_number),
gpe_number);
if (!gpe_event_info) {
acpi_os_printf("Invalid GPE\n");
return;
}

(void)acpi_ev_gpe_dispatch(NULL, gpe_event_info, gpe_number);
}