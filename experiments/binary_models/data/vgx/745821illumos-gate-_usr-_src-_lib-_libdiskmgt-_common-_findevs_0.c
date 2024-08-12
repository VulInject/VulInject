static int
FUN1(di_node_t VAR1, di_minor_t VAR2, void *VAR3)
{
struct VAR4	*VAR5;
int VAR6 = VAR7;

VAR5 = (struct VAR4 *)VAR3;

if (VAR8 > 1) {

char	*VAR9;
char	VAR10[VAR11];

VAR9 = FUN2(VAR1);
(void) snprintf(VAR10, sizeof (VAR10), "", VAR9,
FUN3(VAR2));
FUN4((void *) VAR9);

(void) fprintf(VAR12,
"",
VAR10, FUN5(VAR1), FUN6(VAR1),
FUN7(VAR2),
(FUN8(VAR2) != NULL ?
FUN8(VAR2) : ""));
}

if (FUN9(VAR1, VAR2, VAR5->VAR13) != NULL) {
if (FUN10(VAR5, VAR1, VAR2, NULL) == NULL) {
VAR5->VAR14 = VAR15;
VAR6 = VAR16;
}

} else if (FUN11(VAR1, VAR2)) {
if (FUN12(VAR5, VAR1, VAR2) == NULL) {
VAR5->VAR14 = VAR15;
VAR6 = VAR16;
}

} else if (FUN7(VAR2) == VAR17 &&
(FUN13(VAR2) || FUN14(VAR1, VAR2))) {
char	*VAR18;
char	VAR19[VAR11];
VAR20	*VAR21;

(void) snprintf(VAR19, sizeof (VAR19), "",
FUN5(VAR1), FUN6(VAR1));
VAR18 = FUN15(VAR22, VAR1);

VAR5->VAR1 = VAR1;
VAR5->VAR2 = VAR2;

if (!FUN16(VAR5, VAR18, VAR19, &VAR21)) {
VAR5->VAR14 = 0;

VAR21 = FUN17(VAR18, VAR19, VAR5);
if (VAR21 == NULL) {
VAR5->VAR14 = VAR15;
}

if (VAR21->VAR23 != VAR24) {

if (VAR5->VAR14 == 0) {
if (FUN18(VAR21,
VAR5) != 0) {
VAR5->VAR14 = VAR15;
}
}
}
}
if (FUN14(VAR1, VAR2)) {
char VAR25[VAR26];
char *VAR27;
VAR28 *VAR29;

if (FUN19(FUN20(VAR2),
VAR1, "", &VAR27) == -1)
return (VAR7);
(void) snprintf(VAR25, VAR26, "",
VAR27);
if ((VAR29 = FUN21(VAR21, VAR19)) == NULL) {
if (FUN22(VAR21, VAR19,
VAR25, VAR5) != 0) {
VAR5->VAR14 = VAR15;
}
} else {

if (FUN23(VAR29, VAR25) != 0) {
VAR5->VAR14 = VAR15;
}
}
}


if (VAR5->VAR14 == 0) {
char	*VAR9;
char	VAR30[VAR11];
char	*VAR31;


VAR9 = FUN2(VAR1);
(void) snprintf(VAR30,
sizeof (VAR30), "",
VAR9, FUN3(VAR2));
FUN4((void *) VAR9);

if (FUN24(FUN8(VAR2),
VAR32)) {
VAR31 = VAR33;
} else {
VAR31 = VAR34;
}


(void) FUN25(VAR5->VAR35, VAR31,
VAR30, VAR36, VAR3, VAR37);
}

if (VAR5->VAR14 != 0) {
VAR6 = VAR16;
}
}

return (VAR6);
}