Status_t
sa_cntxt_data( sa_cntxt_t* sa_cntxt, void* buf, uint32_t len )
{
Status_t	status ;

IB_ENTER( "sa_cntxt_data", sa_cntxt, buf, len, 0 );

status = VSTATUS_OK ;

if (!buf || !len) {
sa_cntxt->data = NULL;
sa_cntxt->len = 0;
sa_cntxt->freeDataFunc = NULL;
goto done;
}

status = vs_pool_alloc(&sm_pool, len, (void*)&sa_cntxt->data);
if (status == VSTATUS_OK) {
sa_cntxt->len = len;
memcpy(sa_cntxt->data, buf, len);
sa_cntxt->freeDataFunc = sa_cntxt_free_data;
} else {
sa_cntxt->len = 0;
sa_cntxt->data = NULL; 
sa_cntxt->freeDataFunc = NULL;
}

done:
IB_EXIT("sa_cntxt_data", status);
return status ;
}