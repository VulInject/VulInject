int
FUN1(char *VAR1, int *VAR2, char *VAR3,
scf_type_t VAR4, char *VAR5)
{
char VAR6[32];
int VAR7, VAR8, VAR9;

VAR7 = sizeof (VAR6);
VAR8 = FUN2(VAR10, VAR1, VAR6,
VAR3, VAR4, VAR5, &VAR7);
if (VAR8 != VAR11)
return (VAR8);
VAR12 = 0;
VAR9 = FUN3(VAR6, NULL, 10);
if (VAR12 != 0)
return (VAR13);
*VAR2 = VAR9;
return (VAR11);
}