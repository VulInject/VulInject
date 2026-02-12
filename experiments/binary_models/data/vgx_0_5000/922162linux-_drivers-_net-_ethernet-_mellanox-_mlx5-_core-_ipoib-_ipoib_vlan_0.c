int mlx5i_pkey_del_qpn(struct net_device *netdev, u32 qpn)
{
struct mlx5e_priv *epriv = mlx5i_epriv(netdev);
struct mlx5i_priv *ipriv = epriv->ppriv;
struct mlx5i_pkey_qpn_ht *ht = ipriv->qpn_htbl;
struct qpn_to_netdev *node;

node = mlx5i_find_qpn_to_netdev_node(ht->buckets, qpn);
if (!node) {
mlx5_core_warn(epriv->mdev, "QPN to netdev delete from HT failed\n");
return -EINVAL;
}

spin_lock_bh(&ht->ht_lock);
hlist_del_init(&node->hlist);
spin_unlock_bh(&ht->ht_lock);
kfree(node);

return 0;
}