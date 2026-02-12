static void sort_ifaces(struct raw_iface **rifaces)
{

unsigned nr_ifaces = 0;
for (struct raw_iface *i = *rifaces; i != NULL; i = i->next) {
nr_ifaces++;
}
if (nr_ifaces == 0) {
dbg("no interfaces to sort");
return;
}

struct raw_iface **ifaces = alloc_things(struct raw_iface *, nr_ifaces,
"ifaces for sorting");
ifaces[0] = *rifaces;
for (unsigned i = 1; i < nr_ifaces; i++) {
ifaces[i] = ifaces[i-1]->next;
}

dbg("sorting %u interfaces", nr_ifaces);
qsort(ifaces, nr_ifaces, sizeof(ifaces[0]), cmp_iface);

for (unsigned i = 0; i < nr_ifaces - 1; i++) {
ifaces[i]->next = ifaces[i+1];
}
ifaces[nr_ifaces-1]->next = NULL;

*rifaces = ifaces[0];
pfree(ifaces);
}