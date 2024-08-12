static VAR1 FUN1(int VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
u32 VAR6 = FUN2(VAR5->VAR7 +
FUN3(VAR8) +
FUN4(struct VAR9, VAR10));
bool VAR11 = true;

FUN5(VAR6);
FUN6(VAR5, "", VAR6);

if (FUN7(!VAR6)) {
FUN8(VAR5, "");
return VAR12;
}

FUN9(VAR5);


if (FUN10(VAR6 & (VAR13 |
VAR14))) {
FUN6(VAR5, "",
VAR6);

VAR6 &= ~(VAR13 |
VAR14);
if (FUN10(FUN11(VAR15, VAR5->VAR16))) {
if (FUN10(FUN11(VAR17, VAR5->VAR16))) {
FUN12(VAR5, "");
VAR11 = false;
FUN13(&VAR5->VAR18);
} else {
FUN8(VAR5,
"");
}
} else {
FUN8(VAR5, "");
}
}

if (FUN7(VAR6))
FUN8(VAR5, "", VAR6);



FUN14(&VAR5->VAR19);

if (FUN7(VAR11))
FUN15(VAR5);

return VAR20;
}