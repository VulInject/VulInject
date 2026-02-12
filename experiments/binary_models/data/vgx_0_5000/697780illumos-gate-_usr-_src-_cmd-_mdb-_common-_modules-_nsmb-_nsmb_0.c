int
rqlist_walk_step(mdb_walk_state_t *wsp)
{
smb_rq_t rq;
int status;

if (wsp->walk_addr == 0)
return (WALK_DONE);

if (mdb_vread(&rq, sizeof (rq), wsp->walk_addr) == -1) {
mdb_warn("cannot read smb_rq from %p", wsp->walk_addr);
return (WALK_ERR);
}

status = wsp->walk_callback(wsp->walk_addr, &rq,
wsp->walk_cbdata);

wsp->walk_addr = (uintptr_t)rq.sr_link.tqe_next;

return (status);
}

typedef struct rqlist_cbdata {
int printed_header;
int vcflags;
uintptr_t uid;		
} rqlist_cbdata_t;