void MimeDecDeInitParser(MimeDecParseState *state)
{
uint32_t cnt = 0;

while (state->stack->top != NULL) {
SCLogDebug("Remaining on stack: [%p]=>[%p]",
state->stack->top, state->stack->top->data);

PopStack(state->stack);
cnt++;
}

if (cnt > 1) {
state->msg->anomaly_flags |= ANOM_MALFORMED_MSG;
SCLogDebug("Warning: Stack is not empty upon completion of "
"processing (%u items remaining)", cnt);
}

SCFree(state->hname);
FreeDataValue(state->hvalue);
FreeMimeDecStack(state->stack);
if (state->md5_ctx)
SCMd5Free(state->md5_ctx);
SCFree(state);
}