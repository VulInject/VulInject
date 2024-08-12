}
FUN1(VAR1);

void *FUN2(unsigned long VAR2)
{
unsigned long VAR3;
int VAR4, VAR5;
struct VAR6 *VAR6 = FUN3(VAR2);

FUN4();
FUN5();
if (!FUN6(VAR6))
return FUN7(VAR6);

VAR5 = FUN8();
VAR4 = VAR7 + VAR5 + VAR8 * FUN9();
VAR3 = FUN10(VAR4);
FUN11(!FUN12(FUN13(VAR3)));
FUN14(VAR4, FUN15(VAR2, VAR9));

return (void *)VAR3;
}