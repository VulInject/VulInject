static void FUN1(struct VAR1 *VAR1, loff_t VAR2)
{

if (!(FUN2(VAR1->VAR3) || FUN3(VAR1->VAR3) ||
FUN4(VAR1->VAR3)))
return;
if (FUN5(VAR1))
return;
if (FUN6(VAR1) || FUN7(VAR1))
return;

FUN8(FUN9(VAR1));
FUN10(VAR1, VAR2);
FUN11(FUN9(VAR1));
}