FUN1 (struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5;

VAR5 = (struct VAR4 *) FUN2 (VAR2);

if (VAR5 == NULL)
FUN3 ("");


if (VAR3 && VAR5->VAR6 == 0)
{
FUN4 (0);
VAR5->VAR6 = 1;
}

return VAR5;
}