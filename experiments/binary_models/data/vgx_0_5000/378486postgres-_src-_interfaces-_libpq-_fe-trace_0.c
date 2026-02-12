static void
pqTraceOutputF(FILE *f, const char *message, int *cursor, bool regress)
{
int			nfields;
int			nbytes;

fprintf(f, "FunctionCall\t");
pqTraceOutputInt32(f, message, cursor, regress);
nfields = pqTraceOutputInt16(f, message, cursor);

for (int i = 0; i < nfields; i++)
pqTraceOutputInt16(f, message, cursor);

nfields = pqTraceOutputInt16(f, message, cursor);

for (int i = 0; i < nfields; i++)
{
nbytes = pqTraceOutputInt32(f, message, cursor, false);
if (nbytes == -1)
continue;
pqTraceOutputNchar(f, nbytes, message, cursor);
}

pqTraceOutputInt16(f, message, cursor);
}