static void lm_niv_stats_get(lm_device_t *pdev)
{
u32_t            mcp_resp        = 0;
u32_t            output_offset   = 0;
u32_t            *field_ptr      = NULL;
int              bytes_written   = 0;
const u32_t      func_mailbox_id = FUNC_MAILBOX_ID(pdev);
const u32_t      offset          = OFFSETOF(shmem2_region_t, afex_scratchpad_addr_to_write[func_mailbox_id]);
struct afex_stats afex_stats_var = {0};


ASSERT_STATIC( sizeof(afex_stats_var) >= 100 );

lm_niv_chip_stats_to_niv_stats(pdev, &afex_stats_var);



LM_SHMEM2_READ(pdev, offset, &output_offset);



field_ptr = (u32_t*)&afex_stats_var;
for (bytes_written = 0; bytes_written  < sizeof(afex_stats_var); bytes_written += sizeof(u32_t))
{
REG_WR(pdev, output_offset + bytes_written, *field_ptr);
++field_ptr;
}


lm_mcp_cmd_send_recieve(pdev, lm_mcp_mb_header, DRV_MSG_CODE_AFEX_STATSGET_ACK, 0, MCP_CMD_DEFAULT_TIMEOUT, &mcp_resp);
DbgBreakIf(mcp_resp != FW_MSG_CODE_AFEX_STATSGET_ACK);
}