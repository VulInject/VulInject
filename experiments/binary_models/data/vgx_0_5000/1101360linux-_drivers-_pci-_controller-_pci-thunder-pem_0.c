static void thunder_pem_legacy_fw(struct acpi_pci_root *root,
struct resource *res_pem)
{
int node = acpi_get_node(root->device->handle);
int index;

if (node == NUMA_NO_NODE)
node = 0;

index = root->segment - PEM_MIN_DOM_IN_NODE;
index -= node * PEM_MAX_DOM_IN_NODE;
res_pem->start = PEM_RES_BASE | FIELD_PREP(PEM_NODE_MASK, node) |
FIELD_PREP(PEM_INDX_MASK, index);
res_pem->flags = IORESOURCE_MEM;
}