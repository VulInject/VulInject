static void
FUN1(TupleDesc VAR1)
{
if (VAR2 == NULL)
{
MemoryContext VAR3;

VAR3 = FUN2(VAR4);

VAR2 = (VAR5 *) FUN3(16 * sizeof(VAR5));
VAR6 = 16;
VAR7 = 0;
FUN2(VAR3);
}
else if (VAR7 >= VAR6)
{
int32		VAR8 = VAR6 * 2;

FUN4(VAR6 > 0);

VAR2 = (VAR5 *) FUN5(VAR2,
VAR8 * sizeof(VAR5));
VAR6 = VAR8;
}

VAR2[VAR7++] = VAR1;
}