VAR1
FUN1(VAR2 *VAR3, void *VAR4)
{
VAR5 *VAR6 = VAR4;
int32_t VAR7;
smedia_reqget_medium_property_t	VAR8;
VAR9	*VAR10;
VAR11	*VAR12;
door_arg_t	VAR13;
char	VAR14[sizeof (VAR15) + sizeof (VAR16)];

FUN2("");

if (VAR3 == NULL) {
FUN2("");
VAR17 = VAR18;
return (-1);
}
if (VAR3->VAR19 != (VAR1)VAR20) {
FUN2("");
FUN3("",
VAR20, VAR3->VAR19);
FUN4("", VAR3->VAR21);
VAR17 = VAR18;
return (-1);
}
(void) memset((void *) VAR6, 0, sizeof (VAR5));

VAR8.VAR22 = VAR23;
VAR13.VAR24 = (char *)&VAR8;
VAR13.VAR25 = sizeof (VAR15);
VAR13.VAR26 = NULL;
VAR13.VAR27 = 0;
VAR13.VAR14 = VAR14;
VAR13.VAR28 = sizeof (VAR14);

VAR7 = FUN5(VAR3->VAR29, &VAR13);
if (VAR7 < 0) {
FUN6("");
return (-1);
}
VAR10 =
(VAR9 *)((void *)VAR13.VAR24);
VAR12 = (VAR11 *)((void *)VAR13.VAR24);
if (VAR12->VAR22 == VAR30) {
FUN4(
"", VAR12->VAR31);
VAR17 = VAR12->VAR31;
return (-1);
}

*VAR6 = VAR10->VAR32;

return (0);
}