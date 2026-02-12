bool xprt_prepare_transmit(struct rpc_task *task)
{
struct rpc_rqst	*req = task->tk_rqstp;
struct rpc_xprt	*xprt = req->rq_xprt;
bool ret = false;

dprintk("RPC: %5u xprt_prepare_transmit\n", task->tk_pid);

spin_lock_bh(&xprt->transport_lock);
if (!req->rq_bytes_sent) {
if (req->rq_reply_bytes_recvd) {
task->tk_status = req->rq_reply_bytes_recvd;
goto out_unlock;
}
if ((task->tk_flags & RPC_TASK_NO_RETRANS_TIMEOUT)
&& xprt_connected(xprt)
&& req->rq_connect_cookie == xprt->connect_cookie) {
xprt->ops->set_retrans_timeout(task);
rpc_sleep_on(&xprt->pending, task, xprt_timer);
goto out_unlock;
}
}
if (!xprt->ops->reserve_xprt(xprt, task)) {
task->tk_status = -EAGAIN;
goto out_unlock;
}
ret = true;
out_unlock:
spin_unlock_bh(&xprt->transport_lock);
return ret;
}