* ZERO_PAGE is a special page that is used for zero-initialized
* data and COW.
*/
void *empty_zero_page;
EXPORT_SYMBOL(empty_zero_page);

extern void init_pointer_table(unsigned long ptable);
extern pmd_t *zero_pgtable;


pg_data_t pg_data_map[MAX_NUMNODES];
EXPORT_SYMBOL(pg_data_map);

int m68k_virt_to_node_shift;

pg_data_t *pg_data_table[65];
EXPORT_SYMBOL(pg_data_table);

void __init m68k_setup_node(int node)
{
struct m68k_mem_info *info = m68k_memory + node;
int i, end;

i = (unsigned long)phys_to_virt(info->addr) >> __virt_to_node_shift();
end = (unsigned long)phys_to_virt(info->addr + info->size - 1) >> __virt_to_node_shift();
for (; i <= end; i++) {
if (pg_data_table[i])
pr_warn("overlap at %u for chunk %u\n", i, node);
pg_data_table[i] = pg_data_map + node;
}
pg_data_map[node].bdata = bootmem_node_data + node;
node_set_online(node);
}