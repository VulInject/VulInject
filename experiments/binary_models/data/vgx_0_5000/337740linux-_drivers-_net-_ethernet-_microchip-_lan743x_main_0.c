int lan743x_sgmii_read(struct lan743x_adapter *adapter, u8 mmd, u16 addr)
{
u32 mmd_access;
int ret;
u32 val;

if (mmd > 31) {
netif_err(adapter, probe, adapter->netdev,
"%s mmd should <= 31\n", __func__);
return -EINVAL;
}

mutex_lock(&adapter->sgmii_rw_lock);

mmd_access = mmd << SGMII_ACC_SGMII_MMD_SHIFT_;
mmd_access |= (addr | SGMII_ACC_SGMII_BZY_);
lan743x_csr_write(adapter, SGMII_ACC, mmd_access);
ret = lan743x_sgmii_wait_till_not_busy(adapter);
if (ret < 0)
goto sgmii_unlock;

val = lan743x_csr_read(adapter, SGMII_DATA);
ret = (int)(val & SGMII_DATA_MASK_);

sgmii_unlock:
mutex_unlock(&adapter->sgmii_rw_lock);

return ret;
}