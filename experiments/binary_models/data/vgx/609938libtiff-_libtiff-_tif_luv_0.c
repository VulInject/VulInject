static void
FUN1(VAR1* VAR2, VAR3* VAR4, tmsize_t VAR5)
{
VAR6* VAR7 = (VAR6*) VAR2->VAR8;
float* VAR9 = (float*) VAR4;

while (VAR5-- > 0)
*VAR9++ = (float)FUN2(*VAR7++);
}