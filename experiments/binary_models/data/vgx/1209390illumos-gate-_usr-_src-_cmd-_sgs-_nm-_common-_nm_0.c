static void FUN1(char *);
static void FUN2(const char *, char *);
static char VAR1[512];
static char VAR2[512];
static int FUN3(const char *VAR3);
static void FUN4(char *);
static char *FUN5(char *, const char *);




int
main(int argc, char *argv[], char *VAR4[])
{
char	*VAR5 = VAR6; 
int	VAR7;
FMT_T	VAR8;


(void) FUN6(argv, VAR4);


VAR9[VAR10][VAR11] = "";
VAR9[VAR10][VAR12] = "";
VAR9[VAR10][VAR13] = "";
VAR9[VAR14][VAR11] = "";
VAR9[VAR14][VAR12] = "";
VAR9[VAR14][VAR13] = "";
VAR9[VAR15][VAR11] = "";
VAR9[VAR15][VAR12] = "";
VAR9[VAR15][VAR13] = "";
VAR9[VAR16][VAR11] = "";
VAR9[VAR16][VAR12] = "";
VAR9[VAR16][VAR13] = "";
VAR9[VAR17][VAR11] = "";
VAR9[VAR17][VAR12] = "";
VAR9[VAR17][VAR13] = "";
VAR9[VAR18][VAR11] = "";
VAR9[VAR18][VAR12] = "";
VAR9[VAR18][VAR13] = "";
VAR9[VAR19][VAR11] = "";
VAR9[VAR19][VAR12] = "";
VAR9[VAR19][VAR13] = "";

VAR20 = argv[0];

(void) FUN7(VAR21, "");
(void) FUN8(VAR22);

while ((VAR7 = getopt(argc, argv, VAR5)) != -1) {
switch (VAR7) {
case '':
if (FUN9(VAR23)) {
VAR24 = VAR23;
} else {
(void) fprintf(VAR25, FUN10(
""),
VAR20);
}
break;
case '':
if (FUN9(VAR26)) {
VAR24 = VAR26;
} else {
(void) fprintf(VAR25, FUN10(
""),
VAR20);
}
break;
case '':
VAR27 = 1;
break;
case '':
if (!VAR28 && !VAR29) {
VAR30 = 1;
} else {
(void) fprintf(VAR25, FUN10(
""),
VAR20);
}
break;
case '':
if (!VAR30 && !VAR29) {
VAR28 = 1;
} else {
(void) fprintf(VAR25, FUN10(
""),
VAR20);
}
break;
case '':
if (!VAR28 && !VAR30) {
VAR29 = 1;
} else {
(void) fprintf(VAR25, FUN10(
""),
VAR20);
}
break;
case '':
if (!VAR31 && !VAR32) {
VAR33 = 1;
} else {
(void) fprintf(VAR25, FUN10(
""),
VAR20);
}
break;
case '':
if (!VAR33 && !VAR32) {
VAR31 = 1;
} else {
(void) fprintf(VAR25, FUN10(
""),
VAR20);
}
break;
case '':
if (!VAR33 && !VAR31) {
VAR32 = 1;
} else {
(void) fprintf(VAR25, FUN10(
""),
VAR20);
}
break;
case '':
if (VAR34) {
VAR34 = 0;
(void) fprintf(VAR25, FUN10(
""),
VAR20);
}
VAR35 = 1;
break;
case '':
VAR36 = 1;
break;
case '':
if (VAR37 == 1) {
(void) fprintf(VAR25, FUN10(
""));
} else {
VAR38 = 1;
}
break;
case '':
if (VAR38 == 1) {
(void) fprintf(VAR25, FUN10(
""));
} else {
VAR37 = 1;
}
break;
case '':
VAR39 = 1;
break;
case '':
if (VAR40 == 1) {
(void) fprintf(VAR25, FUN10(
""));
} else {
VAR41 = 1;
}
break;
case '':
if (VAR41 == 1) {
(void) fprintf(VAR25, FUN10(
""));
} else {
VAR40 = 1;
}
break;
case '':
VAR42 = 1;
break;
case '':
VAR43 = 1;
break;
case '':
VAR44 = 1;
(void) fprintf(VAR25, "",
(const char *)VAR45,
(const char *)VAR46);
break;
case '':	
break;
case '':
if (!VAR35) {
VAR34 = 1;
} else {
(void) fprintf(VAR25, FUN10(
""),
VAR20);
}
break;
case '':
break;
case '':
if (strcmp(VAR47, "") == 0) {
VAR8 = VAR23;
} else if (strcmp(VAR47, "") == 0) {
VAR8 = VAR48;
} else if (strcmp(VAR47, "") == 0) {
VAR8 = VAR26;
} else {
VAR8 = VAR49;
}
if (VAR8 == VAR49) {
VAR50 += 1;
(void) fprintf(VAR25, FUN10(
""
""), VAR47);
} else if (FUN9(VAR8)) {
VAR24 = VAR8;
} else {
(void) fprintf(VAR25, FUN10(
""));
}
break;
case '':
VAR50 += 1;
(void) fprintf(VAR25, FUN10(
""), VAR51);
break;
case '':
VAR50 += 1;
break;
default:
break;
}
}

if (VAR50 || (VAR52 >= argc)) {
if (!(VAR44 && (argc == 2))) {
FUN11();
FUN12(VAR53);
}
}


if (VAR24 == VAR49)
VAR24 = VAR37 ? VAR26 : VAR48;


while (VAR52 < argc) {
FUN13(argv[VAR52]);
VAR52++;
}
return (VAR50);
}