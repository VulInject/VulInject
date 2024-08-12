FUN1 (struct VAR1 *VAR2)
{
struct VAR1 *VAR3 = VAR2->VAR3;

memset (VAR2, 0, sizeof (struct VAR1));
VAR2->VAR3 = VAR4;
VAR4 = VAR2;

return VAR3;
}