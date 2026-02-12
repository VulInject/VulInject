int
qla8044_write_serdes_word(scsi_qla_host_t *vha, uint32_t addr, uint32_t data)
{
int rval;
mbx_cmd_t mc;
mbx_cmd_t *mcp = &mc;

if (!IS_QLA8044(vha->hw))
return QLA_FUNCTION_FAILED;

ql_dbg(ql_dbg_mbx + ql_dbg_verbose, vha, 0x11a0,
"Entered %s.\n", __func__);

mcp->mb[0] = MBC_SET_GET_ETH_SERDES_REG;
mcp->mb[1] = HCS_WRITE_SERDES;
mcp->mb[3] = LSW(addr);
mcp->mb[4] = MSW(addr);
mcp->mb[5] = LSW(data);
mcp->mb[6] = MSW(data);
mcp->out_mb = MBX_6|MBX_5|MBX_4|MBX_3|MBX_1|MBX_0;
mcp->in_mb = MBX_0;
mcp->tov = MBX_TOV_SECONDS;
mcp->flags = 0;
rval = qla2x00_mailbox_command(vha, mcp);

if (rval != QLA_SUCCESS) {
ql_dbg(ql_dbg_mbx, vha, 0x11a1,
"Failed=%x mb[0]=%x.\n", rval, mcp->mb[0]);
} else {
ql_dbg(ql_dbg_mbx + ql_dbg_verbose, vha, 0x1188,
"Done %s.\n", __func__);
}

return rval;
}