static int FUN1(VAR1 *VAR2, const char *VAR3, bool VAR4) {
FUN2(VAR5) VAR6 *VAR7 = NULL, *VAR8 = NULL;
FUN2(VAR9) sd_bus_error VAR10 = VAR11;
_cleanup_strv_free_ char **VAR12 = NULL;
VAR13 *VAR14 = NULL;
const uint64_t VAR15 = VAR16 | (VAR17 ? VAR18 : 0);
size_t VAR19 = 0;
int VAR20;

if (!VAR21)
return 0;

VAR12 = FUN3(VAR3, NULL);
if (!VAR12)
return FUN4();

VAR20 = FUN5(
VAR2,
&VAR7,
"",
"",
"",
VAR4 ? "" : "");
if (VAR20 < 0)
return FUN6(VAR20);

VAR20 = FUN7(VAR7, VAR12);
if (VAR20 < 0)
return FUN6(VAR20);

VAR20 = FUN8(VAR7, "", VAR15);
if (VAR20 < 0)
return FUN6(VAR20);

VAR20 = FUN9(VAR2, VAR7, 0, &VAR10, &VAR8);
if (VAR20 < 0)
return FUN10(VAR20, "",
VAR4 ? "" : "", VAR3, FUN11(&VAR10, VAR20));

if (VAR4) {
VAR20 = FUN12(VAR8, "");
if (VAR20 < 0)
return FUN13(VAR20);
}

(void) FUN14(VAR8, VAR22, &VAR14, &VAR19);
FUN15(VAR14, VAR19);

return 0;
}