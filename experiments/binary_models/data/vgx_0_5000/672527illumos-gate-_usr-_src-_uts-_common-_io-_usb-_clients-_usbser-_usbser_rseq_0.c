static int
rseq_undo_common(rseq_t *rseq, int num, uintptr_t arg, int flags, int fail_err,
uintptr_t fail_num)
{
int		i;
rseq_step_t	*s;
int		rval = RSEQ_OK;

for (i = num - 1; i >= 0; i--) {
s = &rseq[i].r_undo;

if (s->s_func == NULL) {
continue;
}
s->s_rval = (i != fail_num) ? s->s_func(arg) : fail_err;
rval = (s->s_cb) ? (s->s_cb(rseq, i, arg)) : RSEQ_OK;

if (rval == RSEQ_ABORT) {
break;
}
ASSERT(rval == RSEQ_OK);
}
return (rval);
}