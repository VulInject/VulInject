static int FUN1(struct VAR1 *VAR2)
{
if (VAR2->VAR3) {
FUN2(VAR2);
FUN3(VAR2->VAR4);
FUN4(VAR5, &VAR2->VAR6);
FUN5(VAR2->VAR7);
FUN6(VAR2->VAR8);
VAR2->VAR3 = false;
}

return 0;
}