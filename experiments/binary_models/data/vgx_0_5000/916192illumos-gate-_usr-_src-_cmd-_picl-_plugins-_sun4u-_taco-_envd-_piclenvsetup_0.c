static void
delete_fan_nodes_and_props(void)
{
fan_node_t	*fnodep;
int		i;



for (i = 0; i < NFANS; ++i) {
fnodep = &fan_nodes[i];
if (fnodep->nodeh != 0) {
(void) ptree_delete_node(fnodep->nodeh);
(void) ptree_destroy_node(fnodep->nodeh);
fnodep->nodeh = 0;
}
}
}