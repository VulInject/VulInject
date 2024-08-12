int
FUN1(pciintr_icu_handle_t VAR1, int VAR2, int VAR3)
{
struct VAR4 *VAR5 = VAR1;
int VAR6, VAR7;
pcireg_t VAR8;

if (FUN2(VAR2) == 0 || FUN3(VAR3) == 0)
return (1);

VAR7 = VAR9;
if (VAR2 > 3) {
VAR7 += 8;
VAR2 -= 4;
}

VAR8 = FUN4(VAR5->VAR10, VAR5->VAR11, VAR7);
VAR6 = VAR2 << 3;
VAR8 &= ~((VAR12 | VAR13) << VAR6);
VAR8 |= VAR3 << VAR6;
FUN5(VAR5->VAR10, VAR5->VAR11, VAR7, VAR8);

return (0);
}