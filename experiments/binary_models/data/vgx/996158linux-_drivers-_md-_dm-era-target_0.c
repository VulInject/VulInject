static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
struct VAR4 *VAR5;
struct VAR6 *VAR7;

VAR3 = FUN2(VAR2, &VAR5);
if (VAR3) {
FUN3("");
return VAR3;
}

VAR7 = FUN4(VAR5);


if (FUN5(VAR7->VAR8) != VAR2->VAR9) {
FUN3("",
FUN5(VAR7->VAR8), VAR2->VAR9);
VAR3 = -VAR10;
goto VAR11;
}

VAR3 = FUN6(VAR2->VAR12, VAR13,
VAR7->VAR14,
sizeof(VAR7->VAR14),
&VAR2->VAR15, &VAR2->VAR16);
if (VAR3) {
FUN3("");
goto VAR11;
}

FUN7(VAR2);

VAR2->VAR17 = FUN5(VAR7->VAR17);
VAR2->VAR18 = FUN5(VAR7->VAR18);

FUN8(&VAR7->VAR19, &VAR2->VAR19->VAR2);
VAR2->VAR20 = FUN9(VAR7->VAR20);
VAR2->VAR21 = FUN9(VAR7->VAR21);
VAR2->VAR22 = FUN9(VAR7->VAR22);
VAR2->VAR23 = true;

FUN10(VAR5);

return 0;

VAR11:
FUN10(VAR5);
return VAR3;
}