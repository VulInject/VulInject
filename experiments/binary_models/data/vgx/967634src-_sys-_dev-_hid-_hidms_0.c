int
FUN1(struct VAR1 *VAR2, u_long VAR3, caddr_t VAR4, int VAR5,
struct VAR6 *VAR7)
{
struct VAR8 *VAR9 = (struct VAR8 *)VAR4;

switch (VAR3) {
case VAR10:
if (!(VAR9->VAR11 >= -32768 && VAR9->VAR12 >= -32768 &&
VAR9->VAR13 >= -32768 && VAR9->VAR14 >= -32768 &&
VAR9->VAR15 >= 0 && VAR9->VAR16 >= 0 &&
VAR9->VAR11 < 32768 && VAR9->VAR12 < 32768 &&
VAR9->VAR13 < 32768 && VAR9->VAR14 < 32768 &&
(VAR9->VAR12 - VAR9->VAR11) != 0 &&
(VAR9->VAR14 - VAR9->VAR13) != 0 &&
VAR9->VAR15 < 32768 && VAR9->VAR16 < 32768 &&
VAR9->VAR17 >= 0 && VAR9->VAR17 <= 1 &&
VAR9->VAR18 >= 0 && VAR9->VAR18 <= 1))
return (VAR19);

VAR2->VAR20.VAR11 = VAR9->VAR11;
VAR2->VAR20.VAR12 = VAR9->VAR12;
VAR2->VAR20.VAR13 = VAR9->VAR13;
VAR2->VAR20.VAR14 = VAR9->VAR14;
VAR2->VAR20.VAR17 = VAR9->VAR17;
VAR2->VAR20.VAR15 = VAR9->VAR15;
VAR2->VAR20.VAR16 = VAR9->VAR16;
VAR2->VAR21 = VAR9->VAR18;
return 0;
case VAR22:
VAR9->VAR11 = VAR2->VAR20.VAR11;
VAR9->VAR12 = VAR2->VAR20.VAR12;
VAR9->VAR13 = VAR2->VAR20.VAR13;
VAR9->VAR14 = VAR2->VAR20.VAR14;
VAR9->VAR17 = VAR2->VAR20.VAR17;
VAR9->VAR15 = VAR2->VAR20.VAR15;
VAR9->VAR16 = VAR2->VAR20.VAR16;
VAR9->VAR18 = VAR2->VAR21;
return 0;
case VAR23:
if (VAR2->VAR24 & VAR25 && VAR2->VAR24 & VAR26) {
*(VAR27 *)VAR4 = VAR28;
return 0;
}

default:
return -1;
}
}