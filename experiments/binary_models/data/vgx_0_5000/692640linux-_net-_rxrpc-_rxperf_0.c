static int rxperf_deliver_param_block(struct rxperf_call *call)
{
u32 version;
int ret;


ret = rxperf_extract_data(call, true);
if (ret < 0)
return ret;

version			= ntohl(call->params.version);
call->operation_id	= ntohl(call->params.type);
call->deliver		= rxperf_deliver_request;

if (version != RX_PERF_VERSION) {
pr_info("Version mismatch %x\n", version);
return -ENOTSUPP;
}

switch (call->operation_id) {
case RX_PERF_SEND:
call->type = "send";
call->reply_len = 0;
call->iov_len = 4;	
break;
case RX_PERF_RECV:
call->type = "recv";
call->req_len = 0;
call->iov_len = 4;	
break;
case RX_PERF_RPC:
call->type = "rpc";
call->iov_len = 8;	
break;
case RX_PERF_FILE:
call->type = "file";
fallthrough;
default:
return -EOPNOTSUPP;
}

rxperf_set_call_state(call, RXPERF_CALL_SV_AWAIT_REQUEST);
return call->deliver(call);
}