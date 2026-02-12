static void
decommission_pending_tcp(struct outside_network* outnet, 
struct pending_tcp* pend)
{
verbose(VERB_CLIENT, "decommission_pending_tcp");

if(outnet->tcp_free != pend) {
pend->next_free = outnet->tcp_free;
outnet->tcp_free = pend;
}
if(pend->reuse.node.key) {

reuse_tcp_remove_tree_list(outnet, &pend->reuse);
}

if(pend->c->ssl) {
SSL_shutdown(pend->c->ssl);
SSL_free(pend->c->ssl);
pend->c->ssl = NULL;
}
comm_point_close(pend->c);
pend->reuse.cp_more_read_again = 0;
pend->reuse.cp_more_write_again = 0;

pend->query = NULL;
pend->reuse.write_wait_first = NULL;
pend->reuse.write_wait_last = NULL;
reuse_del_readwait(&pend->reuse.tree_by_id);
}