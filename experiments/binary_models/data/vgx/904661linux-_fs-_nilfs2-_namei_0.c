static struct VAR1 *FUN1(struct VAR1 *VAR2)
{
unsigned long VAR3;
struct VAR4 *VAR4;
struct VAR5 *VAR6;

VAR3 = FUN2(FUN3(VAR2), &VAR7);
if (!VAR3)
return FUN4(-VAR8);

VAR6 = FUN5(FUN3(VAR2))->VAR9;

VAR4 = FUN6(VAR2->VAR10, VAR6, VAR3);
if (FUN7(VAR4))
return FUN8(VAR4);

return FUN9(VAR4);
}