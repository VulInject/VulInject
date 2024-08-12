extern int FUN1(VAR1, struct VAR2 **);

static int FUN2(char *);


int
FUN3(char *VAR2, struct VAR2 **VAR3, int *VAR4)
{
int VAR5, VAR6;
long VAR7;
char *VAR8;
struct VAR2 *VAR9;

*VAR4 = 0;

if (!FUN2(VAR2))
return (FUN4(VAR2, VAR3, VAR4));


VAR10 = 0;
VAR7 = FUN5(VAR2, &VAR8, 10);
if ((VAR7 == VAR11 && VAR10 == VAR12) || VAR7 > VAR13) {
VAR5 = VAR14;
} else {
if ((VAR5 = FUN1((VAR1)VAR7, &VAR9)) == VAR15) {

if (VAR3 != NULL)
*VAR3 = VAR9;
return (VAR15);
}
}

if (FUN4(VAR2, &VAR9, &VAR6) == VAR15) {

*VAR4 = VAR6;
if (VAR3 != NULL)
*VAR3 = VAR9;
return (VAR15);
}

return (VAR5);
}