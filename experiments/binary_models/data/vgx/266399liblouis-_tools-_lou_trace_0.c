int
main(int argc, char **argv) {
int VAR1;
char *VAR2;

int VAR3 = 0;
int VAR4 = 0;
int VAR5 = 0;
int VAR6 = 0;
int VAR7 = 0;
int VAR8 = 0;
int VAR9 = 0;
int VAR10 = 0;
int VAR11 = 0;

const struct option VAR12[] = {
{ "", VAR13, NULL, '' },
{ "", VAR13, NULL, '' },
{ "", VAR13, NULL, '' },
{ "", VAR13, NULL, '' },
{ "", VAR13, &VAR6, VAR14 },
{ "", VAR13, &VAR7, VAR15 },
{ "", VAR13, &VAR8, VAR16 },
{ "", VAR13, &VAR9, VAR17 },
{ "", VAR13, &VAR10, VAR17 },
{ "", VAR13, &VAR11, VAR18 },
{ NULL, 0, NULL, 0 },
};

FUN1(argv[0]);
while ((VAR1 = getopt_long(argc, argv, "", VAR12, NULL)) != -1) {
switch (VAR1) {
case '':
FUN2(
VAR19, VAR20, VAR21, VAR22, VAR23, (char *)NULL);
FUN3(VAR24);
break;
case '':
FUN4();
FUN3(VAR24);
break;
case '':
VAR3 = 1;
break;
case '':
VAR4 = 1;
break;
case 0:
break;
default:
fprintf(VAR25, "", VAR20);
FUN3(VAR26);
break;
}
}
if (VAR10) {
fprintf(VAR25, "", VAR20);
fprintf(VAR25, "", VAR20);
FUN3(VAR26);
}
VAR5 |= VAR6 | VAR7 | VAR8 | VAR9 |
VAR11;
if (VAR3 && VAR4) {
fprintf(VAR25, "", VAR20);
fprintf(VAR25, "", VAR20);
FUN3(VAR26);
}
if (VAR27 != argc - 1) {
if (VAR27 < argc - 1)
fprintf(VAR25, "", VAR20, argv[VAR27 + 1]);
else
fprintf(VAR25, "", VAR20);
fprintf(VAR25, "", VAR20);
FUN3(VAR26);
}
VAR2 = argv[VAR27];
if (!FUN5(VAR2)) {
FUN6();
FUN3(VAR26);
}
FUN7(VAR4, VAR2, VAR5);
FUN6();
FUN3(VAR24);
}