extern int FUN1();
extern void FUN2();
extern int FUN3();
extern void FUN4();
extern void FUN5();
extern void FUN6();

static int FUN7(char);

int
main(int argc, char *argv[])
{

static VAR1 *VAR2, *VAR3, *VAR4;
char VAR5[100], VAR6[100], VAR7[100], *VAR8[100], *VAR9 = NULL;
char VAR10[100], VAR11[256];
static char VAR12[30];
static int VAR13 = 0;

long *VAR14;
unsigned *VAR15 = 0;
int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;



(void) FUN8(VAR22, "");

(void) FUN9(VAR23);

VAR16 = 0;

while (argc > 1 && argv[1][0] == '') {
switch (argv[1][1]) {
case '': 
VAR16 = 1;
break;
case '':
argc--;
argv++;
VAR9 = argv[1];
break;
case '': 
VAR24 = FUN7(argv[1][2]);
break;
case '': 
VAR25 = FUN7(argv[1][2]);
break;
case '': 
argc--;
argv++;
VAR26 = argv[1];
break;
case '': 
case '':
argc--;
argv++;
VAR27 = argv[1];
if ((int)argv[2] < 16000) {
VAR28 = (int)argv[2];
argc--;
argv++;
}
break;
case '': 
argc--;
argv++;
VAR29 = argv[1];
break;
case '': 
argc--;
argv++;
VAR30 = FUN10(argv[1]);
break;
case '': 
VAR31 = 0;
break;
case '': 
VAR32 = FUN10(argv[1]+2);
fprintf(VAR33, "", VAR32);
break;
case '': 
VAR34 = 1;
break;
case '':
VAR35 = 1;
break;
}
argc--;
argv++;
}
if (argc < 2)
FUN11(1);
strcpy(VAR5, FUN12(argv[1]));
if (VAR13 == 0 || strcmp(VAR12, VAR5) != 0) {
strcpy(VAR12, VAR5);
strcpy(VAR6, VAR5);
strcpy(VAR7, VAR6);
strcpy(VAR10, VAR5);
strcat(VAR5, "");
strcat(VAR6, "");
strcat(VAR7, "");
strcat(VAR10, "");
if (VAR13) {
fclose(VAR2);
fclose(VAR3);
fclose(VAR4);
}

VAR2 = fopen(VAR5, "");
if (VAR2 == NULL) {
strcpy(*VAR36++ = calloc(strlen(VAR12)+2, 1),
VAR12);
VAR3 = NULL;
goto VAR37;
}
VAR3 = fopen(VAR6, "");
VAR4 = fopen(VAR7, "");
VAR13 = 1;
if (VAR3 == NULL || VAR4 == NULL) {
FUN13(FUN14(""), VAR6);
FUN11(1);
}
VAR38 = FUN15(VAR3);
VAR39 = fopen(VAR10, "");
}
FUN16(VAR2, 0L, 0);
fread(&VAR17, sizeof (VAR17), 1, VAR2);
fread(&VAR40, sizeof (VAR40), 1, VAR2);
if (VAR15 == 0)
VAR15 = (unsigned *)calloc(VAR30, VAR40 ?
sizeof (long) : sizeof (unsigned));
VAR14 = (long *)calloc(VAR17, sizeof (*VAR14));
VAR21 = fread(VAR14, sizeof (*VAR14), VAR17, VAR2);
fprintf(VAR33, "",
VAR21, VAR40, VAR17);
assert(VAR21 == VAR17);
VAR41 = (int *)calloc(VAR17, sizeof (*VAR41));
assert(VAR41 != NULL);
VAR20 = fread(VAR41, sizeof (*VAR41), VAR17, VAR2);
VAR42 = (VAR20 == VAR17);
fprintf(VAR33, "", VAR20);

VAR37:
while (1) {
VAR18 = FUN1(VAR8);
if (VAR35) FUN5();
if (VAR18 == 0) continue;
if (VAR18 < 0) break;
if (VAR29) VAR29[0] = 0;
if (VAR3 != NULL) {
VAR19 = FUN17(VAR14, VAR17, VAR3, VAR18, VAR8, VAR15);
fprintf(VAR33, "", VAR19);
VAR36 = VAR43;
if (VAR16 == 0)
VAR19 = FUN18(VAR15, VAR19, VAR4,
VAR18, VAR8, VAR9, VAR24);
fprintf(VAR33, "", VAR19);
}
if (VAR36 > VAR43) {
char **VAR44, VAR45[100];
int VAR46;
fprintf(VAR33, "", VAR36-VAR43);
(void) memset(VAR45, 0, sizeof (VAR45));
VAR11[0] = 0;
for (VAR46 = 0; VAR46 < VAR18; VAR46++) {
strcat(VAR11, "");
strcat(VAR11, VAR8[VAR46]);
}
fprintf(VAR33, "", VAR11);
for (VAR44 = VAR43; VAR44 < VAR36; VAR44++) {
fprintf(VAR33, "",
*VAR44, VAR11);
FUN3(*VAR44);
fprintf(VAR33, "");
if (VAR29 == 0)
VAR29 = VAR45;
FUN2(VAR11, VAR29, *VAR44);
fprintf(VAR33, "", VAR29);
if (VAR24) {
int VAR47;
char *VAR48;
char *VAR49;
char *VAR50;
VAR49 = VAR29;
while (*VAR49) {
VAR50 = VAR49;
while (*VAR49 &&
(*VAR49 != ''))
VAR49++;
if (*VAR49)
VAR49++;
VAR47 = FUN19(VAR50, &VAR48,
1000, 0L);
if (VAR47 > 0) {
fputs(VAR48, VAR51);
free(VAR48);
}
}
}
}
}
if (VAR25)
FUN4(VAR15, VAR19 > VAR25 ? VAR25 : VAR19, VAR4);
if (VAR35) FUN6();
}
return (0);
}