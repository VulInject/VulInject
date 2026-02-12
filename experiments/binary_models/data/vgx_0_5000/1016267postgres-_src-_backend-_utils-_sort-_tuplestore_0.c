static void
dumptuples(Tuplestorestate *state)
{
int			i;

for (i = state->memtupdeleted;; i++)
{
TSReadPointer *readptr = state->readptrs;
int			j;

for (j = 0; j < state->readptrcount; readptr++, j++)
{
if (i == readptr->current && !readptr->eof_reached)
BufFileTell(state->myfile,
&readptr->file, &readptr->offset);
}
if (i >= state->memtupcount)
break;
WRITETUP(state, state->memtuples[i]);
}
state->memtupdeleted = 0;
state->memtupcount = 0;
}