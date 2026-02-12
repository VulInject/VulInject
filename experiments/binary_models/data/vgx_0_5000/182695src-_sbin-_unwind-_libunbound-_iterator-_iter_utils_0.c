int
iter_stub_fwd_no_cache(struct module_qstate *qstate, struct query_info *qinf,
uint8_t** retdpname, size_t* retdpnamelen)
{
struct iter_hints_stub *stub;
struct delegpt *dp;


stub = hints_lookup_stub(qstate->env->hints, qinf->qname,
qinf->qclass, NULL);
dp = forwards_lookup(qstate->env->fwds, qinf->qname, qinf->qclass);


if(stub && stub->dp && dp) {
if(dname_strict_subdomain(dp->name, dp->namelabs,
stub->dp->name, stub->dp->namelabs)) {
stub = NULL; 
} else {
dp = NULL; 
}
}


if (stub != NULL && stub->dp != NULL) {
if(stub->dp->no_cache) {
char qname[255+1];
char dpname[255+1];
dname_str(qinf->qname, qname);
dname_str(stub->dp->name, dpname);
verbose(VERB_ALGO, "stub for %s %s has no_cache", qname, dpname);
}
if(retdpname) {
*retdpname = stub->dp->name;
*retdpnamelen = stub->dp->namelen;
}
return (stub->dp->no_cache);
}


if (dp) {
if(dp->no_cache) {
char qname[255+1];
char dpname[255+1];
dname_str(qinf->qname, qname);
dname_str(dp->name, dpname);
verbose(VERB_ALGO, "forward for %s %s has no_cache", qname, dpname);
}
if(retdpname) {
*retdpname = dp->name;
*retdpnamelen = dp->namelen;
}
return (dp->no_cache);
}
if(retdpname) {
*retdpname = NULL;
*retdpnamelen = 0;
}
return 0;
}