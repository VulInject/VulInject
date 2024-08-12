static int FUN1(char *VAR1, struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
substring_t VAR6[VAR7];
char *VAR8 = VAR1;
int VAR9;
int VAR10;
unsigned long VAR11;
unsigned long VAR12;
unsigned long VAR13 = 0;
unsigned int VAR14;
int VAR15;
int VAR16;

VAR16 = FUN2(VAR17);
if (VAR16 < 0)
return VAR16;

VAR5->VAR18 = VAR16 ? VAR19 : VAR20;

if (!VAR1)
return 0;

while ((VAR8 = FUN3(&VAR1, ""))) {
if (*VAR8 == '' || *VAR8 == '' || *VAR8 == '')
continue;
VAR9 = FUN4(VAR8, VAR21, VAR6);
if (FUN5(VAR9, &VAR13))
return -VAR22;

switch (VAR9) {
case VAR23:
VAR5->VAR24 = strlen(VAR6[0].VAR25) / 2;
if (VAR5->VAR24 > VAR26)
return -VAR22;
VAR10 = FUN6(VAR5->VAR27, VAR6[0].VAR25,
VAR5->VAR24);
if (VAR10 < 0)
return -VAR22;
break;
case VAR28:
VAR10 = FUN7(VAR6[0].VAR25, 16, &VAR11);
if (VAR10 < 0)
return -VAR22;
VAR5->VAR29 = VAR30;
VAR5->VAR31 = VAR11;
break;
case VAR32:
if (strlen(VAR6[0].VAR25) != 2 * VAR33)
return -VAR22;
VAR10 = FUN6(VAR5->VAR34, VAR6[0].VAR25,
VAR33);
if (VAR10 < 0)
return -VAR22;
break;
case VAR35:

VAR5->VAR36 = strlen(VAR6[0].VAR25);

if (VAR5->VAR36 == 2 * VAR37) {
VAR10 = FUN6(VAR5->VAR38, VAR6[0].VAR25,
VAR37);
if (VAR10 < 0)
return -VAR22;

VAR5->VAR36 = VAR37;
break;
}

if (VAR16 && VAR5->VAR36 <= sizeof(VAR5->VAR38)) {
memcpy(VAR5->VAR38, VAR6[0].VAR25,
VAR5->VAR36);
break;
}

return -VAR22;

break;

case VAR39:
if (*VAR6[0].VAR25 == '')
VAR3->VAR40 = 0;
else if (*VAR6[0].VAR25 != '')
return -VAR22;
break;
case VAR41:
VAR10 = FUN7(VAR6[0].VAR25, 10, &VAR12);
if (VAR10 < 0)
return -VAR22;
VAR5->VAR42 = VAR12;
break;
case VAR43:
if (FUN8(VAR44, &VAR13))
return -VAR22;
for (VAR15 = 0; VAR15 < VAR45; VAR15++) {
if (!strcmp(VAR6[0].VAR25, VAR46[VAR15])) {
VAR5->VAR18 = VAR15;
break;
}
}
if (VAR15 == VAR45)
return -VAR22;
if  (!VAR16 && VAR15 != VAR20) {
FUN9("");
return -VAR22;
}
break;
case VAR44:
VAR14 = VAR47[VAR5->VAR18];
if (!VAR16 || strlen(VAR6[0].VAR25) != (2 * VAR14))
return -VAR22;
VAR10 = FUN6(VAR5->VAR48, VAR6[0].VAR25,
VAR14);
if (VAR10 < 0)
return -VAR22;
VAR5->VAR49 = VAR14;
break;
case VAR50:
if (!VAR16)
return -VAR22;
VAR10 = FUN7(VAR6[0].VAR25, 16, &VAR11);
if (VAR10 < 0)
return -VAR22;
VAR5->VAR51 = VAR11;
break;
default:
return -VAR22;
}
}
return 0;
}