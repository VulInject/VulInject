static void pxa1928_clk_reset_init(struct device_node *np,
struct pxa1928_clk_unit *pxa_unit)
{
struct mmp_clk_reset_cell *cells;
int i, base, nr_resets;

nr_resets = ARRAY_SIZE(apbc_gate_clks);
cells = kcalloc(nr_resets, sizeof(*cells), GFP_KERNEL);
if (!cells)
return;

base = 0;
for (i = 0; i < nr_resets; i++) {
cells[base + i].clk_id = apbc_gate_clks[i].id;
cells[base + i].reg =
pxa_unit->apbc_base + apbc_gate_clks[i].offset;
cells[base + i].flags = 0;
cells[base + i].lock = apbc_gate_clks[i].lock;
cells[base + i].bits = 0x4;
}

mmp_clk_reset_register(np, cells, nr_resets);
}