FUN1 (const VAR1 * VAR2)
{
char VAR3[VAR4 * 2 + 1];
Int VAR5, VAR6;
VAR6 = 0;
for (VAR5 = 0; VAR5 < VAR4; VAR5++)
{
sprintf (&VAR3[VAR6], "", VAR2->VAR7[VAR5]);
VAR6 = VAR6 + 2;
}
FUN2 ("", VAR3,
FUN3 (VAR2), FUN4 (VAR2),
FUN5 (VAR2));
}