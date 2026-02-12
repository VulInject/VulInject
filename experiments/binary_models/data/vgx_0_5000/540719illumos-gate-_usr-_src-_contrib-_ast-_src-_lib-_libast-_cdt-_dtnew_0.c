Dt_t*
_dtnew(Vmalloc_t* vm, Dtdisc_t* disc, Dtmethod_t* meth, unsigned long version)
{
Dt_t*		dt;
Dc_t		dc;

dc.odisc = disc;
dc.ndisc = *disc;
dc.ndisc.eventf = eventf;
if (!dc.ndisc.memoryf)
dc.ndisc.memoryf = memoryf;
dc.vm = vm;
if (dt = _dtopen(&dc.ndisc, meth, version))
dtdisc(dt, disc, DT_SAMECMP|DT_SAMEHASH);
return dt;
}