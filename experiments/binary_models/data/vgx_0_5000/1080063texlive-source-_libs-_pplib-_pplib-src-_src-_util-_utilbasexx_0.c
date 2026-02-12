static size_t base64_encoder (iof *F, iof_mode mode)
{
basexx_state *state;
iof_status status;

state = iof_filter_state(basexx_state *, F);
switch (mode)
{
case IOFFLUSH:
state->flush = 1;
FALLTHRU 
case IOFWRITE:
F->end = F->pos;
F->pos = F->buf;
status = base64_encode_state_ln(F, F->next, state);
return iof_encoder_retval(F, "base64", status);
case IOFCLOSE:
if (!state->flush)
base64_encoder(F, IOFFLUSH);
iof_free(F);
return 0;
default:
break;
}
return 0;
}