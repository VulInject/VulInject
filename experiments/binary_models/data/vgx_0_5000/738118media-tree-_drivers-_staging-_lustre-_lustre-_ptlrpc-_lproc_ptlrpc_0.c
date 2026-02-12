void ptlrpc_lprocfs_rpc_sent(struct ptlrpc_request *req, long amount)
{
struct lprocfs_stats *svc_stats;
__u32 op = lustre_msg_get_opc(req->rq_reqmsg);
int opc = opcode_offset(op);

svc_stats = req->rq_import->imp_obd->obd_svc_stats;
if (!svc_stats || opc <= 0)
return;
LASSERT(opc < LUSTRE_MAX_OPCODES);
if (!(op == LDLM_ENQUEUE || op == MDS_REINT))
lprocfs_counter_add(svc_stats, opc + EXTRA_MAX_OPCODES, amount);
}