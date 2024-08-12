static void FUN1(void)
{
struct VAR1 *VAR2;

FUN2(&VAR3);
VAR2 = FUN3();
VAR2->VAR4--;
if (VAR2->VAR4 == 0)
FUN4(&VAR2->VAR5);
else
VAR2 = NULL;
FUN5(&VAR3);
FUN6(VAR2);
}