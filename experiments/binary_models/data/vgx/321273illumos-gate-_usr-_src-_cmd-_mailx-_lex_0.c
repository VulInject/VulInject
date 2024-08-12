void
FUN1(void)
{
int VAR1;
int VAR2;
char VAR3[VAR4];
char VAR5[VAR4];
struct stat VAR6;
VAR7 *VAR8;

FUN2(VAR9, VAR10);
if (VAR11 && !VAR12) {
if (FUN2(VAR13, VAR14) != VAR14)
FUN2(VAR13, VAR15);
if (FUN2(VAR16, VAR14) != VAR14)
FUN2(VAR16, VAR17);
}
for (;;) {
FUN3(VAR18);



if (!VAR11 && !VAR12)
return;
VAR1 = 0;
VAR19:
if ((VAR20 = (VAR21 && !VAR12)) != 0) {
if (VAR22 == VAR23) {
if ((int)FUN4(""))
VAR22 = "";
else
VAR22 = "";
}
FUN2(VAR9, VAR24);
if (VAR21 && FUN4("") &&
FUN5(VAR25, &VAR6) >= 0 &&
VAR6.VAR26 > VAR27) {
int VAR28, VAR29;

VAR28 = VAR30;
FUN6(VAR31, 0L, 2);
FUN7();
if (!VAR32 && VAR33)
FUN8();
if ((VAR8 = fopen(VAR25, "")) == NULL) {
fprintf(VAR34,
FUN9(""),
VAR25);
if (!VAR32 && VAR33)
FUN10();
FUN11(1);

}
if (VAR32 || !VAR33)
FUN12(VAR8, "", 1);
FUN6(VAR8, VAR27, 0);
VAR27 = FUN13(VAR8);
FUN14(VAR8);
FUN15(VAR30);
fclose(VAR8);
if (!VAR32 && VAR33)
FUN10();
if (VAR30-VAR28 > 0) {
FUN16(FUN9(
""));
if (VAR30 - VAR28 == 1)
FUN16(FUN9(
""));
else
FUN16(FUN9(
""),
VAR30-VAR28);
if (FUN4("") != VAR23)
for (VAR29 = VAR28+1;
VAR29 <= VAR30; VAR29++) {
FUN17(VAR29);
FUN18();
}
}
FUN19();
}
FUN16("", VAR22);
}
FUN20();
FUN18();



VAR2 = 0;
VAR3[0] = '';
for (;;) {
if (FUN21(VAR35, VAR5) <= 0) {
if (VAR2 != 0)
break;
if (VAR36)
return;
if (VAR12) {
FUN22();
goto VAR37;
}
if (FUN4("") != VAR23 && VAR20) {
if (++VAR1 < 25) {
FUN16(FUN9(
""VAR38\""));
goto VAR19;
}
}
return;
}
if ((VAR2 = strlen(VAR5)) == 0)
break;
VAR2--;
if (VAR5[VAR2] != '')
break;
VAR5[VAR2++] = '';
if (VAR2 > VAR4 - (int)strlen(VAR3) - 1)
break;
strcat(VAR3, VAR5);
}
VAR2 = VAR4 - strlen(VAR3) - 1;
if ((int)strlen(VAR5) > VAR2) {
FUN16(FUN9(
""),
VAR3, VAR5);
if (VAR36)
return;
if (VAR12) {
FUN22();
goto VAR37;
}
return;
}
strncat(VAR3, VAR5, VAR2);
FUN2(VAR9, VAR10);
if (FUN23(VAR3, 0))
return;
VAR37:;
}
}