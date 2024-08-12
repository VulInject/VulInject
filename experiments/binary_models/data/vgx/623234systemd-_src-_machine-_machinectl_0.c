static int FUN1(int argc, char *argv[], void *VAR1) {
size_t VAR2 = FUN2(""), VAR3 = FUN2(""), VAR4 = FUN2("");
FUN3(VAR5) VAR6 *VAR7 = NULL;
FUN3(VAR8) sd_bus_error VAR9 = VAR10;
_cleanup_free_ VAR11 *VAR12 = NULL;
const char *VAR13, *VAR14, *VAR15;
VAR16 *VAR17 = VAR1;
uint32_t VAR18, VAR19 = 0;
size_t VAR20 = 0;
double VAR21;
int VAR22;

FUN4(VAR23);

VAR22 = FUN5(VAR17, VAR24, "", &VAR9, &VAR7, NULL);
if (VAR22 < 0)
return FUN6(VAR22, "", FUN7(&VAR9, VAR22));

VAR22 = FUN8(VAR7, '', "");
if (VAR22 < 0)
return FUN9(VAR22);

while ((VAR22 = FUN10(VAR7, "", &VAR18, &VAR13, &VAR14, &VAR15, &VAR21, NULL)) > 0) {
size_t VAR25;

if (!FUN11(VAR12, VAR20 + 1))
return FUN12();

VAR12[VAR20].VAR18 = VAR18;
VAR12[VAR20].VAR13 = VAR13;
VAR12[VAR20].VAR14 = VAR14;
VAR12[VAR20].VAR15 = VAR15;
VAR12[VAR20].VAR21 = VAR21;

VAR25 = strlen(VAR13);
if (VAR25 > VAR2)
VAR2 = VAR25;

VAR25 = strlen(VAR14);
if (VAR25 > VAR4)
VAR4 = VAR25;

VAR25 = strlen(VAR15);
if (VAR25 > VAR3)
VAR3 = VAR25;

if (VAR18 > VAR19)
VAR19 = VAR18;

VAR20++;
}
if (VAR22 < 0)
return FUN9(VAR22);

VAR22 = FUN13(VAR7);
if (VAR22 < 0)
return FUN9(VAR22);

FUN14(VAR12, VAR20, VAR26);

if (VAR27 && VAR20 > 0)
FUN15("",
(int) FUN16(2U, FUN17(VAR19)), "",
(int) 7, "",
(int) VAR2, "",
(int) VAR3, "",
(int) VAR4, "");

for (size_t VAR28 = 0; VAR28 < VAR20; VAR28++)

if (VAR12[VAR28].VAR21 < 0)
FUN15("" VAR29 "",
(int) FUN16(2U, FUN17(VAR19)), VAR12[VAR28].VAR18,
(int) 7, "",
(int) VAR2, VAR12[VAR28].VAR13,
(int) VAR3, VAR12[VAR28].VAR15,
(int) VAR4, VAR12[VAR28].VAR14);
else
FUN15("" VAR29 "",
(int) FUN16(2U, FUN17(VAR19)), VAR12[VAR28].VAR18,
(int) 6, (unsigned) (VAR12[VAR28].VAR21 * 100),
(int) VAR2, VAR12[VAR28].VAR13,
(int) VAR3, VAR12[VAR28].VAR15,
(int) VAR4, VAR12[VAR28].VAR14);

if (VAR27) {
if (VAR20 > 0)
FUN15("", VAR20);
else
FUN15("");
}

return 0;
}