static int hns_get_regs_len(struct net_device *net_dev)
{
u32 reg_num;
struct hns_nic_priv *priv = netdev_priv(net_dev);
struct hnae_ae_ops *ops;

ops = priv->ae_handle->dev->ops;
if (!ops->get_regs_len) {
netdev_err(net_dev, "ops->get_regs_len is null!\n");
return -EOPNOTSUPP;
}

reg_num = ops->get_regs_len(priv->ae_handle);
if (reg_num > 0)
return reg_num * sizeof(u32);
else
return reg_num;	
}