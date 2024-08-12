static char *FUN1(void);

static int	FUN2(int argc, char *argv[]);


int
FUN2(int argc, char *argv[])
{
int				VAR1;
struct VAR2	**VAR3;
VAR4		*VAR5;

if (argc < 1)
return(VAR6);


VAR7 = VAR8;
strcpy(VAR8, "");
VAR5 = NULL;
VAR1 = VAR9;


FUN3(VAR3, VAR10) {
if (((*VAR3)->VAR11 != NULL) && !strcmp(argv[0], (*VAR3)->VAR11))
VAR5 = (*VAR3)->VAR12;
}
if (VAR5 != NULL) {
VAR1 = (VAR5)(argc, argv);
} else {
VAR7 = "";
}
FUN4(VAR1);
}