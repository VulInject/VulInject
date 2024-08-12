int FUN1(const char *VAR1, struct VAR2 *VAR2, pim_addr VAR3,
pim_addr VAR4, const char *VAR5)
{
pim_sgaddr VAR6 = {};
struct VAR1 *VAR7;
struct VAR8 *VAR9;
VAR10 *VAR11 = NULL;

VAR7 = FUN2(VAR1 ? VAR1 : VAR12);

if (!VAR7) {
FUN3(VAR2, "", VAR1);
return VAR13;
}
VAR9 = VAR7->VAR14;

if (!VAR9) {
FUN3(VAR2, "");
return VAR13;
}

if (!FUN4(VAR3)) {
if (!FUN4(VAR4)) {
VAR6.VAR15 = VAR3;
VAR6.VAR16 = VAR4;
} else
VAR6.VAR16 = VAR3;
}

if (VAR5)
VAR11 = FUN5();

FUN6(VAR9, VAR2, &VAR6, VAR11);

if (VAR5)
FUN7(VAR2, VAR11);

return VAR17;
}