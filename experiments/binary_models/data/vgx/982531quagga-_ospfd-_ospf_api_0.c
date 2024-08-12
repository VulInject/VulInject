FUN1 (struct VAR1 *VAR2)
{
struct VAR3 *VAR3;

VAR3 = VAR2->VAR4;
if (VAR3)
{
VAR2->VAR4 = VAR3->VAR5;

if (VAR2->VAR4 == NULL)
VAR2->VAR6 = NULL;

VAR2->VAR7--;
}
return VAR3;
}