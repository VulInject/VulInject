int
FUN1(priv_op_t VAR1, int VAR2, ...)
{
VAR3 *VAR4;
priv_t VAR5;
va_list VAR6;
int	VAR7;

VAR4 = FUN2();
FUN3(VAR4);

FUN4(VAR6, VAR2);
while (VAR2--) {
char	*VAR8;

VAR5 = FUN5(VAR6, VAR9);
VAR8 = (char *)FUN6((int)(VAR10)VAR5);
if (VAR8 == NULL) {
VAR11 = VAR12;
FUN7(VAR4);
return (-1);
}
(void) FUN8(VAR4, VAR8);
}
FUN9(VAR6);


VAR7 = FUN10(VAR1, VAR13, VAR4);
FUN7(VAR4);
return (VAR7);

}