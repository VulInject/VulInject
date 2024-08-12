static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5;
struct VAR6 *VAR7 = &VAR4->VAR8;
struct VAR9 *VAR9 = VAR2->VAR10->VAR5;
struct VAR11 *VAR12 = VAR9->VAR13.VAR12;


if (!VAR12)
return;

if (FUN2(VAR7->VAR14)) {
FUN3(VAR12->VAR15, VAR7->VAR16,
VAR17, VAR18);
VAR7->VAR14 = false;
}


if (!VAR2->VAR19)
return;

if (VAR4->VAR20 == VAR21) {
VAR4->VAR20 = VAR22;
FUN4(VAR4);
}
}