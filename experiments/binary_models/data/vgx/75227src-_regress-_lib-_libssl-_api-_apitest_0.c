static int
FUN1(uint16_t VAR1)
{
FUN2(VAR2) *VAR3;
VAR2 *VAR4;
VAR5 *VAR6 = NULL, *VAR7 = NULL;
VAR8 *VAR9 = NULL, *VAR10 = NULL;
int VAR11 = 1;

if ((VAR6 = FUN3(FUN4())) == NULL)
goto VAR12;
if (FUN5(VAR6, -1) <= 0)
goto VAR12;

if ((VAR7 = FUN3(FUN4())) == NULL)
goto VAR12;
if (FUN5(VAR7, -1) <= 0)
goto VAR12;

if ((VAR9 = FUN6(VAR7, VAR6)) == NULL)
goto VAR12;
if (VAR1 != 0) {
if (!FUN7(VAR9, VAR1))
goto VAR12;
if (!FUN8(VAR9, VAR1))
goto VAR12;
}

if ((VAR10 = FUN9(VAR6, VAR7)) == NULL)
goto VAR12;
if (VAR1 != 0) {
if (!FUN7(VAR10, VAR1))
goto VAR12;
if (!FUN8(VAR10, VAR1))
goto VAR12;
}

if (!FUN10(VAR9, VAR13, VAR10, VAR14)) {
fprintf(VAR15, "");
goto VAR12;
}

if (VAR1 != 0) {
if (FUN11(VAR9) != VAR1) {
fprintf(VAR15, ""
"", FUN11(VAR9), VAR1);
goto VAR12;
}
if (FUN11(VAR10) != VAR1) {
fprintf(VAR15, ""
"", FUN11(VAR10), VAR1);
goto VAR12;
}
}


VAR4 = FUN12(VAR9);
VAR3 = FUN13(VAR9);
FUN14(VAR4);

if (VAR4 == NULL) {
fprintf(VAR15, "");
goto VAR12;
}
if (FUN15(VAR3) != 2) {
fprintf(VAR15, ""
"", FUN15(VAR3));
goto VAR12;
}
if (FUN16(VAR4, FUN17(VAR3, 0)) != 0) {
fprintf(VAR15, ""
"");
goto VAR12;
}

VAR4 = FUN12(VAR10);
VAR3 = FUN13(VAR10);
FUN14(VAR4);

if (VAR4 == NULL) {
fprintf(VAR15, "");
goto VAR12;
}
if (FUN15(VAR3) != 1) {
fprintf(VAR15, ""
"", FUN15(VAR3));
goto VAR12;
}
if (FUN16(VAR4, FUN17(VAR3, 0)) == 0) {
fprintf(VAR15, ""
"");
goto VAR12;
}

fprintf(VAR15, "");

VAR11 = 0;

VAR12:
FUN18(VAR6);
FUN18(VAR7);

FUN19(VAR9);
FUN19(VAR10);

return VAR11;
}