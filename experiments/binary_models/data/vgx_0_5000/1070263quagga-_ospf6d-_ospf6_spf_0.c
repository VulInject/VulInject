ospf6_spf_display_subtree (struct vty *vty, const char *prefix, int rest,
struct ospf6_vertex *v)
{
struct listnode *node, *nnode;
struct ospf6_vertex *c;
char *next_prefix;
int len;
int restnum;


vty_out (vty, "%s+-%s [%d]%s", prefix, v->name, v->cost, VNL);

len = strlen (prefix) + 4;
next_prefix = (char *) malloc (len);
if (next_prefix == NULL)
{
vty_out (vty, "malloc failed%s", VNL);
return;
}
snprintf (next_prefix, len, "%s%s", prefix, (rest ? "|  " : "   "));

restnum = listcount (v->child_list);
for (ALL_LIST_ELEMENTS (v->child_list, node, nnode, c))
{
restnum--;
ospf6_spf_display_subtree (vty, next_prefix, restnum, c);
}

free (next_prefix);
}