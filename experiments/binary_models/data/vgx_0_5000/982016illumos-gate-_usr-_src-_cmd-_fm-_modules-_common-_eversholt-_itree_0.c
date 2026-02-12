static void
itree_pruner(void *left, void *right, void *arg)
{
struct event *ep = (struct event *)right;
struct bubble *nextbub, *bub;

if (ep->keep_in_tree)
return;


lut_free(ep->props, instances_destructor, NULL);


lut_free(ep->payloadprops, payloadprops_destructor, NULL);


lut_free(ep->serdprops, serdprops_destructor, NULL);


for (bub = ep->bubbles; bub != NULL; ) {
nextbub = bub->next;
itree_prune_arrowlists(bub);
itree_free_bubble(bub);
bub = nextbub;
}

nvlist_free(ep->nvp);
ep->props = NULL;
ep->payloadprops = NULL;
ep->serdprops = NULL;
ep->bubbles = NULL;
ep->nvp = NULL;
}