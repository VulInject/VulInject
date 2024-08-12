static int
FUN1(int argc, char **argv)
{
struct sockconfig_filter_props VAR1;
VAR2 *VAR3;
size_t VAR4, VAR5;
char *VAR6, *VAR7, *VAR8;
int VAR9;

if (argc == 1) {
if (FUN2(VAR10, argv[0], 0,
0, 0) < 0) {
switch (VAR11) {
case VAR12:
fprintf(VAR13,
FUN3(""
""), argv[0]);
break;
default:
FUN4("");
break;
}
return (1);
}
return (0);
}

if (argc < 4 || argc > 5)
return (1);


if (strlen(argv[1]) >= VAR14) {
fprintf(VAR13,
FUN3(""),
argv[1]);
return (1);
}
VAR1.VAR15 = argv[1];


if (strcmp(argv[2], "") == 0) {
VAR1.VAR16 = VAR17;
if (argc == 5) {

if (strcmp(argv[3], "") == 0) {
VAR1.VAR18 = VAR19;
} else if (strcmp(argv[3], "") == 0) {
VAR1.VAR18 = VAR20;
} else {
if (FUN5(argv[3], "", 6) == 0) {
VAR1.VAR18 = VAR21;
} else if (FUN5(argv[3], "", 5) == 0) {
VAR1.VAR18 = VAR22;
} else {
fprintf(VAR13,
FUN3(""
""), argv[3]);
return (1);
}

VAR6 = strchr(argv[3], '');
if (VAR6 == NULL ||
(strlen(++VAR6) == 0) ||
(strlen(VAR6) >= VAR23)) {
fprintf(VAR13,
FUN3(""
""),
argv[3]);
return (1);
}

VAR1.VAR24 = VAR6;
}
} else {
VAR1.VAR18 = VAR25;
}
} else if (strcmp(argv[2], "") == 0) {
VAR1.VAR16 = VAR26;
VAR1.VAR18 = VAR25;

if (argc == 5) {
fprintf(VAR13,
FUN3(""
""));
return (1);
}
} else {
fprintf(VAR13, FUN3(""),
argv[2]);
return (1);
}


VAR5 = 4;
VAR3 = calloc(VAR5, sizeof (VAR2));
if (VAR3 == NULL) {
FUN4("");
return (1);
}

VAR4 = 0;
VAR8 = argv[(argc == 4) ? 3 : 4];
while ((VAR7 = FUN6(&VAR8, "")) != NULL) {
int VAR27;
char *VAR28;

if (VAR4 == VAR5) {
VAR2 *new;

VAR5 *= 2;
new = realloc(VAR3,
VAR5 * sizeof (VAR2));
if (new == NULL) {
FUN4("");
free(VAR3);
return (1);
}
VAR3 = new;
}
VAR9 = 0;
while ((VAR28 = FUN6(&VAR7, "")) != NULL && VAR9 < 3) {
VAR27 = FUN7(VAR28);
if (VAR27 == -1) {
fprintf(VAR13, FUN3(""));
free(VAR3);
return (1);
}
switch (VAR9) {
case 0:	VAR3[VAR4].VAR29 = VAR27; break;
case 1:	VAR3[VAR4].VAR30 = VAR27; break;
case 2:	VAR3[VAR4].VAR31 = VAR27; break;
}
VAR9++;
}
if (VAR9 != 3) {
fprintf(VAR13, FUN3(""));
free(VAR3);
return (1);
}
VAR4++;
}
if (VAR4 == 0) {
fprintf(VAR13, FUN3(""));
free(VAR3);
return (1);
}
VAR1.VAR32 = VAR4;
VAR1.VAR33 = VAR3;

if (FUN2(VAR34, argv[0], &VAR1, 0, 0) < 0) {
switch (VAR11) {
case VAR35:
fprintf(VAR13,
FUN3(""));
break;
case VAR36:
fprintf(VAR13,
FUN3(""
""), argv[0]);
break;
case VAR37:
fprintf(VAR13, FUN3(""
""));
break;
default:
FUN4("");
break;
}
free(VAR3);
return (1);
}
free(VAR3);
return (0);
}