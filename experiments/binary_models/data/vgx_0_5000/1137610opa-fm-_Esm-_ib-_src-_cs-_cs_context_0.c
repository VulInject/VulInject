cntxt_entry_t*
cs_cntxt_get_nolock( Mai_t* mad, generic_cntxt_t *cntx, boolean wait )
{
uint64_t	    now;
cntxt_entry_t   *req_cntxt = NULL;

IB_ENTER(__func__, mad, cntx, 0, 0 );

vs_time_get( &now );

req_cntxt = cntx->free_list;
if( req_cntxt != NULL ) {

cntxt_delete_entry( &cntx->free_list, req_cntxt );

++cntx->numAlloc;
--cntx->numFree;

req_cntxt->alloced = 1;
req_cntxt->totalTimeout = cntx->totalTimeout;
if (mad) {

memcpy((void *)&req_cntxt->mad, mad, sizeof(Mai_t));
cntxt_reserve( req_cntxt, cntx );	
}

} else if (wait) {
++cntx->numWaiters;
} else {
IB_LOG_INFINI_INFO0("no free context available at this time");
}

IB_EXIT(__func__, req_cntxt );
return req_cntxt ;
}