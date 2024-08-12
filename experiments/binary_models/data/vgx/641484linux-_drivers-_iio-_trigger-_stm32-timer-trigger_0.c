static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5, char *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR3);
struct VAR9 *VAR10 = FUN3(VAR8);
u32 VAR11, VAR12, VAR13;
unsigned long long VAR14 = 0;

FUN4(VAR10->VAR15, VAR16, &VAR13);
FUN4(VAR10->VAR15, VAR17, &VAR11);
FUN4(VAR10->VAR15, VAR18, &VAR12);

if (VAR13 & VAR19) {
VAR14 = (unsigned long long)FUN5(VAR10->VAR20);
FUN6(VAR14, VAR11 + 1);
FUN6(VAR14, VAR12 + 1);
}

return sprintf(VAR6, "", (unsigned int)VAR14);
}