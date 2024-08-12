int
FUN1(VAR1 *VAR2, char *VAR3, VAR4 *VAR5)
{
int	VAR6 = 0;
char	*VAR7 = NULL;
size_t	VAR8;

if (VAR2 == NULL || VAR3 == NULL || VAR5 == NULL)
return (VAR9);


if ((VAR6 = FUN2(VAR2, &VAR7, &VAR8, VAR10, 0))
!= 0) {
FUN3(VAR11, ""
"", VAR6);
switch (VAR6) {
case VAR12:
case VAR13:
return (VAR9);
case VAR14:
return (VAR15);
default:
return (VAR16);
}
}
if (VAR8 > *VAR5) {
return (VAR9);
}


if (FUN4(VAR7, VAR3, VAR8) != 0) {
FUN3(VAR11, "" "");
FUN5(VAR7, VAR8);
return (VAR16);
}

*VAR5 = VAR8;
FUN5(VAR7, VAR8);
return (VAR17);
}