static void sm_get_lid_info(char *desc, STL_LID lid)
{
Node_t	*nodep;
Port_t	*portp;

if (topology_passcount == 0) {
sprintf(desc, "LID 0x%x", lid);
} else {
(void)vs_rdlock(&old_topology_lock);
portp = sm_find_node_and_port_lid(&old_topology, lid, &nodep);
if (nodep && sm_valid_port(portp)) {
if (nodep->nodeInfo.NodeType == STL_NODE_SW)
sprintf(desc, "%.*s Guid "FMT_U64" LID 0x%x",
(int)sizeof(nodep->nodeDesc.NodeString), nodep->nodeDesc.NodeString,
nodep->nodeInfo.NodeGUID, lid);
else
sprintf(desc, "%.*s Guid "FMT_U64" LID 0x%x Port %u",
(int)sizeof(nodep->nodeDesc.NodeString), nodep->nodeDesc.NodeString,
nodep->nodeInfo.NodeGUID, lid, (unsigned)portp->index);
} else {
sprintf(desc, "LID 0x%x", lid);
}
(void)vs_rwunlock(&old_topology_lock);
}
}