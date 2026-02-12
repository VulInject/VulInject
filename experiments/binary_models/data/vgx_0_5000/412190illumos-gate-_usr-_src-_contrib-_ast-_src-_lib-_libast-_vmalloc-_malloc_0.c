int _mallocstat(Vmstat_t* st)
{
Vmstat_t	vmst;
int		k;

if(vmstat(Vmregion, st) < 0) 
return -1;
for(k = 0; k < Regnum; ++k)
{	if(!Region[k])
continue;
if(vmstat(Region[k], &vmst) < 0 )
return -1;
st->n_busy += vmst.n_busy;
st->n_free += vmst.n_free;
st->s_busy += vmst.s_busy;
st->s_free += vmst.s_free;
st->m_busy += vmst.m_busy;
st->m_free += vmst.m_free;
st->n_seg  += vmst.n_seg;
st->extent += vmst.extent;
}

st->n_region = Regnum+1;
st->n_open = Regopen;
st->n_lock = Reglock;
st->n_probe = Regprobe;

return 0;
}