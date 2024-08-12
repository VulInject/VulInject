static bool
FUN1(int argc, char **argv)
{
int VAR1;
bool VAR2 = false;
int VAR3;
struct utsname VAR4;
int VAR5;
int VAR6;
bool VAR7 = false;
unsigned VAR8;
mode_t VAR9;
unsigned VAR10;
bool VAR11;

struct option VAR12[] = {
{"",		VAR13,	NULL, ''},
{"",		VAR14,		NULL, ''},
{"",		VAR14,		NULL, ''},
{"",		VAR14,		NULL, ''},
{"",			VAR14,		NULL,  3 },
{"",		VAR14,		NULL, ''},
{"",		VAR14,		NULL, ''},
{"",	VAR13,	NULL, ''},
{"",		VAR15,	NULL, ''},
{"",		VAR14,		NULL, ''},
{"",	VAR14,		NULL,  2 },
{"",		VAR14,		NULL, ''},
{"",		VAR13,	NULL, ''},
{"",	VAR14,		NULL, ''},
{"",	VAR14,		NULL, ''},
{"",	VAR14,		NULL, ''},
{"",	VAR14,		NULL, ''},
{"",		VAR14,		NULL, ''},
{"",		VAR14,		NULL, ''},
{"",			VAR13,	NULL, ''},
{"",		VAR13,	NULL, ''},
{"",		VAR14,		NULL, ''},
{"",	VAR13,	NULL, ''},
{"",	VAR14,		NULL, ''},
{"",		VAR13,	NULL, ''},
{"",		VAR14,		NULL, ''},
{"",	VAR13,	NULL, ''},
{"",		VAR14,		NULL, ''},
{"",	VAR15,	NULL, ''},
{"",	VAR14,		NULL,  7 },
{"",	VAR14,		NULL, ''},
{"",	VAR14,		NULL,  '' },
{"",		VAR13,	NULL, ''},
{"",		VAR13,	NULL, ''},
{"",		VAR13,	NULL,  4 },
{"",		VAR15,	NULL, ''},
{"",		VAR13,	NULL,  8 },
{"",		VAR15,	NULL,  5 },
{"",		VAR15,	NULL,  6 },
{"",		VAR14,		NULL, ''},
{"",		VAR14,		NULL, ''},

{NULL,			0,			NULL,  0 }
};


VAR6 = VAR16;
VAR11 = true;


while (VAR5 = -1, (VAR1 = getopt_long(argc, argv, ""
""
""
""
""
""
""
""
, VAR12, &VAR5)) != -1) {


if (VAR5 >= 0 && VAR12[VAR5].VAR17 == VAR13 && VAR18 && !VAR18[0])
VAR1 = '';

switch (VAR1) {
case '':
fprintf(VAR19, "", VAR20);
fprintf(VAR19, "", VAR21);
fprintf(VAR19, "", VAR22);
fprintf(VAR19, "",
(VAR23 >> 16) & 0xff,
(VAR23 >>  8) & 0xff,
(VAR23      ) & 0xff);
FUN2(&VAR4);
fprintf(VAR19, "", VAR4.VAR24, VAR4.VAR25, VAR4.VAR26);
FUN3();
fprintf(VAR19, "");
fprintf(VAR19, "", VAR27);
fprintf(VAR19, "", VAR28);
fprintf(VAR19, "", VAR29);
FUN4(0);
break;
case '':
FUN5(argv[0]);
FUN4(0);
break;
case '':
FUN6(VAR30, &VAR31);
VAR2 = true;
break;
case '':
FUN6(VAR32, &VAR31);
break;
case '':
FUN6(VAR33, &VAR31);
break;
case '':
FUN6(VAR34, &VAR31);
break;
case '':
FUN6(VAR35, &VAR31);
break;
case '':
if (!VAR11)
fprintf(VAR19, "", VAR5 == -1 ? "" : VAR12[VAR5].VAR36);


FUN7(VAR37, "");

FUN8(false, argc, argv);
FUN4(0);
case '':
if (FUN9(VAR38, &VAR31))
FUN6(VAR39, &VAR31);
else
FUN6(VAR38, &VAR31);
break;
case '':
FUN6(VAR40, &VAR31);
break;
case '':
FUN6(VAR41, &VAR31);
break;
case '':
if (FUN10(VAR18, &VAR8, 0, VAR42, false) ||
(!FUN11(VAR18, "", 5) &&
FUN10(&VAR18[5], &VAR8, 0, VAR42, false))) {
VAR43 = VAR44[VAR8].VAR8;
VAR2 = true;
} else {
for (VAR10 = 0; VAR10 < sizeof(VAR45) / sizeof(VAR45[0]); VAR10++) {
if (!strcmp(VAR18, VAR45[VAR10].VAR36)) {
VAR43 = VAR45[VAR10].VAR8;
VAR2 = true;
break;
}
}

if (!VAR2)
fprintf(VAR19, "", VAR18);
}
break;
case '':
if (VAR18 && VAR18[0])
VAR46 = VAR18;
else
VAR46 = "";
FUN12(VAR46, NULL, NULL, NULL);
fprintf(VAR19, "");
VAR7 = true;
break;
case 2:		
FUN13();
break;
case '':
FUN6(VAR47, &VAR31);
VAR2 = true;
break;
case '':

VAR9 = FUN14(VAR18);
if (VAR48)
VAR49 = VAR9;
break;
case '':
FUN6(VAR50, &VAR31);
FUN6(VAR40, &VAR31);
FUN6(VAR32, &VAR31);
FUN6(VAR47, &VAR31);
if (VAR18 && VAR18[0]) {
int VAR51 = open(VAR18, VAR52 | VAR53 | VAR54 | VAR55, VAR56 | VAR57 | VAR58 | VAR59);
if (VAR51 == -1) {
fprintf(VAR19, "", VAR18, VAR60);
FUN4(VAR61);
}
FUN15(VAR51, VAR62);
close(VAR51);
}
break;
case '':
VAR63 = VAR18;
break;
case '':
FUN16(VAR64, &VAR65);
break;
case '':
FUN16(VAR66, &VAR65);
break;
case '':
FUN16(VAR67, &VAR65);
break;
case '':
VAR68 = VAR18;
break;
case '':
VAR69 = VAR18;
break;
case '':
FUN6(VAR70, &VAR31);
break;
case '':
VAR71 = VAR18;
break;
case '':
VAR72 = VAR18;
break;
case '':
VAR73 = true;
break;
case '':
VAR74 = VAR18;
break;
case '':
VAR75 = true;
if (VAR18 && VAR18[0])
VAR76 = VAR18;
VAR77;
case '':
VAR78 = true;
break;
case '':
FUN6(VAR79, &VAR31);
break;
case '':
FUN6(VAR80, &VAR31);
break;
case '':
VAR81 = VAR18;
break;
case '':
FUN17(NULL);
break;
case '':
FUN18(VAR82);
VAR82 = FUN19(VAR18);
break;
case 4:			

VAR3 = FUN20(VAR18);
if (VAR3 == -1) {
fprintf(VAR19, "", VAR18);
FUN4(1);
}


FUN21("", VAR3);
FUN4(0);
break;
case 3:			
FUN6(VAR83, &VAR65);
FUN6(VAR66, &VAR65);
FUN6(VAR64, &VAR65);
FUN6(VAR67, &VAR65);
break;
case 5:
if (VAR18 && VAR18[0]) {
if (!strcmp(VAR18, ""))
VAR84 = VAR85;
else if (!strcmp(VAR18, ""))
VAR84 = VAR86;
else if (!strcmp(VAR18, ""))
VAR84 = VAR87;
else
FUN22(VAR88, "", VAR18);
}
else
VAR84 = VAR85;

break;
case 6:
FUN23(VAR18 && VAR18[0] ? VAR18 : NULL);
break;
case 7:
FUN16(VAR89, &VAR31);
break;
case 8:
FUN24(FUN25(VAR18));
break;
case '':
if (VAR90 && argv[VAR6][1] != '')
fprintf(VAR19, "", VAR90);
else
fprintf(VAR19, "", argv[VAR6]);
VAR7 = true;
break;
case '':
if (VAR90 && argv[VAR6][1] != '')
fprintf(VAR19, "", VAR90);
else
fprintf(VAR19, "", VAR12[VAR5].VAR36);
VAR7 = true;
break;
default:
FUN4(1);
break;
}
VAR6 = VAR16;
VAR11 = false;
}

if (VAR16 < argc) {
FUN21("");
while (VAR16 < argc)
FUN21("", argv[VAR16++]);
FUN21("");
}

if (VAR7)
FUN4(1);

if (FUN9(VAR50, &VAR31))
FUN16(VAR89, &VAR31);

return VAR2;
}