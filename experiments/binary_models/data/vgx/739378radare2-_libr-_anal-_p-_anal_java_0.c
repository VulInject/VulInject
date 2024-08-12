static VAR1 FUN1(ut64 VAR2) {
ut64 VAR3 = FUN2(VAR2);
if (VAR3 != VAR4) {
return VAR3;
}
switch (VAR2) {
case VAR5: return VAR6;
case VAR7: return VAR8;
case VAR9: return VAR10;
case VAR11: return VAR12;
case VAR13: return VAR14;
case VAR15: return VAR16;
case VAR17: return VAR18;
case VAR19: return VAR20;
case VAR21: return VAR20;
case VAR22: return VAR23;
default:
if (VAR2 & VAR24) {
return FUN3 (VAR2);
}
if (VAR2 & VAR25) {
return FUN4 (VAR2);
}
if (VAR2 & VAR26) {
ut64 VAR27 = FUN1 (VAR2 & ~VAR26);
return VAR28 | VAR27;
}
if (VAR2 & (VAR29 | VAR30)) {
return FUN5(VAR2);
}
if (VAR2 & VAR31) {
return FUN2 (VAR2);
}
break;
}
if (VAR32 & VAR2) {
return VAR18;
}
return VAR4;
}