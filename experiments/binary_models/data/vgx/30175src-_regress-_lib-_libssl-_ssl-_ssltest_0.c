int
main(int argc, char *argv[])
{
char *VAR1 = NULL, *VAR2 = NULL;
int VAR3 = 0;
int VAR4 = 0;
int VAR5 = 0;
int VAR6 = 0, VAR7 = 0, VAR8 = 0, VAR9 = 1;
int VAR10 = 0;
int VAR11 = 0, VAR12;
struct app_verify_arg VAR13 =
{ VAR14, 0, 0, NULL, NULL };
char *VAR15 = VAR16;
char *VAR17 = NULL;
char *VAR18 = VAR19;
char *VAR20 = NULL;
char *VAR21 = NULL;
VAR22 *VAR23 = NULL;
VAR22 *VAR24 = NULL;
const VAR25 *VAR26 = NULL;
VAR27 *VAR28, *VAR29;
int VAR30 = 1, VAR31 = 0;
int VAR32 = 0;
long VAR33 = 256L;
VAR34 *VAR35;
int VAR36 = 0;
VAR37 *VAR38 = NULL;
int VAR39 = 0;
int VAR40 = 0;
int VAR41 = 0;
clock_t VAR42 = 0, VAR43 = 0;

VAR44 = 0;
VAR45 = 0;
VAR46 = 0;

VAR47 = FUN1(VAR48, VAR49|VAR50);

VAR51 = FUN1(VAR52, VAR49|VAR50);

argc--;
argv++;

while (argc >= 1) {
if (!strcmp(*argv, "")) {
fprintf(VAR48, "");
FUN2(0);
} else if (strcmp(*argv, "") == 0)
VAR11 = 1;
else if (strcmp(*argv, "") == 0)
VAR10 = 1;
else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR13.VAR54= *(++argv);
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR13.VAR55= *(++argv);
} else if (strcmp(*argv, "") == 0)
VAR44 = 1;
else if (strcmp(*argv, "") == 0)
VAR45 = 1;
else if (strcmp(*argv, "") == 0)
VAR31 = 1;
else if (strcmp(*argv, "") == 0) {
VAR36 = 1;
} else if (strcmp(*argv, "") == 0)
VAR39 = 1;
else if (strcmp(*argv, "") == 0)
VAR40 = 1;
else if (strcmp(*argv, "") == 0)
VAR8 = 1;
else if (strcmp(*argv, "") == 0)
VAR6 = 1;
else if (strcmp(*argv, "") == 0)
VAR7 = 1;
else if (FUN3(*argv, "", 4) == 0) {
if (--argc < 1)
goto VAR53;
VAR30 = FUN4(*(++argv));
if (VAR30 == 0)
VAR30 = 1;
} else if (FUN3(*argv, "", 9) == 0) {
if (--argc < 1)
goto VAR53;
VAR32 = FUN4(*(++argv));
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR33 = FUN5(*(++argv));
if (VAR33 == 0L)
VAR33 = 1L;
VAR12 = strlen(argv[0]);
if (argv[0][VAR12 - 1] == '')
VAR33*=1024L;
if (argv[0][VAR12 - 1] == '')
VAR33*=1024L*1024L;
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR15= *(++argv);
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR15= *(++argv);
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR17= *(++argv);
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR17= *(++argv);
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR18= *(++argv);
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR20= *(++argv);
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR46= *(++argv);
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR1= *(++argv);
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR2= *(++argv);
} else if (strcmp(*argv, "") == 0) {
VAR4 = 1;
} else if (strcmp(*argv, "") == 0) {
VAR5 = 1;
} else if (strcmp(*argv, "") == 0) {
VAR41 = 1;
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR21 = *(++argv);
} else if (strcmp(*argv, "") == 0) {
VAR13.VAR56 = 1;
} else if (strcmp(*argv, "") == 0) {
VAR13.VAR57 = 1;
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR58 = *(++argv);
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR59 = *(++argv);
} else if (strcmp(*argv, "") == 0) {
if (--argc < 1)
goto VAR53;
VAR60 = *(++argv);
} else {
fprintf(VAR48, "", *argv);
VAR3 = 1;
break;
}
argc--;
argv++;
}
if (VAR3) {
VAR53:
FUN6();
goto VAR61;
}

