static int set_user_sq_size(struct hns_roce_dev *hr_dev,
struct ib_qp_cap *cap, struct hns_roce_qp *hr_qp,
struct hns_roce_ib_create_qp *ucmd)
{
struct ib_device *ibdev = &hr_dev->ib_dev;
u32 cnt = 0;
int ret;

if (check_shl_overflow(1, ucmd->log_sq_bb_count, &cnt) ||
cnt > hr_dev->caps.max_wqes)
return -EINVAL;

ret = check_sq_size_with_integrity(hr_dev, cap, ucmd);
if (ret) {
ibdev_err(ibdev, "failed to check user SQ size, ret = %d.\n",
ret);
return ret;
}

set_ext_sge_param(hr_dev, cnt, hr_qp, cap);

hr_qp->sq.wqe_shift = ucmd->log_sq_stride;
hr_qp->sq.wqe_cnt = cnt;
cap->max_send_sge = hr_qp->sq.max_gs;

return 0;
}