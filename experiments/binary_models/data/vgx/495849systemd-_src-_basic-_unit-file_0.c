int FUN1(
VAR1 *VAR2,
VAR1 *VAR3,
const char *VAR4,
const char **VAR5,
VAR6 **VAR7) {

const char *VAR8 = NULL;
_cleanup_free_ char *template = NULL, *VAR9 = NULL;
_cleanup_set_free_ VAR6 *VAR10 = NULL;
int VAR11;



UnitNameFlags VAR12 = FUN2(VAR4, &VAR9);
if (VAR12 < 0)
return VAR12;

if (VAR7) {
VAR11 = FUN3(VAR2, VAR3, VAR4, NULL, VAR12, VAR9, &VAR10, VAR4);
if (VAR11 < 0)
return VAR11;
}


VAR11 = FUN4(VAR2, VAR4, &VAR8);
if (VAR11 < 0 && !FUN5(VAR11, -VAR13, -VAR14))
return FUN6(VAR11, "", VAR4);

if (!VAR8 && VAR12 == VAR15) {


VAR11 = FUN7(VAR4, &template);
if (VAR11 < 0)
return FUN6(VAR11, "");

VAR11 = FUN4(VAR2, template, &VAR8);
if (VAR11 < 0 && !FUN5(VAR11, -VAR13, -VAR14))
return FUN6(VAR11, "", template);
}

if (VAR8 && VAR7) {
const char *VAR16 = FUN8(VAR8);

if (!FUN9(VAR16, VAR4)) {

VAR11 = FUN3(VAR2, VAR3, VAR4, VAR16, VAR12, VAR9, &VAR10, VAR16);
if (VAR11 < 0)
return VAR11;
}
}

*VAR5 = VAR8;
if (VAR7)
*VAR7 = FUN10(VAR10);

return 0;
}