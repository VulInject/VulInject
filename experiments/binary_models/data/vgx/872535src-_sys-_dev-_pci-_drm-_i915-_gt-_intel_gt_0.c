void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;

VAR4 = FUN2(&VAR2->VAR4);
if (VAR4) 
FUN3(VAR4);

FUN4(&VAR2->VAR5);
FUN5(VAR2);
FUN6(VAR2);
FUN7(VAR2);
FUN8(VAR2);
}