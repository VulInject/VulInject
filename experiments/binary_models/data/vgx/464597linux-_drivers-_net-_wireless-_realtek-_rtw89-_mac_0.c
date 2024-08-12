static bool FUN1(struct VAR1 *VAR2)
{
struct rtw89_mac_dle_dfi_qempty VAR3;
u32 VAR4, VAR5, VAR6, VAR7;
int VAR8, VAR9, VAR10;

VAR4 = VAR2->VAR11->VAR12;
VAR3.VAR13 = VAR14;

for (VAR8 = 0; VAR8 < VAR4; VAR8++) {
VAR3.VAR15 = VAR8;
VAR10 = FUN2(VAR2, &VAR3);
if (VAR10) {
FUN3(VAR2, "", VAR10);
return false;
}
VAR5 = VAR3.VAR3;
for (VAR9 = 0 ; VAR9 < VAR16; VAR9++) {
VAR6 = FUN4(VAR17, VAR5);
if (VAR6 != VAR17)
return false;
VAR5 >>= VAR18;
}
}

VAR3.VAR15 = VAR2->VAR11->VAR19;
VAR10 = FUN2(VAR2, &VAR3);
if (VAR10) {
FUN3(VAR2, "", VAR10);
return false;
}
VAR7 = VAR20 | VAR21 | VAR22;
if ((VAR3.VAR3 & VAR7) != VAR7)
return false;

if (VAR2->VAR23) {
VAR7 |= VAR24 | VAR25 | VAR26;
if ((VAR3.VAR3 & VAR7) != VAR7)
return false;
}

VAR7 = VAR27 | VAR28 |
VAR29 | VAR30 |
VAR31 | VAR32 |
VAR33 | VAR34 |
VAR35 | VAR36 |
VAR37 | VAR38 |
VAR39 | VAR40 |
VAR41;
VAR6 = FUN5(VAR2, VAR42);

return (VAR6 & VAR7) == VAR7;
}