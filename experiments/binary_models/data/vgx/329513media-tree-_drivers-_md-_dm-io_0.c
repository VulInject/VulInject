struct VAR1 *FUN1(void)
{
struct VAR1 *VAR2;
unsigned VAR3 = FUN2();

VAR2 = FUN3(sizeof(*VAR2), VAR4);
if (!VAR2)
return FUN4(-VAR5);

VAR2->VAR6 = FUN5(VAR3, VAR7);
if (!VAR2->VAR6)
goto VAR8;

VAR2->VAR9 = FUN6(VAR3, 0);
if (!VAR2->VAR9)
goto VAR8;

return VAR2;

VAR8:
FUN7(VAR2->VAR6);
FUN8(VAR2);
return FUN4(-VAR5);
}