VAR1 *
FUN1(ilbd_cmd_t VAR2, VAR3 *VAR4)
{
VAR1	*VAR5;
size_t		VAR6;

VAR6 = sizeof (VAR1);

switch (VAR2) {
case VAR7:
VAR6 += sizeof (VAR8);
break;

case VAR9:
case VAR10:
case VAR11:
case VAR12:
case VAR13:
case VAR14:
case VAR15:
case VAR16:
case VAR17:
case VAR18:
VAR6 += sizeof (VAR19);
break;

case VAR20:
case VAR21:
case VAR22:
case VAR23:
case VAR24:
case VAR25:
VAR6 += sizeof (VAR26) + sizeof (VAR27);
break;

case VAR28:
VAR6 += sizeof (VAR29);
break;

default:

assert(0);
break;
}

if ((VAR5 = calloc(1, VAR6)) == NULL)
return (NULL);

*VAR4 = VAR6;
VAR5->VAR30 = VAR2;
VAR5->VAR31 = 0;
return (VAR5);
}