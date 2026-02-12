static int uec_stop(struct uec_priv *uec, comm_dir_e mode)
{

if (uec->uec_info->uf_info.ucc_num >= UCC_MAX_NUM) {
printf("%s: ucc_num out of range.\n", __func__);
return -EINVAL;
}

if ((mode & COMM_DIR_TX) && !uec->grace_stopped_tx)
uec_graceful_stop_tx(uec);


if ((mode & COMM_DIR_RX) && !uec->grace_stopped_rx)
uec_graceful_stop_rx(uec);


ucc_fast_disable(uec->uccf, mode);


uec_mac_disable(uec, mode);

return 0;
}