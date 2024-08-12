static void FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4) {
_cleanup_free_ char *VAR5 = NULL;
int VAR6;

assert(VAR2);


if (!VAR3 || !VAR4)
return;

VAR6 = FUN2(VAR2, VAR3, -1);
if (VAR6 < 0)
return (void) FUN3(VAR6, ""%VAR7\"", VAR3);
if (VAR6 > 0)
return;

if (VAR8) {
VAR6 = FUN4(VAR3, VAR4, VAR9|VAR10, VAR11, &VAR5, NULL);
if (VAR6 < 0)
FUN5(VAR6, ""%VAR7\"", VAR3);
else
FUN6(""%VAR7\"", VAR5);
return;
}

VAR6 = FUN7(VAR3, VAR4, VAR9|VAR10, 0, &VAR5);
if (VAR6 >= 0)
FUN6(""%VAR7\"", VAR5);
else if (VAR6 != -VAR12)
return (void) FUN3(VAR6, ""%VAR7\"", VAR3);

_cleanup_free_ char *VAR13 = NULL;
if (FUN8(VAR3, &VAR13) >= 0 && !FUN9(VAR13, "")) {
VAR6 = FUN7(VAR13, VAR4, VAR9|VAR10, VAR14, NULL);
if (VAR6 < 0 && !FUN10(VAR6, -VAR15, -VAR12))
FUN3(VAR6, ""%VAR7\"", VAR13);
}
}