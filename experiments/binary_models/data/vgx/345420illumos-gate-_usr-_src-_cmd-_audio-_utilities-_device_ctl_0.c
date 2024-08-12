int
FUN1(int VAR1, unsigned int *VAR2, unsigned int VAR3)
{
Audio_info		VAR4;
struct VAR5	*VAR6;
int			VAR7;
unsigned		*VAR8;
unsigned char		*VAR9;


if (VAR3 & VAR10)
VAR6 = &VAR4.VAR11;
else if (VAR3 & VAR12)
VAR6 = &VAR4.VAR13;
else if ((VAR3 & VAR14) != VAR15)
return (VAR16);

VAR8 = NULL;
switch (VAR3 & VAR14) {
case VAR17:
VAR8 = &VAR6->VAR18; break;
case VAR19:
VAR8 = &VAR6->VAR20; break;
case VAR21:
VAR9 = &VAR6->VAR22; break;
case VAR23:
VAR8 = &VAR6->VAR24; break;
case VAR25:
VAR9 = &VAR6->open; break;
case VAR26:
VAR9 = &VAR6->VAR27; break;
case VAR28:
VAR9 = &VAR6->VAR29; break;
case VAR30:
VAR8 = &VAR6->VAR31; break;
case VAR15:
VAR8 = &VAR4.VAR32; break;
case VAR33:
VAR9 = &VAR6->VAR34; break;
default:
return (VAR16);
}

if (VAR3 & VAR35) {

FUN2(&VAR4);
if (VAR8 != NULL) {
*VAR8 = *VAR2;
} else {
*VAR9 = (unsigned char) *VAR2;
}
VAR7 = FUN3(VAR1, &VAR4);
} else {
VAR7 = FUN4(VAR1, &VAR4);
}
if (VAR7 == VAR36) {
if (VAR8 != NULL)
*VAR2 = *VAR8;
else
*VAR2 = (unsigned)*VAR9;
}
return (VAR7);
}