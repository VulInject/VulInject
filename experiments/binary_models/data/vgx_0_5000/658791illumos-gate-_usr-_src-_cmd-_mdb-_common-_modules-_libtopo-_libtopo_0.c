static int
tpg_walk_init(mdb_walk_state_t *wsp)
{
tnode_t node;

if (wsp->walk_addr == 0) {
mdb_warn("NULL tnode_t passed in");
return (WALK_ERR);
}

if (mdb_vread(&node, sizeof (node), wsp->walk_addr) != sizeof (node)) {
mdb_warn("failed to read tnode_t at %p", wsp->walk_addr);
return (WALK_ERR);
}

wsp->walk_addr = (uintptr_t)node.tn_pgroups.l_next;
wsp->walk_data = mdb_alloc(sizeof (topo_pgroup_t), UM_SLEEP);

return (WALK_NEXT);
}