int
tavor_pd_alloc(tavor_state_t *state, tavor_pdhdl_t *pdhdl, uint_t sleepflag)
{
tavor_rsrc_t	*rsrc;
tavor_pdhdl_t	pd;
int		status;


status = tavor_rsrc_alloc(state, TAVOR_PDHDL, 1, sleepflag, &rsrc);
if (status != DDI_SUCCESS) {
return (IBT_INSUFF_RESOURCE);
}
pd = (tavor_pdhdl_t)rsrc->tr_addr;
_NOTE(NOW_INVISIBLE_TO_OTHER_THREADS(*pd))

pd->pd_refcnt = 0;
*pdhdl = pd;

return (DDI_SUCCESS);
}