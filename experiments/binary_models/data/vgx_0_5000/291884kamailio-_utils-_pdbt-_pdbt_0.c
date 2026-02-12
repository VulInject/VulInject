int query_server(char *number, char *comment, void *data) {
carrier_t carrierid;
struct server_query_data_t *sdata = (struct server_query_data_t *)data;
int result = 0;

carrierid = query_udp(number, sdata->timeout, &(sdata->pfds), &(sdata->dstaddr), sdata->dstaddrlen);

if (carrierid<=0) {
LINFO("%s: not_found: comment='%s', result=%d\n", number, comment, carrierid);
if (carrierid < 0) {
result = carrierid; 
} else {
result = PDB_NOT_IN_PDB; 
}
}
else {
LINFO("%s:%ld:%s\n", number, (long int)carrierid, carrierid2name(carrierid));
result = PDB_OK;
}
return result; 
}