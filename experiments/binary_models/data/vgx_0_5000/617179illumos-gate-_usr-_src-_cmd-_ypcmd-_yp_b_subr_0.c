bool
ypbind_broadcast_ack(ptrue, nbuf, nconf)
bool *ptrue;
struct netbuf *nbuf;
struct netconfig *nconf;
{
struct ypbind_binding b;

process_current_domain->dom_boundp = TRUE;
b.ypbind_nconf = nconf;
b.ypbind_svcaddr = nbuf;
b.ypbind_servername = "\000";
b.ypbind_hi_vers = YPVERS;
b.ypbind_lo_vers = YPVERS;
free_ypbind_binding(process_current_domain->dom_binding);
process_current_domain->dom_binding = dup_ypbind_binding(&b);
return (TRUE);
}