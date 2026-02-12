
START_TEST(get_status_test)
{
tlist_head           pstat;
struct pbsnode       pnode;
int                  bad;
struct batch_request preq;
int                  count = 0;
int                  rc = 0;

pstat.ll_struct = &count;

pnode.alps_subnodes = new all_nodes();
for(int i = 0;i < 10;i++)
{
char id[10];
struct pbsnode *pNd = (struct pbsnode *)calloc(1,sizeof(struct pbsnode));
sprintf(id,"node_%d",i);
pnode.alps_subnodes->lock();
pnode.alps_subnodes->insert(pNd,id);
pnode.alps_subnodes->unlock();
}
rc = get_alps_statuses(&pnode, &preq, &bad, &pstat);

fail_unless(rc == 0, "Couldn't get the alps statuses?");
fail_unless(count == 10, "The wrong count was returned");
}
END_TEST