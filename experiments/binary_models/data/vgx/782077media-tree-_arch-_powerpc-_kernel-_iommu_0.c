int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6;


if (!FUN2(VAR2))
return -VAR7;

if (VAR2->VAR8) {
FUN3("",
VAR9, FUN4(VAR2),
FUN5(VAR2->VAR8));
return -VAR10;
}

VAR4 = FUN6(VAR2);
if (!VAR4) {
FUN3("",
VAR9, FUN4(VAR2));
return 0;
}

VAR6 = FUN7(&VAR4->VAR11,
struct VAR5, VAR12);
if (!VAR6) {
FUN3("",
VAR9, FUN4(VAR2));
return 0;
}
FUN3("",
VAR9, FUN4(VAR2),
FUN5(VAR6->VAR13->VAR14));

if (VAR15 < FUN8(VAR4)) {
FUN9("",
VAR9, FUN8(VAR4),
VAR15, FUN4(VAR2));
return -VAR16;
}

return FUN10(VAR6->VAR13->VAR14, VAR2);
}