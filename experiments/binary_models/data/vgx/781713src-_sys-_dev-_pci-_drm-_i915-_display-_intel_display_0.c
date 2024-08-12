static void FUN1(struct VAR1 *VAR2,
VAR3 *VAR4, VAR3 *VAR5)
{
struct VAR6 *VAR7;

*VAR4 = 0;
*VAR5 = 0;

FUN2(&VAR2->VAR8, VAR7,
FUN3(VAR2)) {
enum intel_display_power_domain VAR9;
enum pipe VAR10 = VAR7->VAR10;
intel_wakeref_t VAR11;

VAR9 = FUN4(VAR7, (enum VAR12) VAR10);
FUN5(VAR2, VAR9, VAR11) {
u32 VAR13 = FUN6(VAR2, FUN7(VAR10));

if (!(VAR13 & VAR14))
continue;

if (VAR13 & VAR15)
*VAR4 |= FUN8(VAR10);
else
*VAR5 |= FUN8(VAR10);
}

if (FUN9(VAR2) < 13)
continue;

VAR9 = FUN10(VAR10);
FUN5(VAR2, VAR9, VAR11) {
u32 VAR13 = FUN6(VAR2, FUN7(VAR10));

if (VAR13 & VAR16)
*VAR4 |= FUN8(VAR10);
if (VAR13 & VAR17)
*VAR5 |= FUN8(VAR10);
}
}


FUN11(&VAR2->VAR8, *VAR5 != *VAR4 << 1,
"",
*VAR4, *VAR5);
}