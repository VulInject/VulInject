static long
FUN1(VAR1 *VAR2, int VAR3, long VAR4, void *VAR5)
{
int *VAR6;
long VAR7 = 1;
VAR8 *VAR9;
char **VAR10;

VAR9 = (VAR8 *)VAR2->VAR5;

switch (VAR3) {
case VAR11:
VAR7 = 0;
VAR9->VAR12 = VAR13;
FUN2(VAR2);
VAR2->VAR14 = 0;
break;
case VAR15:

VAR7 = (long)FUN3(VAR2, VAR9);
break;
case VAR16:
if (VAR5 != NULL) {
if (VAR4 == 0) {
VAR2->VAR17 = 1;
free(VAR9->VAR18);
VAR9->VAR18 = strdup(VAR5);
} else if (VAR4 == 1) {
VAR9->VAR19 = (VAR5 != NULL);
} else if (VAR4 == 2) {
FUN4(VAR9->VAR20);
VAR9->VAR20 = (VAR1 *)VAR5;
}
}
break;
case VAR21:
VAR9->VAR22 = (int)VAR4;
break;
case VAR23:
VAR2->VAR17 = 1;
VAR2->VAR4= *((int *)VAR5);
VAR9->VAR24 = VAR2->VAR4;
VAR9->VAR12 = VAR25;
VAR2->VAR26 = (int)VAR4;
VAR2->VAR17 = 1;
break;
case VAR27:
if (VAR2->VAR17) {
VAR6 = (int *)VAR5;
if (VAR6 != NULL)
*VAR6 = VAR9->VAR24;
VAR7 = VAR9->VAR24;
} else
VAR7 = -1;
break;
case VAR28:
if (VAR2->VAR17) {
if (VAR5 != NULL) {
VAR10 = (char **)VAR5;
*VAR10 = VAR9->VAR18;
} else
VAR7 = -1;
} else
VAR7 = -1;
break;
case VAR29:
VAR7 = VAR2->VAR26;
break;
case VAR30:
VAR2->VAR26 = (int)VAR4;
break;
case VAR31:
case VAR32:
VAR7 = 0;
break;
case VAR33:
break;
case VAR34:
VAR9->VAR35 = (int)VAR4;
break;
case VAR36:
VAR7 = (long)VAR9->VAR35;
break;
case VAR37:

break;

default:
VAR7 = 0;
break;
}
return (VAR7);
}