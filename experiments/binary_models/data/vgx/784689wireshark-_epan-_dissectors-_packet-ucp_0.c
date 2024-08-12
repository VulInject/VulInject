static void
FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int *VAR6)
{
int          VAR7 = *VAR6;

while (FUN2(VAR4, VAR7++) != '')
;
if ((VAR7 - *VAR6) > 1)
FUN3(VAR2, VAR5, VAR4, *VAR6,
VAR7 - *VAR6 - 1, VAR8);
*VAR6 = VAR7;
}