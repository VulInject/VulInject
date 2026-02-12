static void show_clks(struct udevice *dev, int depth, int last_flag)
{
int i, is_last;
struct udevice *child;
struct clk *clkp, *parent;
u32 rate;

clkp = dev_get_clk_ptr(dev);
if (clkp) {
parent = clk_get_parent(clkp);
if (!IS_ERR(parent) && depth == -1)
return;
depth++;
rate = clk_get_rate(clkp);

printf(" %-12u  %8d        ", rate, clkp->enable_count);

for (i = depth; i >= 0; i--) {
is_last = (last_flag >> i) & 1;
if (i) {
if (is_last)
printf("    ");
else
printf("|   ");
} else {
if (is_last)
printf("`-- ");
else
printf("|-- ");
}
}

printf("%s\n", dev->name);
}

device_foreach_child_probe(child, dev) {
if (device_get_uclass_id(child) != UCLASS_CLK)
continue;
if (child == dev)
continue;
is_last = list_is_last(&child->sibling_node, &dev->child_head);
show_clks(child, depth, (last_flag << 1) | is_last);
}
}