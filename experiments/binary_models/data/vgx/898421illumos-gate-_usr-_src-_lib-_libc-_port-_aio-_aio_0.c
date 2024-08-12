int
FUN1(VAR1 *VAR2, int VAR3)
{
VAR4 *VAR5, **VAR6, **VAR7;
int *VAR8;
void *(*VAR9)(void *);
sigset_t VAR10;
int VAR11;


switch (VAR3) {
case VAR12:
case VAR13:
case VAR14:
case VAR15:
case VAR16:
case VAR17:
VAR6 = &VAR18;
VAR7 = &VAR19;
VAR8 = &VAR20;
VAR9 = VAR21;
break;
case VAR22:
VAR6 = &VAR23;
VAR7 = &VAR24;
VAR9 = VAR25;
VAR8 = &VAR26;
break;
default:
FUN2("");
break;
}

if ((VAR5 = FUN3()) == NULL)
return (-1);

if (VAR2) {
VAR2->VAR27 = VAR28;
VAR2->VAR29 = VAR5;
VAR5->VAR30 = VAR2;
VAR5->VAR31 = VAR2;
VAR5->VAR32 = VAR2;
VAR5->VAR33 = 1;
VAR5->VAR34 = 1;
}

(void) FUN4(VAR35, &VAR36, &VAR10);
VAR11 = FUN5(NULL, VAR37, VAR9, VAR5,
VAR38 | VAR39, &VAR5->VAR40);
(void) FUN4(VAR35, &VAR10, NULL);
if (VAR11) {
if (VAR2) {
VAR2->VAR27 = 0;
VAR2->VAR29 = NULL;
}
FUN6(VAR5);
return (-1);
}

FUN7(&VAR41);
(*VAR8)++;
if (*VAR6 == NULL) {
VAR5->VAR42 = VAR5;
VAR5->VAR43 = VAR5;
*VAR7 = VAR5;
*VAR6 = VAR5;
} else {
VAR5->VAR43 = (*VAR6)->VAR43;
VAR5->VAR42 = (*VAR6);
(*VAR6)->VAR43->VAR42 = VAR5;
(*VAR6)->VAR43 = VAR5;
}
VAR44++;
FUN8(&VAR41);

(void) FUN9(VAR5->VAR40);

return (0);
}