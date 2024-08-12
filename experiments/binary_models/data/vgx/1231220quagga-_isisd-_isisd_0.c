void FUN1(struct VAR1 *VAR2, bool VAR3)
{
char VAR4 = VAR3 ? VAR5 : 0;

if (VAR4 != VAR2->VAR3)
{
VAR2->VAR3 = VAR4;
FUN2(VAR2, VAR6 | VAR7, 1);
}
}