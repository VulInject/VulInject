static void FUN1(void)
{
struct VAR1 *VAR2;
int VAR3;

VAR2 = FUN2();
if (!FUN3(VAR2, ""))
return;

FUN4(VAR2->VAR4.VAR5, true);
VAR3 = FUN5(VAR2);
FUN6(VAR3, "");

FUN7(VAR2);
}