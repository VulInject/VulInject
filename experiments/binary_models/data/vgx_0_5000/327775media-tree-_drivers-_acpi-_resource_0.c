static acpi_status acpi_dev_new_resource_entry(struct resource_win *win,
struct res_proc_context *c)
{
struct resource_entry *rentry;

rentry = resource_list_create_entry(NULL, 0);
if (!rentry) {
c->error = -ENOMEM;
return AE_NO_MEMORY;
}
*rentry->res = win->res;
rentry->offset = win->offset;
resource_list_add_tail(rentry, c->list);
c->count++;
return AE_OK;
}