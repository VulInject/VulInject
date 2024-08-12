unsigned long
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
ulong_t		VAR5, VAR6, VAR7 = 0;
ulong_t		VAR8 = 0;
ulong_t		VAR9, VAR10, VAR11 = 0;
char		*VAR12, **VAR13, **VAR14;
int		VAR15 = 0, VAR16 = -1;
uint_t		VAR17 = 0;
uint_t		VAR18[2] = { 0, 0 };
VAR3		*VAR19;
VAR20		*VAR21 = NULL;
VAR22		*VAR23;
VAR24		*VAR25, *VAR26;
uid_t		VAR27 = (VAR28)-1, VAR29 = (VAR28)-1;
gid_t		VAR30 = (VAR31)-1, VAR32 = (VAR31)-1;
char		*VAR33 = NULL, *VAR34 = NULL, *VAR35 = NULL;
int		VAR36 = -1;


for (; VAR2->VAR37 != VAR38; VAR2++)
switch (VAR2->VAR37) {
case VAR39:
break;
case VAR40:
VAR7 = (unsigned long)VAR2->VAR41.VAR42;
break;
case VAR43:
VAR14 = (char **)VAR2->VAR41.VAR44;
break;
case VAR45:
VAR13 = (char **)VAR2->VAR41.VAR44;
break;
case VAR46:
VAR26 = (VAR24 *)VAR2->VAR41.VAR44;
break;
case VAR47:
VAR15 = (int)VAR2->VAR41.VAR42;
break;
}


for (VAR25 = VAR26; VAR25->VAR48 != VAR49; VAR25++) {
switch (VAR25->VAR48) {
case VAR50:

VAR16 = (int)VAR25->VAR51.VAR52;
break;
case VAR53:

VAR17 = VAR25->VAR51.VAR52;
break;
case VAR54:

VAR15 = (int)VAR25->VAR51.VAR52;
break;
case VAR55:

VAR21 = (VAR20 *)VAR25->VAR51.VAR56;
break;
case VAR57:

if (VAR7 == 0)
VAR7 = VAR25->VAR51.VAR52;
VAR11 = VAR25->VAR51.VAR52;
break;
case VAR58:

VAR29 = (VAR28)VAR25->VAR51.VAR52;
break;
case VAR59:

VAR27 = (VAR28)VAR25->VAR51.VAR52;
break;
case VAR60:

VAR32 = (VAR31)VAR25->VAR51.VAR52;
break;
case VAR61:

VAR30 = (VAR31)VAR25->VAR51.VAR52;
break;
case VAR62:

VAR33 = VAR25->VAR51.VAR56;
break;
case VAR63:

VAR34 = VAR25->VAR51.VAR56;
break;
case VAR64:

VAR36 = (int)VAR25->VAR51.VAR52;
break;
case VAR65:

VAR18[0] = (VAR66)VAR25->VAR51.VAR52;
break;
case VAR67:

VAR18[1] = (VAR66)VAR25->VAR51.VAR52;
break;
case VAR68:

VAR35 = VAR25->VAR51.VAR56;
break;
}
}



VAR19 = (VAR3 *)((char *)VAR4 + VAR7);
for (VAR4 = VAR19; VAR4->VAR69 != VAR70; VAR4++) {
switch (VAR4->VAR69) {
case VAR71:
VAR5 = VAR4->VAR72.VAR73 + VAR7;
break;
case VAR74:
VAR6 = VAR4->VAR72.VAR75;
break;
case VAR76:
VAR8 = VAR4->VAR72.VAR75;
break;
case VAR77:
VAR9 = VAR4->VAR72.VAR73 + VAR7;
break;
case VAR78:
VAR10 = VAR4->VAR72.VAR75;
break;
}
}
VAR12 = (char *)VAR9 + VAR10;


if (VAR8 == 0)
VAR8 = sizeof (VAR79);


for (; VAR6; VAR6--) {
ulong_t	VAR80;

VAR80 = ((VAR79 *)VAR5)->VAR81 + VAR7;
*((VAR82 *)VAR80) = VAR7 +
((VAR79 *)VAR5)->VAR83;
VAR5 += VAR8;
}


if (VAR35 != NULL) {
VAR34 = VAR35;
VAR84 |= VAR85;
}



if ((VAR23 = FUN2((char **)VAR13, (VAR24 *)VAR26, VAR17, VAR33,
VAR15, VAR12, VAR7, VAR11, VAR16, VAR21,
VAR34, VAR14, VAR27, VAR29, VAR30, VAR32,

NULL, VAR36, VAR18)) == NULL) {
FUN3(&VAR86, 1);
}


return (FUN4(VAR23)());
}