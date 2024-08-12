int
FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(VAR2->VAR4->VAR5, VAR6,
VAR7, "", VAR2);
if (VAR3 == 0)
VAR2->VAR8->VAR5 = VAR2->VAR4->VAR5;

return (-VAR3);
}