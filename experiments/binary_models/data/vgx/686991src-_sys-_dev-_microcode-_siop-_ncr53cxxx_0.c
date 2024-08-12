main (int argc, char *argv[])
{
int	VAR1;
struct VAR2 *VAR3;

if (argc < 2 || argv[1][0] == '')
FUN1();
VAR4 = argv[1];
VAR5 = fopen (VAR4, "");
if (VAR5 == NULL) {
FUN2 ("");
fprintf (VAR6, "", argv[1]);
FUN3 (1);
}

for (VAR1 = 2; VAR1 < argc; ++VAR1) {
if (argv[VAR1][0] != '')
FUN1();
switch (argv[VAR1][1]) {
case '':
case '':
VAR7 = argv[VAR1][1] == '';
if (VAR1 + 1 >= argc || argv[VAR1 + 1][0] == '')
VAR8 = FUN4 (VAR4, "");
else {
VAR8 = argv[VAR1 + 1];
++VAR1;
}
break;
case '':
if (VAR1 + 1 >= argc || argv[VAR1 + 1][0] == '')
VAR9 = FUN4 (VAR4, "");
else {
VAR9 = argv[VAR1 + 1];
++VAR1;
}
break;
case '':
if (VAR1 + 1 >= argc || argv[VAR1 + 1][0] == '')
VAR10 = FUN4 (VAR4, "");
else {
VAR10 = argv[VAR1 + 1];
++VAR1;
}
break;
case '':
if (VAR1 + 1 == argc)
FUN1();
FUN5(argv[VAR1 +1]);
if (VAR11 == 0) {
fprintf(VAR6,"",
argv[0], argv[VAR1 +1]);
FUN3(1);
}
++VAR1;
break;
default:
fprintf (VAR6, "",
argv[VAR1][1]);
FUN1();
}
}
if (VAR8)
VAR12 = fopen (VAR8, "");
if (VAR9)
VAR13 = fopen (VAR9, "");
if (VAR10)
VAR14 = fopen (VAR10, "");
else
VAR14 = VAR6;

if (VAR12) {
time_t VAR15;

fprintf(VAR12, "");
fprintf(VAR12, "");
}

while (fgets (VAR16, sizeof (VAR16), VAR5)) {
++VAR17;
if (VAR13)
fprintf (VAR13, "", VAR17, VAR16);
VAR18 = 0;
FUN6 ();
if (VAR19) {
int	VAR1;

fprintf (VAR13, "", VAR19);
for (VAR1 = 0; VAR1 < VAR19; ++VAR1) {
fprintf (VAR13, "", VAR1);
if (VAR20[VAR1].VAR21)
fprintf (VAR13,"", VAR20[VAR1].VAR21);
else
fprintf (VAR13, "", VAR20[VAR1].VAR22);
}
if (VAR19 >= 2 && VAR20[0].VAR21 == 0 &&
VAR20[1].VAR21 == '') {
FUN7 (VAR20[0].VAR22, VAR23, VAR24, VAR25);
VAR26 += 2;
}
if (VAR26 < VAR19)
FUN8 ();
}

}
FUN9 ();
FUN10 ();
if (VAR12 && !VAR7) {
fprintf (VAR12, "", VAR27);
fprintf (VAR12, "", VAR28);
fprintf (VAR12, "");
VAR3 = VAR29;
while (VAR3) {
fprintf (VAR12, "", VAR3->VAR30 / 4);
VAR3 = VAR3->VAR31;
}
fprintf (VAR12, "");
}
FUN11 ();
FUN3(0);
}