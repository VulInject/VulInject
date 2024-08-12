static int
FUN1(sock_lower_handle_t VAR1, int VAR2,
int VAR3, const void *VAR4, socklen_t VAR5, VAR6 *VAR7)
{
struct VAR8 *VAR9 = (struct VAR8 *)VAR1;
struct VAR10	*VAR11 = FUN2(VAR9);
int	VAR12 = 0;

FUN3("", "",
VAR11, VAR2, VAR3);

switch (VAR3) {
case VAR13:
VAR12 = FUN4(VAR11, (char *)VAR4, VAR5);
break;
case VAR14:
VAR12 = FUN5(VAR11, VAR4, VAR5);
break;
case VAR15:
VAR12 = FUN6(VAR11, VAR4, VAR5);
break;
case VAR16:
VAR12 = FUN7(VAR11, VAR4, VAR5);
break;
case VAR17:
VAR12 = FUN8(&VAR11->VAR18,
(char *)VAR4, VAR5);
break;
case VAR19:
VAR12 = FUN9(VAR11, (char *)VAR4, VAR5);
break;
case VAR20:
VAR9->VAR21 = *(VAR22 *)VAR4;
return (VAR12);
case VAR23:
VAR9->VAR24 = *(VAR22 *)VAR4;
return (VAR12);
default:
break;
VAR12 = -VAR25;
}
VAR26:
return (VAR12);
}