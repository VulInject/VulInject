static int
FUN1(VAR1 *VAR2, ddi_info_cmd_t VAR3, void *VAR4, void **VAR5)
{
struct VAR6	*VAR7;
dev_t		VAR8;
int		VAR9;
int		VAR10;

switch (VAR3) {
case VAR11:
VAR8 = (VAR12)VAR4;
VAR9 = FUN2(VAR8);
if ((VAR7 = FUN3(VAR13, VAR9)) == NULL) {
return (VAR14);
}
*VAR5 = (void *) FUN4(VAR7);
VAR10 = VAR15;
break;
case VAR16:
VAR8 = (VAR12)VAR4;
VAR9 = FUN2(VAR8);
*VAR5 = (void *)(VAR17)VAR9;
VAR10 = VAR15;
break;
default:
VAR10 = VAR14;
}
return (VAR10);
}