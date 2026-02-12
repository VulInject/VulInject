static int
__sclp_start_request(struct sclp_req *req)
{
int rc;

if (sclp_running_state != sclp_running_state_idle)
return 0;
del_timer(&sclp_request_timer);
rc = sclp_service_call_trace(req->command, req->sccb);
req->start_count++;

if (rc == 0) {

req->status = SCLP_REQ_RUNNING;
sclp_running_state = sclp_running_state_running;
__sclp_set_request_timer(SCLP_RETRY_INTERVAL * HZ,
sclp_request_timeout_restart);
return 0;
} else if (rc == -EBUSY) {

__sclp_set_request_timer(SCLP_BUSY_INTERVAL * HZ,
sclp_request_timeout_normal);
return 0;
}

req->status = SCLP_REQ_FAILED;
return rc;
}