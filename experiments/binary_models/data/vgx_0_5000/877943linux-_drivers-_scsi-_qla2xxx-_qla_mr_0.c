int
qlafx00_reset_initialize(scsi_qla_host_t *vha)
{
struct qla_hw_data *ha = vha->hw;

if (vha->device_flags & DFLG_DEV_FAILED) {
ql_dbg(ql_dbg_init, vha, 0x0142,
"Device in failed state\n");
return QLA_SUCCESS;
}

ha->flags.mr_reset_hdlr_active = 1;

if (vha->flags.online) {
scsi_block_requests(vha->host);
qlafx00_abort_isp_cleanup(vha, false);
}

ql_log(ql_log_info, vha, 0x0143,
"(%s): succeeded.\n", __func__);
ha->flags.mr_reset_hdlr_active = 0;
return QLA_SUCCESS;
}