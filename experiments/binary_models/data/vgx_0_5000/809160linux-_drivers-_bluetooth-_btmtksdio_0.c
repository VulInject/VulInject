static int mt79xx_setup(struct hci_dev *hdev, const char *fwname)
{
struct btmtksdio_dev *bdev = hci_get_drvdata(hdev);
struct btmtk_hci_wmt_params wmt_params;
u8 param = 0x1;
int err;

err = btmtk_setup_firmware_79xx(hdev, fwname, mtk_hci_wmt_sync);
if (err < 0) {
bt_dev_err(hdev, "Failed to setup 79xx firmware (%d)", err);
return err;
}

err = btmtksdio_fw_pmctrl(bdev);
if (err < 0)
return err;

err = btmtksdio_drv_pmctrl(bdev);
if (err < 0)
return err;


wmt_params.op = BTMTK_WMT_FUNC_CTRL;
wmt_params.flag = 0;
wmt_params.dlen = sizeof(param);
wmt_params.data = &param;
wmt_params.status = NULL;

err = mtk_hci_wmt_sync(hdev, &wmt_params);
if (err < 0) {
bt_dev_err(hdev, "Failed to send wmt func ctrl (%d)", err);
return err;
}

hci_set_msft_opcode(hdev, 0xFD30);
hci_set_aosp_capable(hdev);
set_bit(BTMTKSDIO_PATCH_ENABLED, &bdev->tx_state);

return err;
}