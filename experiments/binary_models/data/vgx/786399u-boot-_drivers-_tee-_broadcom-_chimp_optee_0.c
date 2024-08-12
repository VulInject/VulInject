int FUN1(VAR1 *VAR2)
{
struct tee_invoke_arg VAR3;
struct tee_param VAR4[1];
int VAR5;

VAR5 = FUN2(&VAR3, VAR6);
if (VAR5 < 0)
return VAR5;

VAR4[0].VAR7 = VAR8;

VAR5 = FUN3(VAR9.VAR10, &VAR3, FUN4(VAR4), VAR4);
if (VAR5 < 0) {
FUN5("");
goto VAR11;
}

switch (VAR3.VAR5) {
case VAR12:
*VAR2 = VAR4[0].VAR13.VAR14.VAR15;
VAR5 =  0;
break;
default:
VAR5 = -VAR16;
break;
}

VAR11:
FUN6(VAR9.VAR10, VAR9.VAR17);
VAR9.VAR10 = NULL;

return VAR5;
}