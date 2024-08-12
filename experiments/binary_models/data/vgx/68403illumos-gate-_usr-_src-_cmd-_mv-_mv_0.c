static VAR1	*FUN1(VAR2, VAR3);

static struct stat 	VAR4, VAR5, VAR6, VAR7;
static int 		VAR8 = VAR9;
static int 		VAR10 = VAR9;
static int 		VAR11 = VAR9;
static char		*VAR12;
static int		VAR13 = 0;
static int		VAR14 = 0;
static int		VAR15 = 0;
static int		VAR16 = 0;
static int		VAR17 = 0;	
static int		VAR18 = 0;	
static int		VAR19 = 0;
static int		VAR20 = 0;	
static int		VAR21 = 0;	
static int		VAR22 = 0;	
static int		VAR23 = 0;
static int		VAR24 = 0;
static int		VAR25 = 0;
static int		VAR26;		
static VAR27	*VAR28 = NULL;	
static VAR29		*VAR30;
static int		VAR31 = 0;	
static int		VAR32 = -1;
static int		VAR33 = -1;
static int		VAR34 = -1;
static int		VAR35 = -1;
static VAR36 		*VAR37 = NULL;
static int		VAR38 = -1;
static int		VAR39 = -1;
static struct stat 	VAR40;



static int FUN2(char  *);
static int FUN3(char  *, char *);
static int FUN4(char *);
static int FUN5(struct VAR41 *, char *, char *, int);
static void FUN6(VAR36 *);
static void FUN7();


int
main(int argc, char *argv[])
{
int VAR42, VAR43, VAR44, VAR45 = 0;
char VAR46[VAR47];
int (*move)(char *, char *);



if (VAR12 = strrchr(argv[0], ''))
++VAR12;
else
VAR12 = argv[0];



(void) FUN8(VAR48, "");
(void) FUN9(VAR49);
if (FUN10() < 0) {
(void) fprintf(VAR50, FUN11(VAR51),
strerror(VAR52));
FUN12(3);
}

if (FUN13(VAR12, ""))
VAR10 = VAR53;
else if (FUN13(VAR12, ""))
VAR11 = VAR53;
else if (FUN13(VAR12, ""))
VAR8 = VAR53;
else {
(void) fprintf(VAR50,
FUN11(""
""), VAR12);
FUN12(1);
}



if (VAR8) {
while ((VAR42 = getopt(argc, argv, "")) != VAR54)
switch (VAR42) {
case '':
VAR14++;
break;
case '':
VAR15++;
break;
case '':
VAR16++;
VAR24 = 1;
VAR23 = 0;
VAR31 = 0;
if (VAR23 == 0)
VAR24 = 1;
break;
case '':

VAR21 = VAR22 = 0;
VAR20++;
break;
case '':
VAR20 = VAR22 = 0;
VAR21++;
break;
case '':
VAR21 = VAR20 = 0;
VAR22++;
break;
case '':

VAR17++;

case '':
VAR18++;
break;
case '':
VAR21 = VAR20 = 0;
VAR16++;
VAR22++;
VAR17++;
VAR18++;
break;
case '':
VAR23++;
VAR24 = 0;
VAR16 = 0;
break;
case '':
VAR31++;
VAR24 = 0;
VAR16 = 0;
break;
default:
VAR45++;
}


if ((VAR20 || VAR21 || VAR22) && !(VAR17 || VAR18)) {
VAR45++;
}

} else if (VAR10) {
while ((VAR42 = getopt(argc, argv, "")) != VAR54)
switch (VAR42) {
case '':
VAR13++;
VAR15 = 0;
break;
case '':
VAR15++;
VAR13 = 0;
break;
default:
VAR45++;
}
} else { 
while ((VAR42 = getopt(argc, argv, "")) != VAR54)
switch (VAR42) {
case '':
VAR13++;
break;
case '':

break;
case '':
VAR19++;
break;
default:
VAR45++;
}
}


if (VAR10 && VAR55 < argc && (strcmp(argv[VAR55], "") == 0))
VAR55++;



argc -= VAR55;
argv  = &argv[VAR55];

if ((argc < 2 && VAR11 != VAR53) || (argc < 1 && VAR11 == VAR53)) {
(void) fprintf(VAR50,
FUN11(""),
VAR12, argc);
FUN14();
}

if (VAR45 != 0)
FUN14();



if (argc > 2) {
if (FUN15(argv[argc-1], &VAR5) < 0) {
(void) fprintf(VAR50,
FUN11(""),
VAR12, argv[argc-1]);
FUN12(2);
}

if (!FUN16(VAR5)) {
(void) fprintf(VAR50,
FUN11(""),
VAR12, argv[argc-1]);
FUN14();
}
}

if (strlen(argv[argc-1]) >= VAR47) {
(void) fprintf(VAR50,
FUN11(""
""), VAR12, argv[argc-1], VAR47);
FUN12(78);
}

if (argc == 1) {
if (!VAR11)
FUN14();
(void) strcpy(VAR46, "");
} else {
(void) strcpy(VAR46, argv[--argc]);
}


if (VAR11)
move = VAR56;
else
move = VAR57;

VAR44 = 0;
for (VAR43 = 0; VAR43 < argc; VAR43++) {
VAR28 = NULL;
VAR26 = 1;
VAR44 += move(argv[VAR43], VAR46);
}



return (VAR44?2:0);
}