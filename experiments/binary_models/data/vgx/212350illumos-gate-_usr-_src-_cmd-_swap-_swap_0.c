static void FUN1(void);
static int FUN2(int VAR1);
static int FUN3(char *, VAR2, VAR2);
static int FUN4(int VAR1);

int
main(int argc, char **argv)
{
int VAR3, VAR1 = 0;
int VAR4;
int VAR5 = 0;
off_t VAR6 = 0;
off_t VAR7 = 0;
char *VAR8;
char *VAR9;

(void) FUN5(VAR10, "");

(void) FUN6(VAR11);

VAR12 = argv[0];
if (argc < 2) {
FUN1();
FUN7(1);
}

while ((VAR3 = getopt(argc, argv, "")) != VAR13) {
char *VAR14;
switch (VAR3) {
case '': 	
VAR1 |= VAR15;
break;
case '':
VAR1 |= VAR16;
break;
case '':

if ((argc - VAR17) > 1 || VAR1 != 0) {
FUN1();
FUN7(1);
}
VAR1 |= VAR18;
VAR8 = VAR19;
if (VAR17 < argc) {
VAR20 = 0;
VAR6 = FUN8(argv[VAR17++], &VAR14, 10);
if (VAR20 != 0 || *VAR14 != '') {
(void) fprintf(VAR21,
FUN9(""));
FUN7(1);
}
}
VAR4 = delete(VAR8, VAR6);
break;

case '':

if ((argc - VAR17) > 2 ||
(VAR1 & ~(VAR22 | VAR23)) != 0) {
FUN1();
FUN7(1);
}
if (*VAR19 != '') {
(void) fprintf(VAR21,
FUN9(""),
VAR12);
FUN7(1);
}
VAR1 |= VAR24;
VAR8 = VAR19;
if (VAR17 < argc) {
VAR20 = 0;
VAR6 = FUN8(argv[VAR17++], &VAR14, 10);
if (VAR20 != 0 || *VAR14 != '') {
(void) fprintf(VAR21,
FUN9(""));
FUN7(1);
}
}
if (VAR17 < argc) {
VAR20 = 0;
VAR7 = FUN8(argv[VAR17++], &VAR14, 10);
if (VAR20 != 0 || *VAR14 != '') {
(void) fprintf(VAR21,
FUN9(""));
FUN7(1);
}
}
break;
case '':
VAR1 |= VAR25;
break;

case '':
VAR1 |= VAR26;
break;

case '':
VAR1 |= VAR22;
break;

case '':
VAR1 |= VAR23;
break;

case '':
FUN1();
FUN7(1);
}
}

if (VAR1 & VAR16) {
if (VAR1 & ~VAR16 & ~VAR25) {

FUN1();
FUN7(1);
}

VAR4 = FUN2(VAR1);

}

if (VAR1 & VAR15) {
if (VAR1 & ~VAR26 & ~VAR25 & ~VAR15) {
FUN1();
FUN7(1);
}
VAR4 = FUN4(VAR1);
}


if (VAR1 & VAR24) {

if (FUN10(VAR8, &VAR9, VAR27, &VAR5) ||
VAR5) {
if (VAR5 != 0) {
(void) fprintf(VAR21, FUN9(""
""),
strerror(VAR5));
} else {
(void) fprintf(VAR21, "", VAR9);
free(VAR9);
FUN7(1);
}
}
if ((VAR4 = FUN3(VAR8,
VAR6 * 512, VAR7 * 512)) == 0) {
VAR4 = FUN11(VAR8, VAR6, VAR7, VAR1);
}
}
if (!(VAR1 & ~VAR25 & ~VAR26)) {

FUN1();
FUN7(1);
}
return (VAR4);
}