int
FUN1(VAR1 *VAR2, uint32_t VAR3,
uint_t VAR4, int *VAR5)
{
VAR6	*VAR7;
uint64_t	VAR8;
uint32_t	VAR9;
uint32_t	VAR10;
uint32_t	VAR11;
uint_t		VAR12;
uint_t		VAR13;
int		VAR14;
int		VAR15;
int		VAR16;
int		VAR17 = VAR18;


FUN2(&VAR2->VAR19);

VAR12 = FUN3(VAR2->VAR20);
VAR13 = VAR2->VAR13;


FUN4(&VAR2->VAR19);


if (VAR13 == -1) {
*VAR5 = VAR21;
return (VAR22);
}



if (VAR13 == VAR12) {

VAR16 = VAR17;
do {
(void) FUN5(VAR2).FUN6(VAR2->VAR23.VAR24,
(VAR25 &
VAR26), &VAR11);

if (VAR4 != VAR2->VAR27) {
*VAR5 = VAR28;
return (VAR22);
}

VAR14 = (VAR11 - VAR3);
if ((VAR11 >= VAR3) &&
(VAR14 >= VAR29)) {
VAR9 = VAR11;
VAR10	= (VAR30)VAR14;
} else {
*VAR5 = VAR21;
return (VAR22);
}

VAR15 = FUN5(VAR2).FUN7(
VAR2->VAR23.VAR24, VAR4,
(VAR25 &
VAR26), VAR9, VAR10,
&VAR11);
if (VAR15 != VAR31) {
*VAR5 = VAR28;
return (VAR22);
}

if (VAR11 == VAR9) {
*VAR5 = VAR32;
return (VAR31);
}
} while (VAR16--);

*VAR5 = VAR21;
return (VAR22);

} else {

if (FUN8(VAR2, 0, &VAR7) != VAR31) {
*VAR5 = VAR33;
return (VAR22);
}

VAR7->VAR34 = (VAR35 |
VAR36 | VAR37);
VAR7->VAR38 = VAR39;
VAR8 = (VAR40 |
VAR25) | (((VAR41)VAR13) <<
VAR42);
VAR7->VAR43		   = VAR8;
VAR7->VAR44	   = VAR4;
VAR7->VAR45.VAR46.VAR47   = 0;
VAR7->VAR45.VAR46.VAR48  = VAR3;
VAR7->VAR45.VAR46.VAR17 = VAR17;
VAR7->VAR45.VAR46.VAR49   = VAR50;

VAR15 = FUN9(VAR2, NULL, VAR7);

if (VAR15 == VAR31) {
if (VAR7->VAR51 == VAR32) {
*VAR5 = VAR7->VAR51;

(void) FUN10(VAR2, &VAR7);

return (VAR31);

} else {
*VAR5 = VAR7->VAR51;

(void) FUN10(VAR2, &VAR7);

return (VAR22);
}
} else {
*VAR5 = VAR7->VAR51;

(void) FUN10(VAR2, &VAR7);

return (VAR22);
}
}
}