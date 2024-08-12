int
main(int argc, char *argv[])
{


VAR1 *VAR2 = 0;
char **VAR3 = 0;
int VAR4;

char **VAR5;

char *VAR6, *VAR7;
int VAR8, VAR9, VAR10;
bool VAR11 = VAR12;
bool VAR13 = VAR12;
int VAR14 = 0;
bool VAR15 = VAR12;
bool VAR16 = VAR12;

if (FUN1("", NULL) == -1) {
FUN2("");
FUN3(1);
}


VAR7 = VAR6 = 0;

FUN4(VAR12);

VAR17 = FUN5(argv[0]);


VAR5 = FUN6(char *, (VAR18) (argc + 3));
memcpy(VAR5, argv, (sizeof(char *) * (VAR18) argc));
argv = VAR5;

while ((VAR8 = getopt(argc,
argv,
"")) != -1) {
switch (VAR8) {
case '':
VAR19 = 0;
break;

case '':
VAR6 = VAR20;
break;

case '':
VAR21 = VAR22;
FUN4(VAR22);
break;
case '':
VAR7 = VAR20;
break;

case '':
VAR23 = VAR24;
VAR25 = "";
if (VAR26 == VAR27)
VAR26 = VAR28;
break;

case '':
VAR29 = VAR30;
break;

case '':
VAR29 = VAR31;
break;

case '':
VAR14 |= 2;
break;

case '':
VAR14 |= 1;
break;

case '':
VAR13 = VAR22;
break;

case '':
VAR11 = VAR22;
break;

case '':
VAR32 = 1;
break;

case '':
VAR32 = -1;
break;

case '':
VAR23 = VAR33;
if (VAR26 == VAR27)
VAR26 = VAR34;
VAR25 = 0;
break;

case '':
VAR15 = VAR22;
break;

case '':
VAR23 = VAR35;
if (VAR26 == VAR27)
VAR26 = VAR34;
break;

case '':
VAR23 = VAR33;
break;

case '':
VAR29 = VAR36;
break;

case '':
VAR37 = VAR22;
break;

case '':
VAR38 = VAR22;
VAR39 = "";
VAR40 = "";
VAR41 = "";
break;

case '':
VAR25 = VAR20;
break;

case '':
VAR25 = 0;
break;

case '':
if (*VAR20 == '')
VAR26 = VAR42;
else if (*VAR20 == '')
VAR26 = VAR43;
else if (*VAR20 == '')
VAR26 = VAR34;
else if (*VAR20 == '')
VAR26 = VAR28;
else {
(void) fprintf(VAR44,
"",
VAR17);
FUN7(VAR45);
}
break;

case '':
VAR46 = VAR12;
break;

case '':
VAR21 = VAR12;
VAR16 = VAR22;
break;

case '':
VAR47 = VAR22;
break;

case '':
VAR29 = VAR48;
break;

case '':
FUN8(FUN9());
FUN7(VAR49);

case '':
VAR50 = FUN10();
FUN11(VAR50);
break;

case '':
VAR19 = FUN10();
break;

case '':
FUN4(VAR22);
break;

default:
FUN12();
}
}

VAR4 = (argc + 2 - VAR51);
VAR2 = FUN13(VAR1, VAR4);
VAR3 = FUN6(char *, VAR4);
VAR52 = FUN6(VAR53, VAR4);

if (VAR2 == 0
|| VAR3 == 0
|| VAR52 == 0) {
fprintf(VAR44, "", VAR17);
FUN7(VAR45);
}


if (VAR26 == VAR27)
VAR26 = VAR43;


FUN14(VAR25, VAR23, VAR26, VAR19, VAR50, VAR11);


if (VAR51 >= argc)
argv[argc++] = FUN15();


if (VAR29 != VAR54 && VAR51 >= argc - 1)
argv[argc++] = FUN15();


if (argc - VAR51 == 2 && VAR29 == VAR54)
VAR29 = VAR31;

if (!VAR13) {

VAR55 = 0;
for (; VAR51 < argc; VAR51++) {
const char *VAR56 = VAR55 ? VAR7 : VAR6;
int VAR57;

VAR3[VAR55] = argv[VAR51];

if (VAR56) {
(void) snprintf(VAR2[VAR55], sizeof (VAR1),
"" VAR58 "", VAR56,
FUN16(*argv[VAR51]), argv[VAR51]);
if (VAR50)
(void) fprintf(VAR44,
"",
VAR17,
argv[VAR51], VAR2[VAR55]);

VAR57 = FUN17(VAR2[VAR55],
&VAR52[VAR55].VAR59);		
(void) fprintf(VAR44, "",
VAR17);
FUN7(VAR45);
} else {
if (VAR50)
(void) fprintf(VAR44,
"",
VAR17,
VAR3[VAR55]);

VAR57 = FUN18(VAR3[VAR55],
VAR2[VAR55],
&VAR52[VAR55].VAR59);
VAR56 = VAR60;	
}

if (VAR57 <= 0) {
(void) fprintf(VAR44,
"",
VAR17,
VAR2[VAR55]);
FUN7(VAR45);
}
FUN19(&VAR52[VAR55].VAR59);
VAR55++;
}

if (VAR55 > 1)
FUN20(&VAR52[0].VAR59, &VAR52[1].VAR59);


if (VAR14) {
if (VAR14 & 1)
FUN21(&VAR52[0].VAR59);
if (VAR14 & 2)
FUN22(&VAR52[0].VAR59);
}


else if (VAR15) {
FUN23("", VAR61, &VAR52[0].VAR59);
FUN23("", VAR62, &VAR52[0].VAR59);
FUN23("", VAR63, &VAR52[0].VAR59);
FUN23("", VAR64, &VAR52[0].VAR59);
FUN23("", VAR65, &VAR52[0].VAR59);
FUN23("", VAR66, &VAR52[0].VAR59);
FUN23("", VAR67, &VAR52[0].VAR59);
FUN23("", VAR68, &VAR52[0].VAR59);
} else {


switch (VAR29) {
case VAR54:
if (VAR50)
(void) fprintf(VAR44,
"",
VAR17,
VAR3[0]);
(void) FUN24("",
VAR2[0]);
FUN25(&VAR52[0].VAR59,
VAR16,
VAR46,
VAR32,
NULL);
VAR10 = FUN26();
if (VAR50)
(void) fprintf(VAR44, "", VAR17, VAR10);
break;

case VAR31:
if (VAR50)
(void) fprintf(VAR44, "", VAR17);
(void) FUN24("", VAR3[0], VAR3[1]);
FUN27(VAR69, &VAR52->VAR59, VAR38);
break;

case VAR30:
if (VAR50)
(void) fprintf(VAR44,
"",
VAR17);
(void) FUN24("", VAR3[0], VAR3[1]);
FUN27(VAR69, &VAR52->VAR59, VAR38);
break;

case VAR36:
if (VAR50)
(void) fprintf(VAR44,
"",
VAR17);
(void) FUN24("", VAR3[0], VAR3[1]);
FUN27(VAR69, &VAR52->VAR59, VAR38);
break;

case VAR48:
if (VAR50)
(void) fprintf(VAR44, "", VAR17);
FUN25(&VAR52[0].VAR59,
VAR16,
VAR46,
VAR32,
VAR70);
for (VAR9 = 1; VAR9 < VAR55; VAR9++)
FUN28(VAR3[VAR9], !(VAR23 == VAR24
|| VAR23 == VAR71));
VAR10 = FUN26();
if (VAR50)
(void) fprintf(VAR44, "", VAR17, VAR10);
break;
}
}
} else if (VAR29 == VAR48)
(void) fprintf(VAR44, "");
else if (VAR29 == VAR54)
(void) fprintf(VAR44, "");
else if (argc - VAR51 != 2)
(void) fprintf(VAR44,
"");
else
FUN29(argc - VAR51, argv + VAR51);

free(VAR5);
free(VAR2);
free(VAR3);
FUN7(VAR49);
}