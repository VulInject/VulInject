int
main(int argc, char *argv[])
{
int VAR1, VAR2, VAR3, VAR4 = 0;
char VAR5[VAR6];
int (*move)(char *, char *);



if (VAR7 = strrchr(argv[0], ''))
++VAR7;
else
VAR7 = argv[0];



(void) FUN1(VAR8, "");
(void) FUN2(VAR9);
if (FUN3() < 0) {
(void) fprintf(VAR10, FUN4(VAR11),
strerror(VAR12));
FUN5(3);
}

if (FUN6(VAR7, ""))
VAR13 = VAR14;
else if (FUN6(VAR7, ""))
VAR15 = VAR14;
else if (FUN6(VAR7, ""))
VAR16 = VAR14;
else {
(void) fprintf(VAR10,
FUN4(""
""), VAR7);
FUN5(1);
}



if (VAR16) {
while ((VAR1 = getopt(argc, argv, "")) != VAR17)
switch (VAR1) {
case '':
VAR18++;
break;
case '':
VAR19++;
break;
case '':
VAR20++;
VAR21 = 1;
VAR22 = 0;
VAR23 = 0;
if (VAR22 == 0)
VAR21 = 1;
break;
case '':

VAR24 = VAR25 = 0;
VAR26++;
break;
case '':
VAR26 = VAR25 = 0;
VAR24++;
break;
case '':
VAR24 = VAR26 = 0;
VAR25++;
break;
case '':

VAR27++;

case '':
VAR28++;
break;
case '':
VAR24 = VAR26 = 0;
VAR20++;
VAR25++;
VAR27++;
VAR28++;
break;
case '':
VAR22++;
VAR21 = 0;
VAR20 = 0;
break;
case '':
VAR23++;
VAR21 = 0;
VAR20 = 0;
break;
default:
VAR4++;
}


if ((VAR26 || VAR24 || VAR25) && !(VAR27 || VAR28)) {
VAR4++;
}

} else if (VAR13) {
while ((VAR1 = getopt(argc, argv, "")) != VAR17)
switch (VAR1) {
case '':
VAR29++;
VAR19 = 0;
break;
case '':
VAR19++;
VAR29 = 0;
break;
default:
VAR4++;
}
} else { 
while ((VAR1 = getopt(argc, argv, "")) != VAR17)
switch (VAR1) {
case '':
VAR29++;
break;
case '':

break;
case '':
VAR30++;
break;
default:
VAR4++;
}
}


if (VAR13 && VAR31 < argc && (strcmp(argv[VAR31], "") == 0))
VAR31++;



argc -= VAR31;
argv  = &argv[VAR31];

if ((argc < 2 && VAR15 != VAR14) || (argc < 1 && VAR15 == VAR14)) {
(void) fprintf(VAR10,
FUN4(""),
VAR7, argc);
FUN7();
}

if (VAR4 != 0)
FUN7();



if (argc > 2) {
if (FUN8(argv[argc-1], &VAR32) < 0) {
(void) fprintf(VAR10,
FUN4(""),
VAR7, argv[argc-1]);
FUN5(2);
}

if (!FUN9(VAR32)) {
(void) fprintf(VAR10,
FUN4(""),
VAR7, argv[argc-1]);
FUN7();
}
}

if (strlen(argv[argc-1]) >= VAR6) {
(void) fprintf(VAR10,
FUN4(""
""), VAR7, argv[argc-1], VAR6);
FUN5(78);
}

if (argc == 1) {
if (!VAR15)
FUN7();
(void) strcpy(VAR5, "");
} else {
(void) strcpy(VAR5, argv[--argc]);
}


if (VAR15)
move = VAR33;
else
move = VAR34;

VAR3 = 0;
for (VAR2 = 0; VAR2 < argc; VAR2++) {
VAR35 = NULL;
VAR36 = 1;
VAR3 += move(argv[VAR2], VAR5);
}



return (VAR3?2:0);
}