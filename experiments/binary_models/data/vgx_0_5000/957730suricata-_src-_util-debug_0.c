SCLogOPBuffer *SCLogAllocLogOPBuffer(void)
{
SCLogOPBuffer *buffer = NULL;

if ( (buffer = SCMalloc(sc_log_config->op_ifaces_cnt *
sizeof(SCLogOPBuffer))) == NULL) {
FatalError("Fatal error encountered in SCLogAllocLogOPBuffer. Exiting...");
}

SCLogOPIfaceCtx *op_iface_ctx = sc_log_config->op_ifaces;
for (int i = 0; i < sc_log_config->op_ifaces_cnt; i++, op_iface_ctx = op_iface_ctx->next) {
buffer[i].log_format = op_iface_ctx->log_format;
buffer[i].temp = buffer[i].msg;
}

return buffer;
}