void
rde_check_link_down_nbr(struct rde_nbr *nbr)
{
struct eigrp		*eigrp = nbr->eigrp;
struct rt_node		*rn, *safe;
struct eigrp_route	*route;

RB_FOREACH_SAFE(rn, rt_tree, &eigrp->topology, safe) {
route = route_find(nbr, rn);
if (route) {
rde_check_link_down_rn(nbr, rn, route);
if (rn->successor.nbr == nbr)
rn->successor.nbr = NULL;
}
}
}