if (!VAR8 && !VAR6 && !VAR7 && VAR30 > 1 && !VAR31 && !VAR5) {
fprintf(VAR48,
""
""
""
"");
FUN2(1);
}

if (VAR41) {
if (!VAR4) {
fprintf(VAR48, "");
VAR4 = 1;
}
if (VAR30 < 50 && !VAR5)
fprintf(VAR48, "");
}



FUN7();
FUN8();

if (VAR8)
VAR26 = FUN9();
else if (VAR6)
VAR26 = FUN10();
else if (VAR7)
VAR26 = FUN11();
else
VAR26 = FUN12();

VAR24 = FUN13(VAR26);
VAR23 = FUN13(VAR26);
if ((VAR24 == NULL) || (VAR23 == NULL)) {
FUN14(VAR47);
goto VAR61;
}

FUN15(VAR24, VAR32);
FUN15(VAR23, VAR32);

if (VAR46 != NULL) {
FUN16(VAR24, VAR46);
FUN16(VAR23, VAR46);
}

if (!VAR39) {
if (VAR36) {

FUN17(VAR23, VAR62);
VAR35 = FUN18();
} else
VAR35 = FUN19();
FUN20(VAR23, VAR35);
FUN21(VAR35);
}

if (!VAR40) {
int VAR63;

if (VAR21 != NULL) {
VAR63 = FUN22(VAR21);
if (VAR63 == 0) {
FUN23(VAR47, "", VAR21);
goto VAR61;
}
} else
VAR63 = VAR64;

VAR38 = FUN24(VAR63);
if (VAR38 == NULL) {
FUN23(VAR47, "");
goto VAR61;
}

FUN25(VAR23, VAR38);
FUN17(VAR23, VAR65);
FUN26(VAR38);
}

if (!FUN27(VAR23, VAR15)) {
FUN14(VAR47);
} else if (!FUN28(VAR23,
(VAR17 ? VAR17 : VAR15), VAR66)) {
FUN14(VAR47);
goto VAR61;
}

if (VAR10) {
FUN27(VAR24, VAR18);
FUN28(VAR24,
(VAR20 ? VAR20 : VAR18),
VAR66);
}

if ((!FUN29(VAR23, VAR2, VAR1)) ||
(!FUN30(VAR23)) ||
(!FUN29(VAR24, VAR2, VAR1)) ||
(!FUN30(VAR24))) {

FUN14(VAR47);

}

if (VAR10) {
FUN23(VAR47, "");
FUN31(VAR23,
VAR67|VAR68,
VAR69);
FUN32(VAR23, VAR70,
&VAR13);
}
if (VAR11) {
FUN23(VAR47, "");
FUN31(VAR24, VAR67,
VAR69);
FUN32(VAR24, VAR70,
&VAR13);
}

{
int VAR71 = 0;
FUN33(VAR23,
(void *)&VAR71, sizeof(VAR71));
}

if (VAR59 != NULL)
FUN34(VAR23, VAR72, NULL);

if (VAR58 != NULL) {
unsigned short VAR73;
unsigned char *VAR74 = FUN35(&VAR73, VAR58);

if (VAR74 == NULL) {
FUN23(VAR47, "");
goto VAR61;
}
FUN36(VAR24, VAR74, VAR73);
free(VAR74);
}

VAR28 = FUN37(VAR24);
VAR29 = FUN37(VAR23);

for (VAR12 = 0; VAR12 < VAR30; VAR12++) {
if (!VAR31)
FUN38(VAR28, NULL);
if (VAR4)
VAR9 = FUN39(VAR29, VAR28, VAR33, &VAR42,
&VAR43);
else
VAR9 = FUN40(VAR29, VAR28, VAR33);
}

if (!VAR44) {
FUN41(VAR28, "");
}
if ((VAR30 > 1) || (VAR33 > 1L))
FUN23(VAR51, "",
VAR30, VAR33);
if (VAR41) {

FUN23(VAR51,
""
"",
(double)VAR42/VAR75,
(double)VAR43/VAR75);

FUN23(VAR51,
""
"",
(double)VAR42,
(double)VAR43);
}

FUN42(VAR29);
FUN42(VAR28);

VAR61:
FUN43(VAR23);
FUN43(VAR24);
FUN44(VAR51);

FUN45();
FUN46();
FUN47();
FUN48(NULL);
FUN49();
FUN50(VAR47);
FUN44(VAR47);

FUN2(VAR9);
return VAR9;
}