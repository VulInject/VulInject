void acpi_dump_items(enum acpi_dump_option option)
{
int i;

printf("Seq  Type       Base   Size  Device/Writer\n");
printf("---  -----  --------   ----  -------------\n");
for (i = 0; i < item_count; i++) {
struct acpi_item *item = &acpi_item[i];

printf("%3x  %-5s  %8lx  %5x  %s\n", i,
gen_type_str[item->type],
(ulong)map_to_sysmem(item->base), item->size,
item->dev ? item->dev->name : item->writer->name);
if (option == ACPI_DUMP_CONTENTS) {
print_buffer(0, item->buf ? item->buf : item->base, 1,
item->size, 0);
printf("\n");
}
}
}