int mlx5dr_send_ring_force_drain(struct mlx5dr_domain *dmn)
{
struct mlx5dr_send_ring *send_ring = dmn->send_ring;
struct postsend_info send_info = {};
u8 data[DR_STE_SIZE];
int num_of_sends_req;
int ret;
int i;


num_of_sends_req = send_ring->signal_th * TH_NUMS_TO_DRAIN / 2;


send_info.write.addr = (uintptr_t)data;
send_info.write.length = DR_STE_SIZE;
send_info.write.lkey = 0;

send_info.remote_addr = (uintptr_t)send_ring->sync_mr->addr;
send_info.rkey = send_ring->sync_mr->mkey;

for (i = 0; i < num_of_sends_req; i++) {
ret = dr_postsend_icm_data(dmn, &send_info);
if (ret)
return ret;
}

spin_lock(&send_ring->lock);
ret = dr_handle_pending_wc(dmn, send_ring);
spin_unlock(&send_ring->lock);

return ret;
}