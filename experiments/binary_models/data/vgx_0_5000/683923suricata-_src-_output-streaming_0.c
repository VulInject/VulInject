int OutputRegisterStreamingLogger(LoggerId id, const char *name,
StreamingLogger LogFunc, OutputCtx *output_ctx,
enum OutputStreamingType type, ThreadInitFunc ThreadInit,
ThreadDeinitFunc ThreadDeinit,
ThreadExitPrintStatsFunc ThreadExitPrintStats)
{
OutputStreamingLogger *op = SCMalloc(sizeof(*op));
if (op == NULL)
return -1;
memset(op, 0x00, sizeof(*op));

op->LogFunc = LogFunc;
op->output_ctx = output_ctx;
op->name = name;
op->logger_id = id;
op->type = type;
op->ThreadInit = ThreadInit;
op->ThreadDeinit = ThreadDeinit;
op->ThreadExitPrintStats = ThreadExitPrintStats;

if (list == NULL)
list = op;
else {
OutputStreamingLogger *t = list;
while (t->next)
t = t->next;
t->next = op;
}

if (op->type == STREAMING_TCP_DATA) {
stream_config.streaming_log_api = true;
}

SCLogDebug("OutputRegisterStreamingLogger happy");
return 0;
}