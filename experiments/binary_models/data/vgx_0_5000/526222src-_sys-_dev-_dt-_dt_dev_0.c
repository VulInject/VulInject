int
dt_ioctl_probe_disable(struct dt_softc *sc, struct dtioc_req *dtrq)
{
struct dt_probe *dtp;
int error;

if (!dtioc_req_isvalid(dtrq))
return EINVAL;

SIMPLEQ_FOREACH(dtp, &dt_probe_list, dtp_next) {
if (dtp->dtp_pbn == dtrq->dtrq_pbn)
break;
}
if (dtp == NULL)
return ENOENT;

if (dtp->dtp_prov->dtpv_dealloc) {
error = dtp->dtp_prov->dtpv_dealloc(dtp, sc, dtrq);
if (error)
return error;
}

DPRINTF("dt%d: pid %d dealloc\n", sc->ds_unit, sc->ds_pid,
dtrq->dtrq_pbn);

return 0;
}