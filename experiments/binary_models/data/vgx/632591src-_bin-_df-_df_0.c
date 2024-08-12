static void	 FUN1(struct VAR1 *, long, int);
char		*FUN2(char *);
static void	 FUN3(char *);
static int	 FUN4(VAR2, VAR2);
static void	 FUN5(struct VAR1 *, long, int);
static void	 FUN6(struct VAR1 *VAR3, unsigned long long);
static void	 FUN7(long long);
static void	 FUN8(struct VAR1 *, int, int, int);
static long	 FUN9(struct VAR1 **, long);
static int	 FUN10(const char *);
static __dead void FUN11(void);

extern int	 FUN12(int, char *, struct VAR1 *);
extern int	 FUN13(int, char *, struct VAR1 *);
static int	 FUN14(char *, struct VAR1 *);

int	VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
char	**VAR10 = NULL;

int
main(int argc, char *argv[])
{
struct stat VAR11;
struct VAR1 *VAR12;
long VAR13;
int VAR14, VAR15;
int VAR16, VAR17;
char *VAR18;

if (FUN15("", NULL) == -1)
FUN16(1, "");

while ((VAR14 = getopt(argc, argv, "")) != -1)
switch (VAR14) {
case '':
VAR4 = 1;
VAR6 = 0;
break;
case '':
VAR5 = 1;
break;
case '':
VAR6 = 1;
VAR4 = 0;
break;
case '':
VAR7 = 1;
break;
case '':
VAR8 = 1;
break;
case '':
VAR9 = 1;
break;
case '':
if (VAR10 != NULL)
FUN17(1, "");
FUN3(VAR19);
break;
default:
FUN11();
}
argc -= VAR20;
argv += VAR20;

if ((VAR5 || VAR4) && VAR9) {
FUN18("");
FUN11();
}

VAR13 = FUN19(&VAR12, VAR21);
if (VAR13 == 0)
FUN16(1, "");

if (!*argv) {
VAR13 = FUN9(&VAR12, VAR13);
} else {
VAR12 = calloc(argc, sizeof(struct VAR1));
if (VAR12 == NULL)
FUN16(1, NULL);
VAR13 = 0;
for (; *argv; argv++) {
if (FUN20(*argv, &VAR11) == -1) {
if ((VAR18 = FUN2(*argv)) == 0) {
FUN21("", *argv);
continue;
}
} else if (FUN22(VAR11.VAR22) || FUN23(VAR11.VAR22)) {
if (!FUN14(*argv, &VAR12[VAR13]))
++VAR13;
continue;
} else
VAR18 = *argv;

if (!FUN24(VAR18, &VAR12[VAR13]))
if (VAR7 && (VAR12[VAR13].VAR23 & VAR24) == 0)
FUN18("",
*argv);
else if (!FUN10(VAR12[VAR13].VAR25))
FUN18("",
*argv, VAR12[VAR13].VAR25);
else
++VAR13;
else
FUN21("", *argv);
}
}

if (VAR13) {
VAR17 = 11;
for (VAR15 = 0; VAR15 < VAR13; VAR15++) {
VAR16 = strlen(VAR12[VAR15].VAR26);
if (VAR16 > VAR17)
VAR17 = VAR16;
}

if (VAR9)
FUN5(VAR12, VAR13, VAR17);
else
FUN1(VAR12, VAR13, VAR17);
}

return (VAR13 ? 0 : 1);
}