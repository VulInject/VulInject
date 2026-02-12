static int bnxt_hwrm_func_qcfg_req(struct bnxt *bp)
{
u16 cmd_len = (u16)sizeof(struct hwrm_func_qcfg_input);
struct hwrm_func_qcfg_input *req;
struct hwrm_func_qcfg_output *resp;
int rc;

req = (struct hwrm_func_qcfg_input *)bp->hwrm_addr_req;
resp = (struct hwrm_func_qcfg_output *)bp->hwrm_addr_resp;
hwrm_init(bp, (void *)req, (u16)HWRM_FUNC_QCFG, cmd_len);
req->fid = (u16)HWRM_NA_SIGNATURE;
rc = wait_resp(bp, bp->hwrm_cmd_timeout, cmd_len, __func__);
if (rc)
return STATUS_FAILURE;

if (resp->flags & FUNC_QCFG_RESP_FLAGS_MULTI_HOST)
FLAG_SET(bp->flags, BNXT_FLAG_MULTI_HOST);

if (resp->port_partition_type &
FUNC_QCFG_RESP_PORT_PARTITION_TYPE_NPAR1_0)
FLAG_SET(bp->flags, BNXT_FLAG_NPAR_MODE);

bp->ordinal_value = (u8)resp->pci_id & 0x0F;
bp->stat_ctx_id   = resp->stat_ctx_id;
memcpy(&bp->mac_addr[0], &resp->mac_address[0], ETH_ALEN);
print_func_qcfg(bp);
dbg_flags(__func__, bp->flags);

return STATUS_SUCCESS;
}