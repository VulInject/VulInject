static char *
FUN1(uid_t VAR1)
{
struct VAR2	*VAR3;
static char	VAR4[10];	

VAR3 = getpwuid(VAR1);
if (VAR3 == (struct VAR2 *)NULL) {

(void) sprintf(VAR4, "", VAR1);
return (VAR4);
} else
return (VAR3->VAR5);
}