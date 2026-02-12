static Status_t
pa_cntxt_reserve(pa_cntxt_t* pa_cntxt)
{
int         bucket;
Status_t	status;

IB_ENTER(__func__, pa_cntxt, 0, 0, 0 );

if ((status = vs_lock(&pa_cntxt_lock)) != VSTATUS_OK) {
IB_LOG_ERRORRC("Failed to lock PA context rc:", status);
} else {
pa_cntxt->ref ++;
if( pa_cntxt->hashed == 0 ) {

bucket = pa_cntxt->lid % PA_CNTXT_HASH_TABLE_DEPTH;
pa_cntxt->hashed = 1 ;
vs_time_get( &pa_cntxt->tstamp );
pa_cntxt_insert_head( pa_hash[ bucket ], pa_cntxt );
}
if ((status = vs_unlock(&pa_cntxt_lock)) != VSTATUS_OK) {
IB_LOG_ERRORRC("Failed to unlock PA context rc:", status);
}
}

IB_EXIT(__func__, VSTATUS_OK );
return VSTATUS_OK ;
}