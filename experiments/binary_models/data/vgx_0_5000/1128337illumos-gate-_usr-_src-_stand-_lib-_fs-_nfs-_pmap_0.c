static void
bpmap_delport(rpcprog_t prog, rpcvers_t vers)
{
struct pmaplist *tmp, *prev;

prev = map_head;
for (tmp = map_head; tmp != NULL; tmp = tmp->pml_next) {
if ((tmp->pml_map.pm_prog == prog) &&
(tmp->pml_map.pm_vers == vers)) {
if (tmp == map_head)
map_head = tmp->pml_next; 
else if (tmp == map_tail) {
map_tail = prev;	
map_tail->pml_next = NULL;
} else {

prev->pml_next = tmp->pml_next;
}
printf("bpmap_delport: prog: %x, vers: %x\n", prog,
vers);
bkmem_free((caddr_t)tmp, sizeof (struct pmaplist));
break;
} else
prev = tmp;
}
}