static void __init bootx_dt_add_prop(char *name, void *data, int size,
unsigned long *mem_end)
{
unsigned long soff = bootx_dt_find_string(name);
if (data == NULL)
size = 0;
if (soff == 0) {
bootx_printf("WARNING: Can't find string index for <%s>\n",
name);
return;
}
if (size > 0x20000) {
bootx_printf("WARNING: ignoring large property ");
bootx_printf("%s length 0x%x\n", name, size);
return;
}
dt_push_token(OF_DT_PROP, mem_end);
dt_push_token(size, mem_end);
dt_push_token(soff, mem_end);


if (size && data) {
memcpy((void *)*mem_end, data, size);
*mem_end = ALIGN(*mem_end + size, 4);
}
}