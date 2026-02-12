int mlx5_core_destroy_srq(struct mlx5_core_dev *dev, struct mlx5_core_srq *srq)
{
struct mlx5_srq_table *table = &dev->priv.srq_table;
struct mlx5_core_srq *tmp;
int err;

spin_lock_irq(&table->lock);
tmp = radix_tree_delete(&table->tree, srq->srqn);
spin_unlock_irq(&table->lock);
if (!tmp) {
mlx5_core_warn(dev, "srq 0x%x not found in tree\n", srq->srqn);
return -EINVAL;
}
if (tmp != srq) {
mlx5_core_warn(dev, "corruption on srqn 0x%x\n", srq->srqn);
return -EINVAL;
}

err = destroy_srq_split(dev, srq);
if (err)
return err;

if (atomic_dec_and_test(&srq->refcount))
complete(&srq->free);
wait_for_completion(&srq->free);

return 0;
}