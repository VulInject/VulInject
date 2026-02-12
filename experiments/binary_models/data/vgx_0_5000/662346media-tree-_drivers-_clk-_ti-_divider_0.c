__init ti_clk_get_div_table(struct device_node *node)
{
struct clk_div_table *table;
const __be32 *divspec;
u32 val;
u32 num_div;
u32 valid_div;
int i;

divspec = of_get_property(node, "ti,dividers", &num_div);

if (!divspec)
return NULL;

num_div /= 4;

valid_div = 0;


for (i = 0; i < num_div; i++) {
of_property_read_u32_index(node, "ti,dividers", i, &val);
if (val)
valid_div++;
}

if (!valid_div) {
pr_err("no valid dividers for %s table\n", node->name);
return ERR_PTR(-EINVAL);
}

table = kzalloc(sizeof(*table) * (valid_div + 1), GFP_KERNEL);

if (!table)
return ERR_PTR(-ENOMEM);

valid_div = 0;

for (i = 0; i < num_div; i++) {
of_property_read_u32_index(node, "ti,dividers", i, &val);
if (val) {
table[valid_div].div = val;
table[valid_div].val = i;
valid_div++;
}
}

return table;
}