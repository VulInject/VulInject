static int vfyCb(struct rpmsinfo_s *sinfo, void *cbdata)
{
struct vfydata_s *vd = cbdata;
vd->seen |= sinfo->type;
if (sinfo->rc != RPMRC_OK)
vd->bad |= sinfo->type;
if (vd->verbose) {
char *vsmsg = rpmsinfoMsg(sinfo);
rpmlog(RPMLOG_NOTICE, "    %s\n", vsmsg);
free(vsmsg);
}
return 1;
}