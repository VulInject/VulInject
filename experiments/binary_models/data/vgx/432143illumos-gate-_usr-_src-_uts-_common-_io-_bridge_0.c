static VAR1
FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7,
VAR8 *VAR9, VAR8 *VAR10)
{
uint16_t VAR11, VAR12;

if (VAR5->VAR13 == VAR14) {
ptrdiff_t VAR15 = FUN2(struct VAR16, VAR17);
ptrdiff_t VAR18;


while (VAR7 != NULL) {
VAR18 = FUN3(VAR7);
if (VAR18 > VAR15 && VAR18 > 0)
break;
VAR15 -= VAR18;
VAR7 = VAR7->VAR19;
}
if (VAR7 == NULL)
return (VAR20);
VAR11 = VAR7->VAR21[VAR15] << 8;
if (++VAR15 >= VAR18) {
do {
VAR7 = VAR7->VAR19;
} while (VAR7 != NULL && FUN3(VAR7) == 0);
if (VAR7 == NULL)
return (VAR20);
VAR15 = 0;
}
VAR11 |= VAR7->VAR21[VAR15];

VAR12 = FUN4(VAR11);
if (FUN5(VAR11) != VAR22 || VAR12 > VAR23)
return (VAR20);
if (VAR12 == VAR24 || VAR12 == VAR3->VAR25)
goto VAR26;
if (!FUN6(VAR3, VAR12))
return (VAR20);
} else {
VAR11 = 0xFFFF;
VAR26:

if ((VAR12 = VAR3->VAR25) == VAR24)
return (VAR20);
}

*VAR10 = VAR11;
*VAR9 = VAR12;
return (VAR27);
}