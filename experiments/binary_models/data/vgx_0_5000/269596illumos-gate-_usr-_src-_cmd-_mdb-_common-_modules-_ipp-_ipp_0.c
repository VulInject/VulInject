static int
byid_walk_step(
mdb_walk_state_t *wsp)
{
int		status;
void		*ptr;

if (mdb_vread(&ptr, sizeof (void *), wsp->walk_addr) == -1) {
mdb_warn("failed to read from address %p", wsp->walk_addr);
return (WALK_ERR);
}

if (ptr == (void *)-1) {
status = WALK_DONE;
} else if (ptr == NULL) {
status = WALK_NEXT;
} else {
status = wsp->walk_callback((uintptr_t)ptr, NULL,
wsp->walk_cbdata);
}

wsp->walk_addr += sizeof (void *);

return (status);
}