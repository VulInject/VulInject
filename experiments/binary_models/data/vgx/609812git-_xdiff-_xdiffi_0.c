int FUN1(VAR1 *VAR2, VAR1 *VAR3, xpparam_t const *VAR4,
xdemitconf_t const *VAR5, VAR6 *VAR7) {
VAR8 *VAR9;
xdfenv_t VAR10;
emit_func_t VAR11 = VAR5->VAR12 ? VAR13 : VAR14;

if (FUN2(VAR2, VAR3, VAR4, &VAR10) < 0) {

return -1;
}
if (FUN3(&VAR10.VAR15, &VAR10.VAR16, VAR4->VAR17) < 0 ||
FUN3(&VAR10.VAR16, &VAR10.VAR15, VAR4->VAR17) < 0 ||
FUN4(&VAR10, &VAR9) < 0) {

FUN5(&VAR10);
return -1;
}
if (VAR9) {
if (VAR4->VAR17 & VAR18)
FUN6(VAR9, &VAR10, VAR4->VAR17);

if (VAR4->VAR19)
FUN7(VAR9, &VAR10, VAR4);

if (FUN8(&VAR10, VAR9, VAR7, VAR5) < 0) {

FUN9(VAR9);
FUN5(&VAR10);
return -1;
}
FUN9(VAR9);
}
FUN5(&VAR10);

return 0;
}