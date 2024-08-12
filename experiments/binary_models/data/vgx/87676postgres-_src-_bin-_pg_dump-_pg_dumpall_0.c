int
main(int argc, char *argv[])
{
static struct option VAR1[] = {
{"", VAR2, NULL, ''},
{"", VAR2, NULL, ''},
{"", VAR3, NULL, ''},
{"", VAR3, NULL, ''},
{"", VAR2, NULL, ''},
{"", VAR3, NULL, ''},
{"", VAR3, NULL, ''},
{"", VAR3, NULL, ''},
{"", VAR2, NULL, ''},
{"", VAR3, NULL, ''},
{"", VAR2, NULL, ''},
{"", VAR2, NULL, ''},
{"", VAR3, NULL, ''},
{"", VAR2, NULL, ''},
{"", VAR3, NULL, ''},
{"", VAR2, NULL, ''},
{"", VAR2, NULL, ''},
{"", VAR2, NULL, ''},
{"", VAR2, NULL, ''},
{"", VAR2, NULL, ''},


{"", VAR2, &VAR4, 1},
{"", VAR2, &VAR5, 1},
{"", VAR2, &VAR4, 1},
{"", VAR2, &VAR6, 1},
{"", VAR2, &VAR7, 1},
{"", VAR3, NULL, 6},
{"", VAR3, NULL, 5},
{"", VAR2, &VAR8, 1},
{"", VAR2, &VAR9, 1},
{"", VAR3, NULL, 2},
{"", VAR2, &VAR10, 1},
{"", VAR2, &VAR11, 1},
{"", VAR2, &VAR12, 1},
{"", VAR2, &VAR13, 1},
{"", VAR3, NULL, 3},
{"", VAR2, &VAR14, 1},
{"", VAR2, &VAR15, 1},
{"", VAR2, &VAR16, 1},
{"", VAR2, &VAR17, 1},
{"", VAR2, &VAR18, 1},
{"", VAR2, &VAR19, 1},
{"", VAR2, NULL, 4},
{"", VAR2, &VAR20, 1},
{"", VAR2, &VAR21, 1},
{"", VAR2, &VAR22, 1},
{"", VAR3, NULL, 7},

{NULL, 0, NULL, 0}
};

char	   *VAR23 = NULL;
char	   *VAR24 = NULL;
char	   *VAR25 = NULL;
char	   *VAR26 = NULL;
char	   *VAR27 = NULL;
const char *VAR28 = NULL;
trivalue	VAR29 = VAR30;
bool		VAR31 = false;
bool		VAR32 = false;
bool		VAR33 = false;
bool		VAR34 = false;
VAR35	   *VAR36;
int			VAR37;
const char *VAR38;
int			VAR39,
VAR40;
int			VAR41;

FUN1(argv[0]);
FUN2(VAR42);
FUN3(argv[0], FUN4(""));
VAR43 = FUN5(argv[0]);

if (argc > 1)
{
if (strcmp(argv[1], "") == 0 || strcmp(argv[1], "") == 0)
{
FUN6();
FUN7(0);
}
if (strcmp(argv[1], "") == 0 || strcmp(argv[1], "") == 0)
{
FUN8("" VAR44);
FUN7(0);
}
}

if ((VAR40 = FUN9(argv[0], "", VAR45,
VAR46)) < 0)
{
char		VAR47[VAR48];

if (FUN10(argv[0], VAR47) < 0)
FUN11(VAR47, VAR43, sizeof(VAR47));

if (VAR40 == -1)
FUN12(""%VAR49\""%VAR49\"",
"", VAR43, VAR47);
else
FUN12(""%VAR49\""%VAR49\"",
"", VAR47, VAR43);
}

VAR50 = FUN13();

while ((VAR39 = getopt_long(argc, argv, "", VAR1, &VAR41)) != -1)
{
switch (VAR39)
{
case '':
VAR31 = true;
FUN14(VAR50, "");
break;

case '':
VAR51 = true;
break;

case '':
VAR52 = FUN15(VAR53);
break;

case '':
VAR28 = FUN15(VAR53);
FUN14(VAR50, "");
FUN16(VAR50, VAR53);
break;

case '':
VAR54 = FUN15(VAR53);
FUN14(VAR50, "");
FUN16(VAR50, VAR54);
break;

case '':
VAR32 = true;
break;

case '':
VAR23 = FUN15(VAR53);
break;

case '':
VAR26 = FUN15(VAR53);
break;

case '':
FUN14(VAR50, "");
break;

case '':
VAR24 = FUN15(VAR53);
break;

case '':
VAR33 = true;
break;

case '':
FUN14(VAR50, "");
break;

case '':
FUN14(VAR50, "");
FUN16(VAR50, VAR53);
break;

case '':
VAR34 = true;
break;

case '':
VAR25 = FUN15(VAR53);
break;

case '':
VAR55 = true;
FUN17();
FUN14(VAR50, "");
break;

case '':
VAR29 = VAR56;
FUN14(VAR50, "");
break;

case '':
VAR29 = VAR57;
FUN14(VAR50, "");
break;

case '':
VAR58 = true;
FUN14(VAR50, "");
break;

case 0:
break;

case 2:
FUN14(VAR50, "");
FUN16(VAR50, VAR53);
break;

case 3:
VAR27 = FUN15(VAR53);
FUN14(VAR50, "");
FUN16(VAR50, VAR27);
break;

case 4:
VAR59 = false;
FUN14(VAR50, "");
break;

case 5:
FUN14(VAR50, "");
FUN16(VAR50, VAR53);
break;

case 6:
FUN18(&VAR60, VAR53);
break;

case 7:
FUN14(VAR50, "");
FUN16(VAR50, VAR53);
break;

default:

FUN19(""%VAR49 --VAR61\"", VAR43);
FUN7(1);
}
}


if (VAR62 < argc)
{
FUN20(""%VAR49\"",
argv[VAR62]);
FUN19(""%VAR49 --VAR61\"", VAR43);
FUN7(1);
}

if (VAR60.VAR63 != NULL &&
(VAR32 || VAR33 || VAR34))
{
FUN20("");
FUN19(""%VAR49 --VAR61\"", VAR43);
FUN7(1);
}


if (VAR32 && VAR33)
{
FUN20("");
FUN19(""%VAR49 --VAR61\"", VAR43);
FUN7(1);
}

if (VAR32 && VAR34)
{
FUN20("");
FUN19(""%VAR49 --VAR61\"", VAR43);
FUN7(1);
}

if (VAR8 && !VAR51)
FUN12("");

if (VAR33 && VAR34)
{
FUN20("");
FUN19(""%VAR49 --VAR61\"", VAR43);
FUN7(1);
}


if (VAR17)
sprintf(VAR64, "", VAR65);
else
sprintf(VAR64, "", VAR66);


if (VAR5)
FUN14(VAR50, "");
if (VAR4)
FUN14(VAR50, "");
if (VAR6)
FUN14(VAR50, "");
if (VAR7)
FUN14(VAR50, "");
if (VAR9)
FUN14(VAR50, "");
if (VAR10)
FUN14(VAR50, "");
if (VAR11)
FUN14(VAR50, "");
if (VAR12)
FUN14(VAR50, "");
if (VAR13)
FUN14(VAR50, "");
if (VAR14)
FUN14(VAR50, "");
if (VAR15)
FUN14(VAR50, "");
if (VAR16)
FUN14(VAR50, "");
if (VAR18)
FUN14(VAR50, "");
if (VAR19)
FUN14(VAR50, "");
if (VAR20)
FUN14(VAR50, "");
if (VAR21)
FUN14(VAR50, "");
if (VAR22)
FUN14(VAR50, "");


if (VAR26)
{
VAR36 = FUN21(VAR26, VAR52, VAR23, VAR24, VAR25,
VAR29, false);

if (!VAR36)
FUN12(""%VAR49\"", VAR26);
}
else
{
VAR36 = FUN21("", VAR52, VAR23, VAR24, VAR25,
VAR29, false);
if (!VAR36)
VAR36 = FUN21("", VAR52, VAR23, VAR24, VAR25,
VAR29, true);

if (!VAR36)
{
FUN20(""VAR67\""VAR68\""
"");
FUN19(""%VAR49 --VAR61\"", VAR43);
FUN7(1);
}
}


FUN22(VAR36, &VAR60,
&VAR69);


if (VAR54)
{
VAR70 = fopen(VAR54, VAR71);
if (!VAR70)
FUN12(""%VAR49\"",
VAR54);
}
else
VAR70 = VAR72;


if (VAR28)
{
if (FUN23(VAR36, VAR28) < 0)
FUN12(""%VAR49\"",
VAR28);
}


VAR37 = FUN24(VAR36);
VAR38 = FUN25(VAR36, "");
if (!VAR38)
VAR38 = "";


if (VAR27)
{
PQExpBuffer VAR73 = FUN13();

FUN26(VAR73, "", FUN27(VAR27));
FUN28(VAR36, VAR73->VAR74);
FUN29(VAR73);
}


if (VAR12)
FUN28(VAR36, "");

fprintf(VAR70, "");
if (VAR55)
FUN30("");




fprintf(VAR70, "");


fprintf(VAR70, "",
FUN31(VAR37));
fprintf(VAR70, "", VAR38);
if (strcmp(VAR38, "") == 0)
fprintf(VAR70, "");
fprintf(VAR70, "");

if (!VAR31)
{

if (VAR51)
{
if (!VAR32 && !VAR33 && !VAR34)
FUN32(VAR36);

if (!VAR33 && !VAR11)
FUN33(VAR36);

if (!VAR34)
FUN34(VAR36);
}


if (!VAR34)
{

FUN35(VAR36);


FUN36(VAR36);


if (VAR75 >= 150000 && !VAR58)
FUN37(VAR36);
}


if (!VAR33 && !VAR11)
FUN38(VAR36);
}

if (!VAR32 && !VAR33 && !VAR34)
FUN39(VAR36);

PQfinish(VAR36);

if (VAR55)
FUN30("");
fprintf(VAR70, "");

if (VAR54)
{
fclose(VAR70);


if (VAR59)
(void) FUN40(VAR54, false);
}

FUN7(0);
}