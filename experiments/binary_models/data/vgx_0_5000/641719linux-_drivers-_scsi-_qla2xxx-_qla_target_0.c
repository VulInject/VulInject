static struct qla_tgt_cmd *qlt_get_tag(scsi_qla_host_t *vha,
struct fc_port *sess,
struct atio_from_isp *atio)
{
struct qla_tgt_cmd *cmd;

cmd = vha->hw->tgt.tgt_ops->get_cmd(sess);
if (!cmd)
return NULL;

cmd->cmd_type = TYPE_TGT_CMD;
memcpy(&cmd->atio, atio, sizeof(*atio));
INIT_LIST_HEAD(&cmd->sess_cmd_list);
cmd->state = QLA_TGT_STATE_NEW;
cmd->tgt = vha->vha_tgt.qla_tgt;
qlt_incr_num_pend_cmds(vha);
cmd->vha = vha;
cmd->sess = sess;
cmd->loop_id = sess->loop_id;
cmd->conf_compl_supported = sess->conf_compl_supported;

cmd->trc_flags = 0;
cmd->jiffies_at_alloc = get_jiffies_64();

cmd->unpacked_lun = scsilun_to_int(
(struct scsi_lun *)&atio->u.isp24.fcp_cmnd.lun);
qlt_assign_qpair(vha, cmd);
cmd->reset_count = vha->hw->base_qpair->chip_reset;
cmd->vp_idx = vha->vp_idx;
cmd->edif = sess->edif.enable;

return cmd;
}