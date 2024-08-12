void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6;
struct VAR7 *VAR8 = FUN2();
struct VAR9 *VAR10;


for (FUN3((struct VAR11 *)VAR2->VAR12, VAR4, VAR6)) {
if (VAR6->VAR13 == VAR14)
continue;
VAR10 = FUN4(VAR6->VAR13, VAR6->VAR15);
if (!VAR10) {
FUN5(
"",
VAR16, VAR6->VAR13, VAR6->VAR15);
continue;
}
FUN6(VAR10, VAR2);
}

FUN7(VAR8->VAR17, VAR2);
FUN8(VAR2);
}