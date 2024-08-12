int FUN1(VAR1 *VAR2, int VAR3, enum VAR4 *VAR5, char **VAR6) {
FUN2(VAR7) VAR8 *VAR9 = NULL, *VAR10 = NULL;
_cleanup_free_ char *VAR11 = NULL;
const char *VAR12;
uint32_t VAR13;
size_t VAR14;
int VAR15;

assert(VAR2);
assert(VAR3 > 0);

VAR15 = FUN3(VAR2, VAR16, VAR17, &VAR9);
if (VAR15 < 0)
return FUN4(VAR15, "");

VAR15 = FUN5(VAR9, VAR18, VAR3);
if (VAR15 < 0)
return FUN4(VAR15, "");

VAR15 = FUN6(VAR2, VAR9, 0, &VAR10);
if (VAR15 == -VAR19) {

FUN4(VAR15, ""
"",
VAR3);
goto VAR20;
}
if (VAR15 < 0)
return FUN4(VAR15, "", VAR3);
if (!VAR10) {
FUN7("", VAR3);
goto VAR20;
}

VAR15 = FUN8(VAR10);
if (VAR15 < 0)
return FUN4(VAR15, "", VAR3);

VAR15 = FUN9(VAR2, VAR10, &VAR12);
if (VAR15 < 0)
return FUN4(VAR15, "");
if (!FUN10(VAR12, VAR16)) {
FUN7("", VAR12);
goto VAR20;
}

VAR15 = FUN11(VAR10, VAR21, &VAR13);
if (VAR15 < 0)
return FUN4(VAR15, "");

VAR15 = FUN12(VAR10, VAR22, &VAR14, (void**) &VAR11);
if (VAR15 < 0 && VAR15 != -VAR23)
return FUN4(VAR15, "");
if (VAR15 >= 0) {
if (VAR14 == 0) {
FUN7("");
VAR11 = FUN13(VAR11);
} else if (FUN14(VAR11) != VAR14) {
FUN7("");
VAR11 = FUN13(VAR11);
}
}

if (VAR5)
*VAR5 = VAR13;

if (VAR6)
*VAR6 = FUN15(VAR11);

return 1;

VAR20:
if (VAR5)
*VAR5 = 0;
if (VAR6)
*VAR6 = NULL;
return 0;
}