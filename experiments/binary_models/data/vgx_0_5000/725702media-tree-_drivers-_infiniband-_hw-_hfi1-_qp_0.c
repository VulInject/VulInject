int get_pmtu_from_attr(struct rvt_dev_info *rdi, struct rvt_qp *qp,
struct ib_qp_attr *attr)
{
int mtu, pidx = qp->port_num - 1;
struct hfi1_ibdev *verbs_dev = container_of(rdi,
struct hfi1_ibdev,
rdi);
struct hfi1_devdata *dd = container_of(verbs_dev,
struct hfi1_devdata,
verbs_dev);
mtu = verbs_mtu_enum_to_int(qp->ibqp.device, attr->path_mtu);
if (mtu == -1)
return -1; 

if (mtu > dd->pport[pidx].ibmtu)
return mtu_to_enum(dd->pport[pidx].ibmtu, IB_MTU_2048);
else
return attr->path_mtu;
}