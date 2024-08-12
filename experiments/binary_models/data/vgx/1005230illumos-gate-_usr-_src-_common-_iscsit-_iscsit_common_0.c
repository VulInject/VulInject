int
FUN1(VAR1 *VAR2, char *VAR3, VAR4 **VAR5)
{
int		VAR6;
VAR4	*VAR7;
char		**VAR8 = NULL;
uint32_t	VAR9 = 0;

if (!VAR3 || !VAR5) {
return (VAR10);
}

*VAR5 = NULL;

VAR7 = FUN2(sizeof (VAR4));
if (VAR7 == NULL) {
return (VAR11);
}

(void) FUN3(VAR7->VAR12, VAR3, sizeof (VAR7->VAR12));

VAR6 = FUN4(VAR2, "",
&(VAR7->VAR13));

if (VAR6 == 0) {
VAR6 = FUN5(VAR2, "",
&VAR8, &VAR9);
}

if (VAR6 == 0) {

VAR6 = FUN6(VAR8, VAR9,
VAR14, &VAR7->VAR15,
&VAR7->VAR16);
} else if (VAR6 == VAR17) {
VAR6 = 0;
}

if (VAR6 == 0) {
*VAR5 = VAR7;
} else {
FUN7(VAR7);
}

return (VAR6);
}