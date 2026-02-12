static int nouveau_optimus_dsm(acpi_handle handle, int func, int arg, uint32_t *result)
{
int i;
union acpi_object *obj;
char args_buff[4];
union acpi_object argv4 = {
.buffer.type = ACPI_TYPE_BUFFER,
.buffer.length = 4,
.buffer.pointer = args_buff
};


for (i = 0; i < 4; i++)
args_buff[i] = (arg >> i * 8) & 0xFF;

*result = 0;
obj = acpi_evaluate_dsm_typed(handle, nouveau_op_dsm_muid, 0x00000100,
func, &argv4, ACPI_TYPE_BUFFER);
if (!obj) {
acpi_handle_info(handle, "failed to evaluate _DSM\n");
return AE_ERROR;
} else {
if (obj->buffer.length == 4) {
*result |= obj->buffer.pointer[0];
*result |= (obj->buffer.pointer[1] << 8);
*result |= (obj->buffer.pointer[2] << 16);
*result |= (obj->buffer.pointer[3] << 24);
}
ACPI_FREE(obj);
}

return 0;
}