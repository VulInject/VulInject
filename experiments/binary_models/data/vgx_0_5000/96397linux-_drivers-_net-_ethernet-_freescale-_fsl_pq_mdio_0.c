static void ucc_configure(phys_addr_t start, phys_addr_t end)
{
static bool found_mii_master;
struct device_node *np = NULL;

if (found_mii_master)
return;

for_each_compatible_node(np, NULL, "ucc_geth") {
struct resource res;
const uint32_t *iprop;
uint32_t id;
int ret;

ret = of_address_to_resource(np, 0, &res);
if (ret < 0) {
pr_debug("fsl-pq-mdio: no address range in node %pOF\n",
np);
continue;
}


if ((start < res.start) || (end > res.end))
continue;

iprop = of_get_property(np, "cell-index", NULL);
if (!iprop) {
iprop = of_get_property(np, "device-id", NULL);
if (!iprop) {
pr_debug("fsl-pq-mdio: no UCC ID in node %pOF\n",
np);
continue;
}
}

id = be32_to_cpup(iprop);


if (ucc_set_qe_mux_mii_mng(id - 1) < 0) {
pr_debug("fsl-pq-mdio: invalid UCC ID in node %pOF\n",
np);
continue;
}

pr_debug("fsl-pq-mdio: setting node UCC%u to MII master\n", id);
found_mii_master = true;
}
}