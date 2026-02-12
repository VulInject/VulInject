static int spu_mdesc_walk_arcs(struct mdesc_handle *mdesc,
struct platform_device *dev,
u64 node, struct spu_queue *p,
struct spu_queue **table)
{
u64 arc;

mdesc_for_each_arc(arc, mdesc, node, MDESC_ARC_TYPE_BACK) {
u64 tgt = mdesc_arc_target(mdesc, arc);
const char *name = mdesc_node_name(mdesc, tgt);
const u64 *id;

if (strcmp(name, "cpu"))
continue;
id = mdesc_get_property(mdesc, tgt, "id", NULL);
if (table[*id] != NULL) {
dev_err(&dev->dev, "%s: SPU cpu slot already set.\n",
dev->dev.of_node->full_name);
return -EINVAL;
}
cpumask_set_cpu(*id, &p->sharing);
table[*id] = p;
}
return 0;
}