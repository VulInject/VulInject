static int qlcnic_sriov_post_bc_msg(struct qlcnic_adapter *adapter, u32 *hdr,
u32 *pay, u8 pci_func, u8 size)
{
struct qlcnic_hardware_context *ahw = adapter->ahw;
struct qlcnic_mailbox *mbx = ahw->mailbox;
struct qlcnic_cmd_args cmd;
unsigned long timeout;
int err;

memset(&cmd, 0, sizeof(struct qlcnic_cmd_args));
cmd.hdr = hdr;
cmd.pay = pay;
cmd.pay_size = size;
cmd.func_num = pci_func;
cmd.op_type = QLC_83XX_MBX_POST_BC_OP;
cmd.cmd_op = ((struct qlcnic_bc_hdr *)hdr)->cmd_op;

err = mbx->ops->enqueue_cmd(adapter, &cmd, &timeout);
if (err) {
dev_err(&adapter->pdev->dev,
"%s: Mailbox not available, cmd_op=0x%x, cmd_type=0x%x, pci_func=0x%x, op_mode=0x%x\n",
__func__, cmd.cmd_op, cmd.type, ahw->pci_func,
ahw->op_mode);
return err;
}

if (!wait_for_completion_timeout(&cmd.completion, timeout)) {
dev_err(&adapter->pdev->dev,
"%s: Mailbox command timed out, cmd_op=0x%x, cmd_type=0x%x, pci_func=0x%x, op_mode=0x%x\n",
__func__, cmd.cmd_op, cmd.type, ahw->pci_func,
ahw->op_mode);
flush_workqueue(mbx->work_q);
}

return cmd.rsp_opcode;
}