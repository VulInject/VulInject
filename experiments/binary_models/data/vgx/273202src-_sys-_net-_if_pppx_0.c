int
FUN1(dev_t VAR1, struct VAR2 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR1);
struct VAR6 *VAR7, *VAR8;
int VAR9 = 0;
size_t VAR10;

if (!VAR5)
return (VAR11);

while ((VAR8 = FUN3(&VAR5->VAR12)) == NULL) {
if (FUN4(VAR3, VAR13))
return (VAR14);

FUN5();
VAR5->VAR15 = 1;
VAR9 = FUN6(VAR5, &VAR16,
(VAR17 + 1)|VAR18, "", VAR19);
FUN7();
if (VAR9 != 0) {
return (VAR9);
}
}

while (VAR8 != NULL && VAR2->VAR20 > 0 && VAR9 == 0) {
VAR10 = FUN8(VAR2->VAR20, VAR8->VAR21);
if (VAR10 != 0)
VAR9 = FUN9(FUN10(VAR8, VAR22), VAR10, VAR2);
VAR7 = FUN11(VAR8);
VAR8 = VAR7;
}

FUN12(VAR8);

return (VAR9);
}