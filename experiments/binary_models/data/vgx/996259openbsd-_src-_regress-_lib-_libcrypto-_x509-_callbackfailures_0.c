static void
FUN1(const char *VAR1, const char *VAR2,
const char *VAR3, const char*VAR4, int *VAR5, int VAR6)
{
FUN2(VAR7) *VAR8 = NULL, *VAR9 = NULL;
VAR10 *VAR11 = NULL;
VAR12 *VAR13 = NULL;
int VAR14, VAR15;
VAR7 *VAR16 = NULL;

*VAR5 = 0;
VAR15 = (VAR6 == VAR17);

if (!VAR15 && !FUN3(VAR2, &VAR8, 1))
FUN4(1, "", VAR2);
if (!FUN3(VAR3, &VAR9, 1))
FUN4(1, "", VAR3);
if (!FUN3(VAR3, &VAR9, 0))
FUN4(1, "", VAR4);
if (FUN5(VAR9) < 1)
FUN4(1, "");
VAR16 = FUN6(VAR9);

if ((VAR11 = FUN7()) == NULL)
FUN4(1, "");
if (VAR15 && (VAR13 = FUN8()) == NULL)
FUN4(1, "");
if (!FUN9(VAR11, VAR13, VAR16, VAR9)) {
FUN10(VAR18);
FUN4(1, "");
}

if (VAR15) {
if (!FUN11(VAR13, NULL, VAR1))
FUN4(1, "", VAR1);
}
if (VAR6 == VAR19)
FUN12(VAR11, VAR20);
else
FUN13(FUN14(VAR11),
VAR20);

if (VAR21)
FUN15(VAR11, VAR22);
if (!VAR15)
FUN16(VAR11, VAR8);

if (FUN17(VAR11) == 1) {
*VAR5 = 1; 
goto VAR23;
}

VAR14 = FUN18(VAR11);
if (VAR14 == 0)
FUN4(1, "");

fprintf(VAR18, "",
FUN19(VAR11),
FUN20(VAR14));

VAR23:
FUN21(VAR8, VAR24);
FUN21(VAR9, VAR24);
FUN22(VAR13);
FUN23(VAR11);
FUN24(VAR16);
}

struct VAR25 {
const char *VAR26;
int VAR27;
int VAR28;
int VAR29;
int VAR30;
};