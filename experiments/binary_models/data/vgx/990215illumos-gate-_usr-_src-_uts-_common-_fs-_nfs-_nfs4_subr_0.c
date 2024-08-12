char *
FUN1(VAR1 *VAR2, VAR3 *VAR4, char *VAR5)
{
char	*VAR6;
char	*VAR7;
int	VAR8;
int	 VAR9;

FUN2(VAR4 != NULL);

if (VAR2 == NULL)
return (NULL);

VAR7 = VAR2->VAR10;
VAR8 = VAR2->VAR11;
if (VAR8 <= 0 || VAR7 == NULL) {
if (VAR5)
*VAR5 = '';
return (NULL);
}

VAR6 = VAR5;
if (VAR6 == NULL)
VAR6 = FUN3(VAR8 + 1, VAR12);


for (VAR9 = 0; VAR9 < VAR8; VAR9++) {
VAR6[VAR9] = VAR7[VAR9];
if (VAR7[VAR9] == '') {
FUN4(FUN5(), VAR13,
"");
if (VAR5 == NULL)
FUN6(VAR6, VAR8 + 1);
return (NULL);
}
}
VAR6[VAR8] = '';
*VAR4 = VAR8 + 1;

return (VAR6);
}