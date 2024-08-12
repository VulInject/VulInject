static	int
FUN1(int argc, char **argv, struct VAR1 *VAR1)
{
static	char	VAR2[] = "";
static	char	VAR3[VAR4];
static	struct	cons_getterm VAR5 = {sizeof (VAR3), VAR3};


VAR1->VAR6 = "";
VAR1->VAR7 = 0;
VAR1->VAR8 = "";
VAR1->VAR9 = "";
VAR1->VAR10 = "";
VAR1->VAR11 = "";
VAR1->VAR12 = 0;
VAR1->VAR13 = 0;
VAR1->VAR14 = "";
VAR1->VAR15 = 0;
VAR1->VAR16 = 0;
VAR1->VAR2 = VAR2;
VAR1->VAR17 = 0;
VAR1->VAR18 = "";
VAR1->VAR19 = "";
VAR1->VAR20 = "";
VAR1->VAR21 = "";
VAR1->VAR22 = "";
VAR1->VAR23 = VAR24;
VAR1->VAR25 = NULL;
if (strcmp(FUN2(argv[0]), "") == 0) {
VAR1->VAR26 = "";
FUN3(argc, argv, VAR1);
} else {
int	VAR27;
struct	cons_getdev VAR28;

VAR1->VAR26 = "";
FUN4(argc, argv, VAR1);


if ((strlen(VAR1->VAR21) == 0) &&
(strcmp(VAR1->VAR22, "") == 0) &&
((VAR27 = open("", VAR29)) != -1)) {

if (FUN5(VAR27, VAR30, &VAR5) != -1)
VAR1->VAR21 = VAR5.VAR31;

if (FUN5(VAR27, VAR32, &VAR28) != -1)
VAR1->VAR25 =
FUN6(VAR28.VAR33);
(void) close(VAR27);
}
}

if ((VAR1->VAR22 != NULL) && (*(VAR1->VAR22) != ''))
FUN7(VAR1->VAR22); 
return (0);
}