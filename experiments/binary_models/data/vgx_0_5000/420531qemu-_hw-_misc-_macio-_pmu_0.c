static void pmu_dispatch_cmd(PMUState *s)
{
unsigned int i;


s->cmd_rsp_sz = 0;

for (i = 0; i < ARRAY_SIZE(PMUCmdHandlers); i++) {
const PMUCmdHandler *desc = &PMUCmdHandlers[i];

if (desc->command != s->cmd) {
continue;
}

trace_pmu_dispatch_cmd(desc->name);
desc->handler(s, s->cmd_buf, s->cmd_buf_pos,
s->cmd_rsp, &s->cmd_rsp_sz);

if (s->rsplen != -1 && s->rsplen != s->cmd_rsp_sz) {
trace_pmu_debug_protocol_string("QEMU internal cmd resp mismatch!");
} else {
trace_pmu_debug_protocol_resp_size(s->cmd_rsp_sz);
}

return;
}

trace_pmu_dispatch_unknown_cmd(s->cmd);


if (s->rsplen == -1) {
s->cmd_rsp_sz = 0;
} else {
s->cmd_rsp_sz = s->rsplen;
memset(s->cmd_rsp, 0, s->rsplen);
}
}