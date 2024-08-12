int
main(int argc, char *argv[])
{
int	VAR1, VAR2, VAR3 = 0;
int	VAR4 = 0, VAR5 = 0, VAR6 = 0, VAR7 = 0;
char	*VAR8;
VAR9	*VAR10 = NULL;
int	VAR11;
struct vfstab	VAR12, VAR13;
struct dk_minfo VAR14;
int VAR15 = 0;
struct VAR16 *VAR17, *VAR18 = NULL;
int VAR19;
uint_t VAR20;

(void) FUN1(VAR21, "");
(void) FUN2(VAR22);

VAR23 = strrchr(argv[0], '');
if (VAR23)
VAR23++;
else
VAR23 = argv[0];

while ((VAR1 = getopt(argc, argv, "")) != -1) {
switch (VAR1) {
case '':
VAR4++;
if (VAR4 > 1)
FUN3();
VAR24[VAR25++] = "";
FUN4(VAR25, VAR26);
break;
case '':
VAR5++;

if (VAR5 > 1) {
fprintf(VAR27,
FUN5(""),
VAR23);
FUN3();
}
VAR28 = VAR29;
if (strlen(VAR28) > (VAR30)VAR31) {
fprintf(VAR27,
FUN5(""),
VAR23, VAR28, VAR31);
FUN6(1);
}
break;
case '':
VAR7++;
FUN7("");
case '':
FUN7("");
case '':
FUN7("");
case '':
VAR8 = VAR29;
while (*VAR8 != '') {
if (*VAR8 == '') {
VAR32++;
break;
}
VAR8++;
}
FUN8("");
case '':
FUN7("");
case '':
VAR6++;
if (VAR6 > 1)
FUN3();
break;
case '':
FUN7("");
case '':
FUN7("");
}
VAR29 = NULL;
}


if (strcmp(argv[VAR33-1], "") == 0) {
VAR24[VAR25++] = argv[VAR33-1];
FUN4(VAR25, VAR26);
}

if (VAR4) {
if (VAR5) {
VAR25 = 2;
VAR24[VAR25++] = "";
VAR24[VAR25] = NULL;
FUN9(VAR28, VAR24);
}
FUN3();
}

if ((VAR7) && (VAR34 > 1)) {
FUN3();
}

if (VAR33 == argc) {	
if (VAR28 == NULL) {
if ((argc > 2) && (VAR7)) {
FUN3();
}
}

if (VAR28 == NULL || strcmp(VAR28, VAR35) == 0) {
if ((VAR10 = fopen(VAR36, "")) == NULL) {
fprintf(VAR27,
FUN5(""),
VAR23);
FUN6(1);
}
while ((VAR2 = FUN10(VAR10, &VAR12)) == 0) {
if (strcmp(VAR12.VAR37, VAR35) &&
FUN11(VAR12.VAR38)) {
VAR3 ++;
continue;
}
if (FUN11(VAR12.VAR38))
VAR39 = FUN12(VAR12.VAR38);
else
continue;
if (VAR39 < 1)
continue;
if (VAR32 == 0 || VAR39 == 1) {
VAR19 = FUN13(VAR12.VAR40,
VAR35, VAR6, VAR10);

if (VAR19 > VAR41)
VAR41 = VAR19;
} else if (FUN14(VAR12.VAR40) == 0) {
VAR15++;
VAR17 = FUN15(&VAR12);
VAR17->VAR42 = VAR18;
VAR18 = VAR17;
} else {

fprintf(VAR27,
FUN5(""),
VAR23);
VAR19 = FUN13(VAR12.VAR40,
VAR35, VAR6, VAR10);

if (VAR19 > VAR41)
VAR41 = VAR19;
}
}
fclose(VAR10);
if (VAR2 > 0)
FUN16(VAR2);
if (VAR32 && VAR41 == 0) {
FUN17(&VAR18, VAR15);
}
}
else
VAR3 = 1;

if (VAR3) {
if ((VAR10 = fopen(VAR36, "")) == NULL) {
fprintf(VAR27,
FUN5(""),
VAR23);
FUN6(1);
}
while ((VAR2 = FUN10(VAR10, &VAR12)) == 0)
if (strcmp(VAR12.VAR37, VAR35) &&
FUN11(VAR12.VAR38) &&
VAR12.VAR40 != NULL &&
(VAR28 == NULL ||
strcmp(VAR28, VAR12.VAR37) == 0)) {
VAR19 = FUN13(VAR12.VAR40,
VAR12.VAR37, VAR6, VAR10);

if (VAR19 > VAR41)
VAR41 = VAR19;
}
fclose(VAR10);
if (VAR2 > 0)
FUN16(VAR2);
}

} else {	
if (VAR28 == NULL && (VAR10 = fopen(VAR36, "")) == NULL) {
fprintf(VAR27, FUN5(""),
VAR23);
FUN6(1);
}

while (VAR33 < argc) {

if (VAR28 == NULL) {
if ((argc > 3) && (VAR7)) {
FUN3();
}

FUN18(&VAR13);


VAR43:
switch (VAR44) {
case VAR45:


case VAR46:
VAR13.VAR47 = argv[VAR33];
if ((VAR2 = FUN19(VAR10, &VAR12,
&VAR13)) == -1 ||
VAR12.VAR37 == NULL) {

VAR13.VAR47 = NULL;
FUN20(VAR10);

if (VAR44 == VAR46) {
VAR44 = VAR45;
goto VAR43;
}

} else {

if (VAR12.VAR40 != NULL) {
argv[VAR33] =
VAR12.VAR40;
}
VAR44 = VAR46;
break;
}

case VAR48:
VAR13.VAR40 = argv[VAR33];


if (((VAR11 = open(VAR13.VAR40,
VAR49)) >= 0) && (FUN21(VAR11,
VAR50, &VAR14) !=
-1)) {
VAR20 =  VAR14.VAR51;
if (VAR20 != 0 && FUN22(VAR20 /
VAR52) &&
VAR20 != VAR52) {
fprintf(VAR27,
FUN5(""
""
""
""));
(void) close(VAR11);
FUN6(1);
}
}

if (VAR11 >= 0) {
(void) close(VAR11);
}

if ((VAR2 = FUN19(VAR10, &VAR12,
&VAR13)) == -1 ||
VAR12.VAR37 == NULL) {

VAR13.VAR40 = NULL;
FUN20(VAR10);

if (VAR44 == VAR48) {
VAR44 = VAR45;
goto VAR43;
}

} else {

VAR44 = VAR48;
break;
}

case VAR53:
VAR13.VAR54 = argv[VAR33];
if ((VAR2 = FUN19(VAR10, &VAR12,
&VAR13)) == -1 ||
VAR12.VAR37 == NULL) {

VAR13.VAR54 = NULL;
FUN20(VAR10);

if (VAR44 == VAR53) {
VAR44 = VAR45;
goto VAR43;
}

} else {

VAR44 = VAR53;
break;
}
}

if (VAR2 == 0 && VAR12.VAR37) {
if ((VAR32) && (strcmp(VAR12.VAR37,
VAR35) == 0) && (FUN14(
VAR12.VAR40) == 0)) {
VAR15++;
VAR17 = FUN15(&VAR12);
VAR17->VAR42 = VAR18;
VAR18 = VAR17;
} else {
VAR19 = FUN13(argv[VAR33],
VAR12.VAR37, VAR6, VAR10);
if (VAR19 > VAR41)
VAR41 = VAR19;
}
} else if (VAR2 == -1 ||
VAR12.VAR37 == NULL) {
VAR28 =
FUN23(argv[VAR33]);
VAR19 = FUN13(argv[VAR33], VAR28,
VAR6, VAR10);

if (VAR19 > VAR41)
VAR41 = VAR19;
} else
FUN16(VAR2);
} else {
VAR19 = FUN13(argv[VAR33], VAR28,
VAR6, NULL);

if (VAR19 > VAR41)
VAR41 = VAR19;
}
VAR33++;
}
if (VAR10 != NULL)
fclose(VAR10);
if ((VAR32) && (VAR41 == 0)) {
FUN17(&VAR18, VAR15);
}
}
return (VAR41);
}