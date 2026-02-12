boolean
sm_flap_report_port_change_trap(Popo_t *popop, Node_t *nodep)
{

if(!nodep)
return TRUE;

if(!_sm_flap_does_node_have_flapping(popop, nodep))
return TRUE;

Port_t *portp = sm_get_node_end_port(nodep);
if(!portp)
return TRUE;

SmpAddr_t addr = SMP_ADDR_CREATE_LR(sm_lid, portp->portData->lid);
uint32_t amod = (nodep->nodeInfo.NumPorts + 1) << 24;
flapping_context_t *ctx;
vs_pool_alloc(&sm_pool, sizeof(flapping_context_t), (void**) &ctx);
ctx->NodeGUID = nodep->nodeInfo.NodeGUID; 
ctx->lid = portp->portData->lid;
ctx->popop = popop;

SM_Get_PortStateInfo_Dispatch(fd_flapping_port, amod, &addr, nodep,
&sm_asyncDispatch, _trap_psi_callback, ctx); 

return FALSE; 
}