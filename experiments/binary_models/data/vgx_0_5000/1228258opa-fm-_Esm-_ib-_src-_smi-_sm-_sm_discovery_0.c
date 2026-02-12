static DiscoveryWorkItem_t *
_discover_workitem_alloc(DiscoveryContext_t *disc_ctx, Node_t *nodep,
Port_t *portp, PsWorker_t workfunc)
{
DiscoveryWorkItem_t *disc_workitem = NULL;
if (vs_pool_alloc(&sm_pool, sizeof(DiscoveryWorkItem_t),
(void**)&disc_workitem) != VSTATUS_OK) {
return NULL;
}
memset(disc_workitem, 0, sizeof(DiscoveryWorkItem_t));

disc_workitem->upstream_nodep = nodep;
disc_workitem->upstream_portp = portp;
disc_workitem->item.workfunc = workfunc;
disc_workitem->ctx = disc_ctx;

return disc_workitem;
}