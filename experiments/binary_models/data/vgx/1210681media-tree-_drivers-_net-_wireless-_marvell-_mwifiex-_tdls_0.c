static void FUN1(struct VAR1 *VAR2)
{
VAR3 *VAR4 = (void *)FUN2(VAR2, 3);

*VAR4++ = VAR5;
*VAR4++ = 1;
*VAR4++ = VAR6;
}