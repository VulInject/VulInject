static VAR1
FUN1(VAR2 *VAR3, size_t VAR4)
{
ilb_status_t VAR5 = VAR6;
VAR7 *VAR8;
VAR9 *VAR10;

switch (VAR3->VAR11) {
case VAR12:
case VAR13:
case VAR14:
case VAR15:
case VAR16:
VAR8 = (VAR7 *)&VAR3->VAR17;

if (VAR4 < FUN2(VAR3) + VAR8->VAR18 *
sizeof (VAR19)) {
VAR5 = VAR20;
}
break;
case VAR21:
case VAR22:
case VAR23:
VAR10 = (VAR9 *)&VAR3->VAR17;

if (VAR4 < FUN2(VAR3) + VAR10->VAR24 *
sizeof (VAR25)) {
VAR5 = VAR20;
}
break;
}
return (VAR5);
}