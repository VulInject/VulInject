int
sm_routing_func_get_port_group(Topology_t *topop, Node_t *switchp, Node_t *nodep, uint8_t *portnos)
{
int i, j;
int end_port = 0;
SwitchportToNextGuid_t *ordered_ports = (SwitchportToNextGuid_t *)topop->pad;
memset(ordered_ports, 0, sizeof(SwitchportToNextGuid_t) * switchp->nodeInfo.NumPorts);
SwitchportToNextGuid_t ordered_ports[MAX_STL_PORTS] = {{0}};

IB_ENTER(__func__, switchp, nodep, 0, 0);

memset((void*)portnos, 0xff, sizeof(uint8_t)*128);

if (nodep->nodeInfo.NodeType != NI_TYPE_SWITCH) {
IB_EXIT(__func__, VSTATUS_OK);
return 0;
}

i = switchp->swIdx;
j = nodep->swIdx;

if (j == i) {
IB_EXIT(__func__, VSTATUS_OK);
return 0;
}


end_port =  topop->routingModule->funcs.select_ports(topop, switchp, j, ordered_ports, 0);

qsort(ordered_ports, end_port, sizeof(SwitchportToNextGuid_t), _compare_guids);

for (i=0; i<end_port; i++) {
portnos[i] = ordered_ports[i].portp->index;
}

if (portnos[0] == 0xff && smDebugPerf) {
IB_LOG_INFINI_INFO_FMT(__func__, "Failed to get portGroup from switch %s to switch %s",
sm_nodeDescString(switchp), sm_nodeDescString(nodep));
}

IB_EXIT(__func__, VSTATUS_OK);
return end_port;
}