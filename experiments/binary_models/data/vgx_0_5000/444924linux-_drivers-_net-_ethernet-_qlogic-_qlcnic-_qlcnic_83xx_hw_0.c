int qlcnic_83xx_erase_flash_sector(struct qlcnic_adapter *adapter,
u32 sector_start_addr)
{
u32 reversed_addr, addr1, addr2, cmd;
int ret = -EIO;

if (qlcnic_83xx_lock_flash(adapter) != 0)
return -EIO;

if (adapter->ahw->fdt.mfg_id == adapter->flash_mfg_id) {
ret = qlcnic_83xx_enable_flash_write(adapter);
if (ret) {
qlcnic_83xx_unlock_flash(adapter);
dev_err(&adapter->pdev->dev,
"%s failed at %d\n",
__func__, __LINE__);
return ret;
}
}

ret = qlcnic_83xx_poll_flash_status_reg(adapter);
if (ret) {
qlcnic_83xx_unlock_flash(adapter);
dev_err(&adapter->pdev->dev,
"%s: failed at %d\n", __func__, __LINE__);
return -EIO;
}

addr1 = (sector_start_addr & 0xFF) << 16;
addr2 = (sector_start_addr & 0xFF0000) >> 16;
reversed_addr = addr1 | addr2 | (sector_start_addr & 0xFF00);

qlcnic_83xx_wrt_reg_indirect(adapter, QLC_83XX_FLASH_WRDATA,
reversed_addr);
cmd = QLC_83XX_FLASH_FDT_ERASE_DEF_SIG | adapter->ahw->fdt.erase_cmd;
if (adapter->ahw->fdt.mfg_id == adapter->flash_mfg_id)
qlcnic_83xx_wrt_reg_indirect(adapter, QLC_83XX_FLASH_ADDR, cmd);
else
qlcnic_83xx_wrt_reg_indirect(adapter, QLC_83XX_FLASH_ADDR,
QLC_83XX_FLASH_OEM_ERASE_SIG);
qlcnic_83xx_wrt_reg_indirect(adapter, QLC_83XX_FLASH_CONTROL,
QLC_83XX_FLASH_LAST_ERASE_MS_VAL);

ret = qlcnic_83xx_poll_flash_status_reg(adapter);
if (ret) {
qlcnic_83xx_unlock_flash(adapter);
dev_err(&adapter->pdev->dev,
"%s: failed at %d\n", __func__, __LINE__);
return -EIO;
}

if (adapter->ahw->fdt.mfg_id == adapter->flash_mfg_id) {
ret = qlcnic_83xx_disable_flash_write(adapter);
if (ret) {
qlcnic_83xx_unlock_flash(adapter);
dev_err(&adapter->pdev->dev,
"%s: failed at %d\n", __func__, __LINE__);
return ret;
}
}

qlcnic_83xx_unlock_flash(adapter);

return 0;
}