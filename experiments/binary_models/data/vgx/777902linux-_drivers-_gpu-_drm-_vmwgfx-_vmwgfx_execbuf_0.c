static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6,
struct VAR7 *VAR8)
{
int VAR9;

VAR9 = FUN2(VAR2, VAR4, VAR6);
if (FUN3(VAR9 != 0))
goto VAR10;

if (!VAR4->VAR11) {
VAR4->VAR11 = FUN4(VAR2);
if (FUN5(VAR4->VAR11)) {
VAR9 = FUN6(VAR4->VAR11);
VAR4->VAR11 = NULL;
goto VAR10;
}
}

if (VAR4->VAR12) {
VAR8->VAR13 = FUN4(VAR2);
if (FUN5(VAR8->VAR13)) {
VAR9 = FUN6(VAR8->VAR13);
VAR8->VAR13 = NULL;
goto VAR10;
}
} else {
VAR8->VAR13 = VAR4->VAR11;
VAR4->VAR12 = true;
}

VAR8->VAR14 = VAR6;
VAR8->VAR15 = FUN7(VAR6);
FUN8(&VAR8->VAR16, &VAR4->VAR17);

return 0;

VAR10:
return VAR9;
}