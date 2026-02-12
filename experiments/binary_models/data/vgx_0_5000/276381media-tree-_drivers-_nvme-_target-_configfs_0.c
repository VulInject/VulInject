static ssize_t nvmet_addr_treq_store(struct config_item *item,
const char *page, size_t count)
{
struct nvmet_port *port = to_nvmet_port(item);

if (port->enabled) {
pr_err("Cannot modify address while enabled\n");
pr_err("Disable the address before modifying\n");
return -EACCES;
}

if (sysfs_streq(page, "not specified")) {
port->disc_addr.treq = NVMF_TREQ_NOT_SPECIFIED;
} else if (sysfs_streq(page, "required")) {
port->disc_addr.treq = NVMF_TREQ_REQUIRED;
} else if (sysfs_streq(page, "not required")) {
port->disc_addr.treq = NVMF_TREQ_NOT_REQUIRED;
} else {
pr_err("Invalid value '%s' for treq\n", page);
return -EINVAL;
}

return count;
}