static void
sja1105pqrs_common_l2_lookup_cmd_packing(void *buf, struct sja1105_dyn_cmd *cmd,
enum packing_op op, int entry_size)
{
const int size = SJA1105_SIZE_DYN_CMD;
u8 *p = buf + entry_size;
u64 hostcmd;

sja1105_packing(p, &cmd->valid,    31, 31, size, op);
sja1105_packing(p, &cmd->rdwrset,  30, 30, size, op);
sja1105_packing(p, &cmd->errors,   29, 29, size, op);
sja1105_packing(p, &cmd->valident, 27, 27, size, op);


if (cmd->rdwrset == SPI_READ) {
if (cmd->search)
hostcmd = SJA1105_HOSTCMD_SEARCH;
else
hostcmd = SJA1105_HOSTCMD_READ;
} else {

if (cmd->valident)
hostcmd = SJA1105_HOSTCMD_WRITE;
else
hostcmd = SJA1105_HOSTCMD_INVALIDATE;
}
sja1105_packing(p, &hostcmd, 25, 23, size, op);
}