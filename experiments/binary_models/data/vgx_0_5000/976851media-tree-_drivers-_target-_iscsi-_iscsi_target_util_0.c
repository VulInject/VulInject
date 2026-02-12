void __iscsit_free_cmd(struct iscsi_cmd *cmd, bool scsi_cmd,
bool check_queues)
{
struct iscsi_conn *conn = cmd->conn;

if (scsi_cmd) {
if (cmd->data_direction == DMA_TO_DEVICE) {
iscsit_stop_dataout_timer(cmd);
iscsit_free_r2ts_from_list(cmd);
}
if (cmd->data_direction == DMA_FROM_DEVICE)
iscsit_free_all_datain_reqs(cmd);
}

if (conn && check_queues) {
iscsit_remove_cmd_from_immediate_queue(cmd, conn);
iscsit_remove_cmd_from_response_queue(cmd, conn);
}

if (conn && conn->conn_transport->iscsit_release_cmd)
conn->conn_transport->iscsit_release_cmd(conn, cmd);
}