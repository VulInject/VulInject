static void
__cmd_copy(struct bfa_msgq_cmdq *cmdq, struct bfa_msgq_cmd_entry *cmd)
{
size_t len = cmd->msg_size;
int num_entries = 0;
size_t to_copy;
u8 *src, *dst;

src = (u8 *)cmd->msg_hdr;
dst = (u8 *)cmdq->addr.kva;
dst += (cmdq->producer_index * BFI_MSGQ_CMD_ENTRY_SIZE);

while (len) {
to_copy = (len < BFI_MSGQ_CMD_ENTRY_SIZE) ?
len : BFI_MSGQ_CMD_ENTRY_SIZE;
memcpy(dst, src, to_copy);
len -= to_copy;
src += BFI_MSGQ_CMD_ENTRY_SIZE;
BFA_MSGQ_INDX_ADD(cmdq->producer_index, 1, cmdq->depth);
dst = (u8 *)cmdq->addr.kva;
dst += (cmdq->producer_index * BFI_MSGQ_CMD_ENTRY_SIZE);
num_entries++;
}

}