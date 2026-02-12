int pv_parse_lsock_name(pv_spec_t *sp, str *in)
{
pv_elem_t *pve = NULL;

if(in->s==NULL || in->len<=0)
return -1;

LM_DBG("lsock expression [%.*s]\n", in->len, in->s);
if(pv_parse_format(in, &pve)<0 || pve==NULL) {
LM_ERR("wrong format [%.*s]\n", in->len, in->s);
goto error;
}
sp->pvp.pvn.u.dname = (void*)pve;
sp->pvp.pvn.type = PV_NAME_OTHER;
sp->pvp.pvn.nfree = pv_free_lsock_name;

return 0;

error:
return -1;
}