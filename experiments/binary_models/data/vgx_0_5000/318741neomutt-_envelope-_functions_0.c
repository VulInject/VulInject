int env_function_dispatcher(struct MuttWindow *win, int op)
{
if (!win || !win->wdata)
return FR_UNKNOWN;

int rc = FR_UNKNOWN;
for (size_t i = 0; EnvelopeFunctions[i].op != OP_NULL; i++)
{
const struct EnvelopeFunction *fn = &EnvelopeFunctions[i];
if (fn->op == op)
{
struct EnvelopeWindowData *wdata = win->wdata;
rc = fn->function(wdata, op);
break;
}
}

if (rc == FR_UNKNOWN) 
return rc;

const char *result = dispacher_get_retval_name(rc);
mutt_debug(LL_DEBUG1, "Handled %s (%d) -> %s\n", opcodes_get_name(op), op, NONULL(result));

return rc;
}