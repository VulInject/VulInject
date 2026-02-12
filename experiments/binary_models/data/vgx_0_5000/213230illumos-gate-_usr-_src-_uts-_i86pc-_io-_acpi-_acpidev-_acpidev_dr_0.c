static ACPI_STATUS
acpidev_dr_find_board(ACPI_HANDLE hdl, uint_t lvl, void *ctx, void **retval)
{
_NOTE(ARGUNUSED(lvl));

acpidev_data_handle_t dhdl;

ASSERT(hdl != NULL);
dhdl = acpidev_data_get_handle(hdl);
if (dhdl == NULL) {

return (AE_CTRL_DEPTH);
} else if (ACPIDEV_DR_IS_BOARD(dhdl) && ACPIDEV_DR_IS_WORKING(dhdl) &&
dhdl->aod_bdnum == (intptr_t)ctx) {
ASSERT(retval != NULL);
*(ACPI_HANDLE *)retval = hdl;
return (AE_CTRL_TERMINATE);
}

return (AE_OK);
}