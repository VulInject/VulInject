static int FUN1(char *VAR1, struct VAR2 *VAR3)
{
char *VAR4;
int VAR5;

VAR3->VAR6 = '';
VAR3->VAR7 = 1;
VAR3->VAR8 = 1;
VAR3->VAR9 = 0;
VAR3->VAR10 = 0;
VAR3->VAR11 = 0;
VAR3->VAR12 = '';		
VAR3->VAR13 = 0;
VAR3->VAR14 = 1024;
VAR3->VAR15 = VAR3->VAR16 = VAR17;
VAR3->VAR18 = 0;
VAR3->VAR19 = 0;
VAR3->VAR20 = VAR21;
VAR3->VAR22 = VAR23;
VAR3->VAR24 = NULL;
VAR3->VAR25 = 0;
VAR3->VAR26 = 0;
VAR3->VAR27=-1;
VAR3->VAR28=-1;
if (!VAR1)
return 1;

while ((VAR4 = FUN2(&VAR1, "")) != NULL) {
int VAR29;
substring_t VAR30[VAR31];
unsigned VAR32;

if (!*VAR4)
continue;

VAR29 = FUN3(VAR4, VAR33, VAR30);
switch (VAR29) {
case VAR34:
VAR3->VAR7 = 0;
break;
case VAR35:
VAR3->VAR8 = 0;
break;
case VAR36:
VAR3->VAR10 = 1;
break;
case VAR37:
case VAR38:
VAR3->VAR11 = 1;
break;
case VAR39:
VAR3->VAR9 = 1;
break;
case VAR40:
VAR3->VAR25 = 1;
break;
case VAR41:
VAR3->VAR24 = FUN4(&VAR30[0]);
break;
case VAR42:
VAR3->VAR6 = '';
break;
case VAR43:
VAR3->VAR6 = '';
break;
case VAR44:
VAR3->VAR6 = '';
break;
case VAR45:
if (FUN5(&VAR30[0], &VAR5))
return 0;
VAR32 = VAR5;
if (VAR32 > 99)
return 0;
VAR3->VAR27 = VAR32 + 1;
break;
case VAR46:
if (FUN5(&VAR30[0], &VAR5))
return 0;
VAR3->VAR28 = VAR5;
break;
case VAR47:
VAR3->VAR12 = '';
break;
case VAR48:
VAR3->VAR12 = '';
break;
case VAR49:
break;
case VAR50:
if (FUN5(&VAR30[0], &VAR5))
return 0;
VAR3->VAR22 = FUN6(FUN7(), VAR5);
if (!FUN8(VAR3->VAR22))
return 0;
VAR3->VAR18 = 1;
break;
case VAR51:
if (FUN5(&VAR30[0], &VAR5))
return 0;
VAR3->VAR20 = FUN9(FUN7(), VAR5);
if (!FUN10(VAR3->VAR20))
return 0;
VAR3->VAR19 = 1;
break;
case VAR52:
if (FUN5(&VAR30[0], &VAR5))
return 0;
VAR3->VAR15 = VAR5;
break;
case VAR53:
if (FUN5(&VAR30[0], &VAR5))
return 0;
VAR3->VAR16 = VAR5;
break;
case VAR54:
VAR3->VAR26 = 1;
break;
case VAR55:
if (FUN5(&VAR30[0], &VAR5))
return 0;
VAR32 = VAR5;
if (VAR32 != 512 && VAR32 != 1024 && VAR32 != 2048)
return 0;
VAR3->VAR14 = VAR32;
break;
case VAR56:
VAR3->VAR13 = 1;
break;
default:
return 0;
}
}
return 1;
}