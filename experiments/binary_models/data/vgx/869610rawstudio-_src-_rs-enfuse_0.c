VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9, gint VAR10, double VAR11, VAR2 *VAR12, gint VAR13, VAR8 *VAR14) {
VAR15 *VAR16 = NULL;

if (VAR5) 
{
VAR16 = (VAR15 *) FUN2(VAR5, VAR3);
if (!VAR16)
{
VAR16 = FUN3(VAR3);
FUN4(VAR5, VAR3, VAR16);
FUN5("", VAR3);
}
}
else
VAR16 = FUN3(VAR3);

if (VAR16)
{
FUN6(VAR16->VAR17, VAR3);
FUN7(VAR16);

VAR18 *VAR19 = FUN8(NULL, VAR9);
FUN9(VAR16, 0, VAR11);
FUN10(VAR16, VAR19, VAR10);

if (VAR13 > 0) 
{
FUN11(VAR14, VAR20);
FUN12(VAR9,
"", VAR16->VAR21,
"", VAR16->VAR3,
"", VAR20,
"", VAR13,
"", VAR13,
NULL);
}
else
{
FUN11(VAR14, VAR22);
FUN12(VAR9,
"", VAR16->VAR21,
"", VAR16->VAR3,
NULL);
}

if (FUN13(FUN14(VAR7), ""))
FUN15(VAR7, "", VAR12, NULL);

FUN16(VAR7, "");
FUN17(VAR7, VAR9);

gint VAR23 = FUN18(VAR9);
FUN5("", VAR3, VAR23);
FUN19(VAR19);
return VAR23;
}
else
return -1;
}