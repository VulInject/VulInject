VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR9;
int VAR10;
int VAR11;
char *VAR12;
struct VAR13 *VAR14;
long VAR15;
unsigned long VAR16;

VAR9 = FUN2(VAR5->VAR5.VAR17);
if (!VAR9)
return -VAR18;
if (!VAR9->VAR19)
return 0;
VAR10 = 0;
VAR12 = (char *)VAR6;
FUN3(VAR12);

FUN4(&VAR20.VAR21, VAR16);
switch (VAR9->VAR22) {
case VAR23:
case VAR24:
if (*VAR12 == '' || *VAR12 == '' || *VAR12 == '')
VAR11 = VAR25;
else if (*VAR12 == '' || *VAR12 == '')
VAR11 = VAR26;
else
VAR11 = VAR27;
if (FUN5(VAR12, 10, &VAR15) == 0)
VAR10 = FUN6(VAR15, VAR9, VAR11);
else
FUN7("");
if (VAR10 == -VAR28) {
VAR14 = VAR9->VAR19;
FUN7("",
VAR9->VAR17,
VAR14->VAR29.VAR30.VAR31, VAR14->VAR29.VAR30.VAR32);
}


if (VAR9->VAR33 == VAR34 && VAR35 &&
(VAR10 == 0 || VAR10 == -VAR36)) {
VAR14 = VAR9->VAR19;
VAR15 = VAR14->VAR29.VAR30.VAR15;
FUN8("", VAR35->VAR37,
VAR15);
FUN8("", VAR35->VAR38,
VAR15);
}
break;
case VAR39:
VAR11 = strlen(VAR12);
if ((VAR11 >= 1) && (VAR12[VAR11 - 1] == ''))
--VAR11;
if ((VAR11 >= 2) && (VAR12[0] == '')) {
++VAR12;
VAR11 -= 2;
}
VAR12[VAR11] = '';
VAR10 = FUN9(VAR12, VAR9, VAR11);
if (VAR10 == -VAR40)
FUN7("",
VAR9->VAR17);
break;
default:
FUN7("",
VAR9->VAR17, (int)VAR9->VAR22);
break;
}
FUN10(&VAR20.VAR21, VAR16);

if (VAR10 == -VAR36)
FUN11("", VAR9->VAR17);
return VAR7;
}