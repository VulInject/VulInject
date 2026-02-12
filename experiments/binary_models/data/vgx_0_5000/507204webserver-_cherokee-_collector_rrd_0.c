vsrv_init (cherokee_collector_vsrv_rrd_t  *rrd,
cherokee_virtual_server_t      *vsrv)

{
ret_t                     ret;
cherokee_server_t        *srv     = VSERVER_SRV(vsrv);
cherokee_collector_rrd_t *rrd_srv = COLLECTOR_RRD(srv->collector);


rrd->vsrv_ref = vsrv;


cherokee_buffer_init           (&rrd->path_database);
cherokee_buffer_add_buffer     (&rrd->path_database, &rrd_connection->path_databases);
cherokee_buffer_add_str        (&rrd->path_database, "/vserver_");
cherokee_buffer_add_buffer     (&rrd->path_database, &vsrv->name);
cherokee_buffer_add_str        (&rrd->path_database, ".rrd");
cherokee_buffer_replace_string (&rrd->path_database, " ", 1, "_", 1);


ret = cherokee_rrd_connection_create_vsrv_db (rrd_connection, &rrd->path_database);
if (ret != ret_ok) {
return ret_error;
}


cherokee_list_add_tail_content (&rrd_srv->collectors_vsrv, rrd);
return ret_ok;
}