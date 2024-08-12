int
main(int argc, char *argv[])
{
struct VAR1 *VAR2 = NULL;
struct stat VAR3;
int VAR4, VAR5, VAR6;
static char *VAR7 = VAR8;
char *VAR9;

(void) FUN1(VAR10, "");
(void) FUN2(VAR11);


if (FUN3(0, VAR12, (char *)NULL) < 0) {
(void) fprintf(VAR13,
FUN4(""
""),
argv[0]);
FUN5(VAR14);
}
(void) FUN6(VAR15);

if (argc == 2) {
if (strcmp(argv[1], "") == 0) {
FUN7();
} else if (strcmp(argv[1], "") == 0) {
FUN8(VAR16, FUN4(""),
VAR17 / 100000,
(VAR17 % 10000) / 1000,
(VAR17 % 1000) / 100);
}
}
if (argc < 3)
FUN7();


if ((VAR9 = getenv("")) != NULL) {
VAR18 = FUN9(VAR9);
if (VAR18 < 1)
VAR18 = 1;
}

VAR5 = FUN10();
if (VAR5)
FUN5(VAR14);

VAR19.VAR20 = VAR21;

FUN11(&VAR22, sizeof (VAR22));
VAR22.VAR23 = VAR17;		
VAR22.VAR24 = (VAR25)-1;
VAR22.VAR26 = (VAR27)-1;

VAR5 = FUN12(&VAR2);
if (VAR5)
FUN5(VAR14);


if (argc < 3)
FUN7();
VAR5 = FUN13(VAR2, argv[argc - 2],
VAR28, VAR28, VAR29, NULL);
if (VAR5)
FUN5(VAR30);

VAR5 = FUN14(VAR2);
if (VAR5)
FUN5(VAR30);

while ((VAR4 = getopt(argc, argv, "")) != -1) {
switch (VAR4) {
case '':
VAR31++;
break;

case '':
VAR32++;
break;

case '':
VAR33 |= VAR34;
break;

case '': {
char *VAR35, *VAR36, *VAR37;
int VAR38;

for (VAR37 = VAR39; VAR37 != NULL; VAR37 = VAR35) {
VAR36 = strchr(VAR37, '');
if (VAR36) {
VAR35 = VAR36 + 1;
*VAR36 = '';
} else
VAR35 = NULL;
VAR38 = FUN15(VAR2, &VAR22, VAR37);
if (VAR38 != 0)
FUN5(VAR30);

if (VAR36)
*VAR36 = '';
}
break;
}

case '':
default:
FUN7();
}
}

if (VAR31)
VAR33 |= VAR40;

if (VAR33 & VAR34) {
char *VAR41;

if (VAR41 = strstr(VAR21, "")) {
if (*(VAR41+2) == '' || *(VAR41+2) == '')
*(VAR41+1) = '';
}
}

if (VAR42 + 2 != argc)
FUN7();

(void) snprintf(VAR43, sizeof (VAR43), "
VAR2->VAR44, VAR2->VAR45);

VAR19.VAR46 = VAR43;
VAR19.VAR47 = argv[VAR42+1];

if ((FUN16(argv[VAR42+1], VAR48) == NULL) ||
(FUN17(VAR48, &VAR3) == -1)) {
FUN18(VAR49, FUN4(""),
argv[VAR42+1]);
}
if (!FUN19(VAR3.VAR50)) {
VAR51 = VAR52;
FUN18(VAR49, FUN4(""), VAR48);
}


if (VAR22.VAR24 == (VAR25)-1)
VAR22.VAR24 = FUN20();
if (VAR22.VAR26 == (VAR27)-1)
VAR22.VAR26 = FUN21();
if (VAR22.VAR53 == 0)
VAR22.VAR53 = VAR54;
if (VAR22.VAR55 == 0) {
VAR22.VAR55 = VAR22.VAR53;
if (VAR22.VAR55 & VAR56)
VAR22.VAR55 |= VAR57;
if (VAR22.VAR55 & VAR58)
VAR22.VAR55 |= VAR59;
if (VAR22.VAR55 & VAR60)
VAR22.VAR55 |= VAR61;
}

VAR2->VAR62.VAR63 = VAR64;
if (VAR65)
VAR2->VAR66 |= VAR67;


VAR5 = FUN22(VAR2);
if (VAR5)
FUN5(VAR14);


VAR68:
VAR5 = FUN23(VAR2);
if (VAR5 == VAR69 && VAR65 == 0) {
VAR6 = FUN24(VAR2);
if (VAR6 == 0)
goto VAR68;
}
if (VAR5) {
FUN25(FUN4("
VAR5, VAR2->VAR44);
FUN5(VAR14);
}

VAR5 = FUN26(VAR2);
if (VAR5) {
FUN25(FUN4("
VAR5, VAR2->VAR44, VAR2->VAR45);
FUN5(VAR14);
}


VAR22.VAR70 = VAR2->VAR71;


(void) FUN6(VAR72);
VAR6 = FUN27(VAR19.VAR46, VAR19.VAR47,
VAR33, VAR7, &VAR22, sizeof (VAR22),
VAR19.VAR20, VAR73);
(void) FUN6(VAR15);

if (VAR6 < 0) {
if (VAR51 != VAR74) {
FUN18(VAR49, FUN4(""),
VAR19.VAR47);
} else {
struct stat VAR75;
if (FUN17(VAR19.VAR47, &VAR75) < 0 &&
VAR51 == VAR74)
FUN18(VAR49, FUN4(""),
VAR19.VAR47);
else
FUN18(VAR49, FUN4(""),
VAR19.VAR46);
}
}

FUN28(VAR2);
return (0);
}