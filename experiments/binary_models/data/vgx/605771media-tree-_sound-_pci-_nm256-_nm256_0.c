static void FUN1(struct VAR1 *VAR2)
{
FUN2(&VAR2->VAR3);
if (VAR2->VAR4 > 0)
VAR2->VAR4--;
if (VAR2->VAR4 == 0 && VAR2->VAR5 >= 0) {
FUN3(VAR2->VAR5, VAR2);
VAR2->VAR5 = -1;
}
FUN4(&VAR2->VAR3);
}