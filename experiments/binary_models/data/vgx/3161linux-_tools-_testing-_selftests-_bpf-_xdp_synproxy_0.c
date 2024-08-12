static void FUN1(int argc, char *argv[], unsigned int *VAR1, VAR2 *VAR3,
VAR4 *VAR5, char **VAR6, bool *VAR7, bool *VAR8)
{
static struct option VAR9[] = {
{ "", VAR10, NULL, '' },
{ "", VAR11, NULL, '' },
{ "", VAR11, NULL, '' },
{ "", VAR11, NULL, 4 },
{ "", VAR11, NULL, 6 },
{ "", VAR11, NULL, '' },
{ "", VAR11, NULL, '' },
{ "", VAR11, NULL, '' },
{ "", VAR10, NULL, '' },
{ "", VAR10, NULL, '' },
{ NULL, 0, NULL, 0 },
};
unsigned long VAR12, VAR13, VAR14;
unsigned long long VAR15;
unsigned int VAR16 = 0;

if (argc < 2)
FUN2(argv[0]);

*VAR1 = 0;
*VAR3 = 0;
*VAR5 = 0;
*VAR6 = NULL;
*VAR7 = false;
*VAR8 = false;

while (true) {
int VAR17;

VAR17 = getopt_long(argc, argv, "", VAR9, NULL);
if (VAR17 == -1)
break;

switch (VAR17) {
case '':
FUN2(argv[0]);
break;
case '':
*VAR1 = FUN3(VAR18);
if (*VAR1 == 0)
FUN2(argv[0]);
break;
case '':
*VAR3 = FUN4(argv[0], VAR18, VAR19);
if (*VAR3 == 0)
FUN2(argv[0]);
break;
case 4:
VAR12 = FUN4(argv[0], VAR18, VAR20);
VAR16 |= 1 << 0;
break;
case 6:
VAR15 = FUN4(argv[0], VAR18, VAR20);
VAR16 |= 1 << 1;
break;
case '':
VAR13 = FUN4(argv[0], VAR18, 14);
VAR16 |= 1 << 2;
break;
case '':
VAR14 = FUN4(argv[0], VAR18, VAR21);
VAR16 |= 1 << 3;
break;
case '':
*VAR6 = VAR18;
break;
case '':
*VAR7 = true;
break;
case '':
*VAR8 = true;
break;
default:
FUN2(argv[0]);
}
}
if (VAR22 < argc)
FUN2(argv[0]);

if (VAR16 == 0xf) {
if (VAR12 == 0 || VAR15 == 0 || VAR13 == 0 || VAR14 == 0)
FUN2(argv[0]);
*VAR5 = (VAR15 << 32) | (VAR14 << 24) | (VAR13 << 16) | VAR12;
} else if (VAR16 != 0) {
FUN2(argv[0]);
}

if (*VAR1 != 0 && *VAR3 != 0)
FUN2(argv[0]);
if (*VAR1 == 0 && *VAR3 == 0)
FUN2(argv[0]);
}