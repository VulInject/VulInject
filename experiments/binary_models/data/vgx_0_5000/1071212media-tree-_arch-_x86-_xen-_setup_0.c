char * __init xen_auto_xlated_memory_setup(void)
{
struct xen_memory_map memmap;
int i;
int rc;

memmap.nr_entries = ARRAY_SIZE(xen_e820_table.entries);
set_xen_guest_handle(memmap.buffer, xen_e820_table.entries);

rc = HYPERVISOR_memory_op(XENMEM_memory_map, &memmap);
if (rc < 0)
panic("No memory map (%d)\n", rc);

xen_e820_table.nr_entries = memmap.nr_entries;

e820__update_table(&xen_e820_table);

for (i = 0; i < xen_e820_table.nr_entries; i++)
e820__range_add(xen_e820_table.entries[i].addr, xen_e820_table.entries[i].size, xen_e820_table.entries[i].type);


xen_start_info->mfn_list = 0;
xen_start_info->first_p2m_pfn = 0;
xen_start_info->nr_p2m_frames = 0;

return "Xen";
}


static void __init fiddle_vdso(void)
{
u32 *mask = vdso_image_32.data +
vdso_image_32.sym_VDSO32_NOTE_MASK;
*mask |= 1 << VDSO_NOTE_NONEGSEG_BIT;
}