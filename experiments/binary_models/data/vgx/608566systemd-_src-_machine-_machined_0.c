static int FUN1(VAR1 *VAR2) {
_cleanup_closedir_ VAR3 *VAR4 = NULL;
int VAR5;

assert(VAR2);

VAR5 = FUN2(VAR2);
if (VAR5 < 0)
return VAR5;


VAR4 = FUN3("");
if (!VAR4) {
if (VAR6 == VAR7)
return 0;

return FUN4(VAR6, "");
}

FUN5(VAR8, VAR4, return -VAR6) {
struct VAR9 *VAR10;
int VAR11;

if (!FUN6(VAR8))
continue;


if (FUN7(VAR8->VAR12, ""))
continue;

if (!FUN8(VAR8->VAR12, 0))
continue;

VAR11 = FUN9(VAR2, VAR8->VAR12, &VAR10);
if (VAR11 < 0) {
VAR5 = FUN4(VAR11, "", VAR8->VAR12);
continue;
}

FUN10(VAR10);

VAR11 = FUN11(VAR10);
if (VAR11 < 0)
VAR5 = VAR11;
}

return VAR5;
}