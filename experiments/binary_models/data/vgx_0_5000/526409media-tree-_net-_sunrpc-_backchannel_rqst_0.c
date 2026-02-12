void xprt_free_bc_rqst(struct rpc_rqst *req)
{
struct rpc_xprt *xprt = req->rq_xprt;

dprintk("RPC:       free backchannel req=%p\n", req);

req->rq_connect_cookie = xprt->connect_cookie - 1;
smp_mb__before_atomic();
clear_bit(RPC_BC_PA_IN_USE, &req->rq_bc_pa_state);
smp_mb__after_atomic();


spin_lock_bh(&xprt->bc_pa_lock);
if (xprt_need_to_requeue(xprt)) {
list_add_tail(&req->rq_bc_pa_list, &xprt->bc_pa_list);
xprt->bc_alloc_count++;
req = NULL;
}
spin_unlock_bh(&xprt->bc_pa_lock);
if (req != NULL) {

dprintk("RPC:       Last session removed req=%p\n", req);
xprt_free_allocation(req);
return;
}
}