static int FUN1(int argc, char **argv)
{
VAR1 *VAR2 = NULL;
int VAR3, VAR4 = 0;
char *VAR5 = NULL;
VAR6 *VAR7 = NULL;
VAR8 *VAR9 = NULL;
const char *VAR10 = NULL, *VAR11, *VAR12;
int VAR13;
bool VAR14;
bool VAR15 = false, VAR16 = false;
VAR17 *VAR18 = NULL;
VAR19 *VAR20 = NULL;
bool VAR21 = false;
bool VAR22 = false;

VAR12 = VAR23;
for (;;) {
static const struct option VAR24[] = {
{"", VAR25, 0, ''},
{"", VAR26, 0, VAR27},
{"", VAR25, 0, VAR28},
{"", VAR25, 0, VAR29},
{0, 0, 0, 0}
};
VAR3 = getopt_long(argc, argv, "",
VAR24, NULL);
if (VAR3 == -1) {
break;
}

switch (VAR3) {
case '':
FUN2(argv[VAR30 - 1]);
break;
case '':
FUN3(argv[VAR30 - 1]);
break;
case '':
FUN4();
break;
case '':
if (FUN5(&VAR5, VAR31) < 0) {
VAR4 = -1;
goto VAR32;
}
break;
case '':
VAR10 = VAR31;
break;
case '':
VAR12 = VAR31;
break;
case '':
VAR16 = true;
break;
case '':
VAR15 = true;
break;
case VAR27:
FUN6(VAR31);
break;
case VAR28:
VAR21 = true;
break;
case VAR29:
VAR22 = true;
break;
}
}

if (!VAR5) {
FUN7("");
}

if (VAR15) {
VAR16 = false;
}
FUN8(VAR16, 1.0);

VAR11 = (VAR30 == argc - 1) ? argv[argc - 1] : NULL;
if (VAR10 && FUN9(VAR5)) {

VAR4 = FUN10(VAR10);
goto VAR33;
}

if (VAR30 != argc - 1) {
FUN11("");
VAR4 = -1;
goto VAR33;
}

VAR13 = VAR34;
VAR4 = FUN12(VAR12, &VAR13, &VAR14);
if (VAR4 < 0) {
FUN11("", VAR12);
goto VAR33;
}

VAR18 = FUN13(VAR21, VAR11, VAR10, VAR13, VAR14, VAR15,
false);
if (!VAR18) {
VAR4 = -1;
goto VAR33;
}
VAR20 = FUN14(VAR18);

VAR10 = VAR20->VAR35->VAR36;

if (FUN9(VAR5)) {

VAR4 = FUN10(VAR10);
goto VAR33;
}

if (!VAR20->VAR35->VAR37) {
FUN11("",
VAR10);
VAR4 = -1;
goto VAR33;
}


assert(VAR20->VAR35->VAR7);

VAR7 = FUN15(VAR7, VAR20->VAR35->VAR7);
VAR9 = FUN16(VAR7, NULL, 0, &VAR38);
if (!FUN17(VAR9, VAR5, NULL, &VAR2)) {

VAR7 = FUN15(VAR7, VAR20->VAR35->VAR39);
FUN18(VAR9);
VAR9 = FUN16(VAR7, NULL, 0, &VAR38);
if (FUN17(VAR9, VAR5, NULL, NULL)) {
FUN19(&VAR2,
"");
}

FUN20(VAR2);
VAR4 = -1;
goto VAR33;
}


FUN21(0.VAR40, 0);
VAR4 = FUN22(VAR20, VAR9, &VAR41, NULL, VAR22, &VAR2);
FUN21(100.VAR40, 0);
if (VAR4 < 0) {
FUN20(VAR2);
goto VAR33;
}

VAR33:
FUN23();

VAR32:
FUN24(VAR18);
FUN18(VAR9);
FUN25(VAR7);
FUN26(VAR5);

if (VAR4) {
return 1;
}
return 0;
}