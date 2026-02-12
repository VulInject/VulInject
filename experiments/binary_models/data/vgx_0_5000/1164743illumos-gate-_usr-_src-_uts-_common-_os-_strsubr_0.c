void
mux_rmvedge(stdata_t *upstp, int muxid, str_stack_t *ss)
{
struct mux_node *np;
struct mux_edge *ep;
struct mux_edge *pep = NULL;
major_t upmaj;

upmaj = getmajor(upstp->sd_vnode->v_rdev);
np = &ss->ss_mux_nodes[upmaj];
ASSERT(np->mn_outp != NULL);
ep = np->mn_outp;
while (ep) {
if (ep->me_muxid == muxid) {
if (pep)
pep->me_nextp = ep->me_nextp;
else
np->mn_outp = ep->me_nextp;
kmem_free(ep, sizeof (struct mux_edge));
return;
}
pep = ep;
ep = ep->me_nextp;
}
ASSERT(0);	
}