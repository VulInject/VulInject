static struct bnxt_re_dev *bnxt_re_dev_add(struct bnxt_aux_priv *aux_priv,
struct bnxt_en_dev *en_dev)
{
struct bnxt_re_dev *rdev;


rdev = ib_alloc_device(bnxt_re_dev, ibdev);
if (!rdev) {
ibdev_err(NULL, "%s: bnxt_re_dev allocation failure!",
ROCE_DRV_MODULE_NAME);
return NULL;
}

rdev->nb.notifier_call = NULL;
rdev->netdev = en_dev->net;
rdev->en_dev = en_dev;
rdev->id = rdev->en_dev->pdev->devfn;
INIT_LIST_HEAD(&rdev->qp_list);
mutex_init(&rdev->qp_lock);
atomic_set(&rdev->qp_count, 0);
atomic_set(&rdev->cq_count, 0);
atomic_set(&rdev->srq_count, 0);
atomic_set(&rdev->mr_count, 0);
atomic_set(&rdev->mw_count, 0);
atomic_set(&rdev->ah_count, 0);
atomic_set(&rdev->pd_count, 0);
rdev->cosq[0] = 0xFFFF;
rdev->cosq[1] = 0xFFFF;

return rdev;
}