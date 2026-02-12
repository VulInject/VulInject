static int uec_open(struct uec_priv *uec, comm_dir_e mode)
{
struct ucc_fast_priv	*uccf;

uccf = uec->uccf;


if (uec->uec_info->uf_info.ucc_num >= UCC_MAX_NUM) {
printf("%s: ucc_num out of range.\n", __func__);
return -EINVAL;
}


uec_mac_enable(uec, mode);


ucc_fast_enable(uccf, mode);


if ((mode & COMM_DIR_TX) && uec->grace_stopped_tx)
uec_restart_tx(uec);

if ((mode & COMM_DIR_RX) && uec->grace_stopped_rx)
uec_restart_rx(uec);

return 0;
}