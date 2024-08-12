static int FUN1(VAR1 *VAR2) {
int VAR3;

assert(VAR2);
assert(!VAR2->VAR4);

VAR3 = FUN2(&VAR2->VAR4);
if (VAR3 < 0)
return FUN3(VAR3, "");

VAR3 = FUN4(VAR2->VAR4, &VAR5, VAR2);
if (VAR3 < 0)
return VAR3;

VAR3 = FUN5(VAR2->VAR4);
if (VAR3 < 0)
return VAR3;

VAR3 = FUN6(VAR2->VAR4, NULL, VAR6, "", VAR7, NULL, VAR2);
if (VAR3 < 0)
return FUN3(VAR3, "");

VAR3 = FUN6(VAR2->VAR4, NULL, VAR6, "", VAR8, NULL, VAR2);
if (VAR3 < 0)
return FUN3(VAR3, "");

VAR3 = FUN7(
VAR2->VAR4,
NULL,
"",
NULL,
"",
"",
VAR9, NULL, VAR2);
if (VAR3 < 0)
return FUN3(VAR3, "");

VAR3 = FUN6(VAR2->VAR4, NULL, VAR6, "", VAR10, NULL, VAR2);
if (VAR3 < 0)
return FUN3(VAR3, "");

VAR3 = FUN8(VAR2->VAR4, NULL, VAR6, "", NULL, NULL, NULL);
if (VAR3 < 0)
return FUN3(VAR3, "");

VAR3 = FUN9(VAR2->VAR4, NULL, "", 0, NULL, NULL);
if (VAR3 < 0)
return FUN3(VAR3, "");

VAR3 = FUN10(VAR2->VAR4, VAR2->VAR11, VAR12);
if (VAR3 < 0)
return FUN3(VAR3, "");

return 0;
}