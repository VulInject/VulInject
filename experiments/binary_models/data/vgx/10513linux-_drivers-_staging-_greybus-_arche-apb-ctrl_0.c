static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;
struct VAR5 *VAR6 = FUN2(VAR2);
int VAR7;

if (VAR6->VAR8 ||
VAR6->VAR9 == VAR10)
return 0;


FUN3(VAR6->VAR11);

if (VAR6->VAR9 == VAR12 && VAR6->VAR13)
FUN4(VAR4, VAR6->VAR13);


if (!FUN5(VAR6->VAR14)) {
VAR7 = FUN6(VAR6->VAR14);
if (VAR7) {
FUN7(VAR4, "");
return VAR7;
}
}

if (!FUN5(VAR6->VAR15)) {
VAR7 = FUN6(VAR6->VAR15);
if (VAR7) {
FUN7(VAR4, "");
return VAR7;
}
}

FUN8(VAR4);


if (VAR6->VAR16)
FUN9(VAR6->VAR16, 1);

FUN10(100, 200);


FUN11(VAR6->VAR11);

VAR6->VAR9 = VAR10;

return 0;
}