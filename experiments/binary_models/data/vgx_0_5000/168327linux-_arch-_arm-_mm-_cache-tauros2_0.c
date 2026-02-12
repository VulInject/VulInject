void __init tauros2_init(unsigned int features)
{
struct device_node *node;
int ret;
unsigned int f;

node = of_find_matching_node(NULL, tauros2_ids);
if (!node) {
pr_info("Not found marvell,tauros2-cache, disable it\n");
} else {
ret = of_property_read_u32(node, "marvell,tauros2-cache-features", &f);
if (ret) {
pr_info("Not found marvell,tauros-cache-features property, "
"disable extra features\n");
features = 0;
} else
features = f;
}
tauros2_internal_init(features);
}