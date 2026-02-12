static int mlx5_ib_add_outstanding_wr(struct mlx5_ib_gsi_qp *gsi,
struct ib_ud_wr *wr, struct ib_wc *wc)
{
struct mlx5_ib_dev *dev = to_mdev(gsi->rx_qp->device);
struct mlx5_ib_gsi_wr *gsi_wr;

if (gsi->outstanding_pi == gsi->outstanding_ci + gsi->cap.max_send_wr) {
mlx5_ib_warn(dev, "no available GSI work request.\n");
return -ENOMEM;
}

gsi_wr = &gsi->outstanding_wrs[gsi->outstanding_pi %
gsi->cap.max_send_wr];
gsi->outstanding_pi++;

if (!wc) {
memset(&gsi_wr->wc, 0, sizeof(gsi_wr->wc));
gsi_wr->wc.pkey_index = wr->pkey_index;
gsi_wr->wc.wr_id = wr->wr.wr_id;
} else {
gsi_wr->wc = *wc;
gsi_wr->completed = true;
}

gsi_wr->cqe.done = &handle_single_completion;
wr->wr.wr_cqe = &gsi_wr->cqe;

return 0;
}