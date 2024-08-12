void
FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR2;
if (VAR1->VAR3 > 0)
FUN2("");

while ((VAR2 = FUN3(&VAR1->VAR4))) {
FUN4(&VAR1->VAR4, VAR2, VAR5);
FUN5(VAR2);
}
free(VAR1, VAR6, sizeof *VAR1);
VAR7--;
}