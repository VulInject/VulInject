static int FUN1(const char *VAR1, VAR2 *VAR3) {
_cleanup_free_ char *VAR4 = NULL, *VAR5 = NULL, *VAR6 = NULL;
const char *VAR7;
int VAR8;

assert(VAR1);
assert(VAR3);

VAR8 = FUN2(VAR3->VAR9, VAR1, VAR10|VAR11, &VAR5, NULL);
if (VAR8 < 0)
return FUN3(VAR8, "", VAR1, VAR3->VAR9);
if (VAR8 == 0) { 
VAR8 = FUN4(VAR5, 0755);
if (VAR8 < 0)
return FUN3(VAR8, "", VAR5);
}

(void) FUN5(VAR3->VAR12, 0755);

VAR4 = FUN6(VAR3->VAR4);
if (!VAR4)
return FUN7();

VAR6 = FUN8(VAR3->VAR12, "");
if (!VAR6)
return FUN7();

if (VAR3->VAR13)
VAR7 = FUN9("", VAR6, "", VAR4);
else {
_cleanup_free_ char *VAR14 = NULL;

VAR14 = FUN8(VAR3->VAR15, "");
if (!VAR14)
return FUN7();

VAR7 = FUN9("", VAR4, "", VAR6, "", VAR14);
}

return FUN10(VAR16, "", VAR5, "", VAR3->VAR13 ? VAR17 : 0, VAR7);
}