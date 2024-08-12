VAR1
FUN1(void)
{
char	*VAR2;
attr_t	VAR3 = 0;

if (VAR4) {
for (VAR2 = VAR4; *VAR2 != ''; ++VAR2) {
if (VAR2[0] != '' || VAR2[1] != '' || !FUN2(VAR2[2]))
continue;

VAR2 += 2;
switch (*VAR2) {
case 1:
VAR3 |= VAR5;
break;
case 2:
VAR3 |= VAR6;
break;
case 3:
VAR3 |= VAR7;
break;
case 4:
VAR3 |= VAR8;
break;
case 5:
VAR3 |= VAR9;
break;
case 6:
VAR3 |= VAR10;
break;
case 7:
VAR3 |= VAR11;
break;
case 8:
VAR3 |= VAR12;
break;
case 9:
VAR3 |= VAR13;
break;
}
}
}

if (VAR14) {
for (VAR2 = VAR14; *VAR2 != ''; ++VAR2) {
if (VAR2[0] != '' || VAR2[1] != '' || !FUN2(VAR2[2]))
continue;

VAR2 += 2;
switch (*VAR2) {
case 1:
VAR3 |= VAR15;
break;
case 2:
VAR3 |= VAR16;
break;
case 3:
VAR3 |= VAR17;
break;
case 4:
VAR3 |= VAR18;
break;
case 5:
VAR3 |= VAR19;
break;
case 6:
VAR3 |= VAR20;
break;
}
}
}

if (VAR21 != NULL)
VAR3 |= VAR13;

if (VAR22 != NULL)
VAR3 |= VAR8;

if (VAR23 != NULL)
VAR3 |= VAR10;

if (VAR24 != NULL)
VAR3 |= VAR11;

if (VAR25 != NULL)
VAR3 |= VAR9;

if (VAR26 != NULL)
VAR3 |= VAR12;

if (VAR27 != NULL)
VAR3 |= VAR7;

if (VAR28 != NULL)
VAR3 |= VAR5;

if (VAR29 != NULL)
VAR3 |= VAR6;

if (VAR30 != NULL)
VAR3 |= VAR15;

if (VAR31 != NULL)
VAR3 |= VAR16;

if (VAR32 != NULL)
VAR3 |= VAR17;

if (VAR33 != NULL)
VAR3 |= VAR18;

if (VAR34 != NULL)
VAR3 |= VAR19;

if (VAR35 != NULL)
VAR3 |= VAR20;

return (VAR3);
}