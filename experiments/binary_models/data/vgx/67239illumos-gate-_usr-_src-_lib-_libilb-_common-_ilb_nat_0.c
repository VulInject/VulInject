static VAR1
FUN1(ilb_handle_t VAR2, char *VAR3, VAR4 *VAR5, VAR6 *VAR7,
enum which_tbl VAR8)
{
VAR9	*VAR10, *VAR11;
VAR12	*VAR13, *VAR14;
size_t		VAR15, VAR16, VAR17, VAR18;
size_t		VAR19;
ilb_status_t	VAR20;

if (*VAR5 == 0)
return (VAR21);

VAR15 = sizeof (VAR9) + sizeof (VAR12);
if ((VAR10 = malloc(VAR15)) == NULL)
return (VAR22);
VAR13 = (VAR12 *)&VAR10->VAR23;


if (VAR8 == VAR24)
VAR19 = sizeof (VAR25);
else
VAR19 = sizeof (VAR26);
VAR16 = *VAR5 * VAR19 + sizeof (VAR9) +
sizeof (VAR12);
if ((VAR11 = malloc(VAR16)) == NULL) {
free(VAR10);
return (VAR22);
}

if (VAR8 == VAR24)
VAR10->VAR27 = VAR28;
else
VAR10->VAR27 = VAR29;
VAR10->VAR30 = 0;
VAR13->VAR31 = *VAR5;
VAR18 = 0;

do {
VAR17 = VAR16;
VAR20 = FUN2(VAR2, VAR10, VAR15, VAR11, &VAR17);
if (VAR20 != VAR32)
goto VAR33;
if (VAR11->VAR27 != VAR34) {
VAR20 = *(VAR1 *)&VAR11->VAR23;
goto VAR33;
}

VAR14 = (VAR12 *)&VAR11->VAR23;

VAR18 += VAR14->VAR31;
bcopy(&VAR14->VAR35, VAR3, VAR14->VAR31 * VAR19);
VAR3 += VAR14->VAR31 * VAR19;


if (VAR18 == *VAR5)
break;

VAR13->VAR31 = *VAR5 - VAR18;
} while (!(VAR11->VAR30 & VAR36));

*VAR5 = VAR18;


if (VAR11->VAR30 & VAR36) {
*VAR7 = VAR37;
} else {

if (*VAR7) {
VAR10->VAR30 = VAR36;
VAR17 = VAR16;
VAR20 = FUN2(VAR2, VAR10, VAR15, VAR11, &VAR17);
}
}
VAR33:
free(VAR10);
free(VAR11);
return (VAR20);
}