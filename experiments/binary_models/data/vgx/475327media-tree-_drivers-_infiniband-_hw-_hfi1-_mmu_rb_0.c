static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
unsigned long VAR5, unsigned long VAR6)
{
struct VAR7 *VAR8 =
FUN2(VAR2, struct VAR7, VAR2);
struct VAR9 *VAR10 = &VAR8->VAR10;
struct VAR11 *VAR12, *VAR13 = NULL;
unsigned long VAR14;
bool VAR15 = false;

FUN3(&VAR8->VAR16, VAR14);
for (VAR12 = FUN4(VAR10, VAR5, VAR6 - 1);
VAR12; VAR12 = VAR13) {

VAR13 = FUN5(VAR12, VAR5, VAR6 - 1);
FUN6(VAR17, "",
VAR12->VAR18, VAR12->VAR19);
if (VAR8->VAR20->FUN7(VAR8->VAR21, VAR12)) {
FUN8(VAR12, VAR10);

FUN9(&VAR12->VAR22, &VAR8->VAR23);
VAR15 = true;
}
}
FUN10(&VAR8->VAR16, VAR14);

if (VAR15)
FUN11(VAR8->VAR24, &VAR8->VAR25);
}