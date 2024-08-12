static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
int VAR5, int *VAR6, unsigned long long *VAR7)
{
long long FUN2(VAR8);
int VAR9, VAR10 = 0, VAR11 = -1, VAR12 = 0;

FUN3("", VAR5);


VAR9 = FUN4(VAR2, VAR5);
if (VAR9 < 0)
return VAR9;
else if (VAR9) {
VAR4->VAR13 += 1;
return 0;
}

VAR9 = FUN5(VAR2, VAR5, VAR14, 0);
if (VAR9 < 0)
return VAR9;
switch (VAR9) {
case 0:
break;
case VAR15:
VAR10 = 1;
break;
case VAR16:
VAR4->VAR17 += 1;
return FUN6(VAR4, VAR5, VAR18, VAR18,
VAR18, 0, &VAR4->VAR19);
case VAR20:
VAR4->VAR17 += 1;
return FUN6(VAR4, VAR5, VAR18, VAR18,
VAR18, 1, &VAR4->VAR19);
case VAR21:
case VAR22:

VAR12 = VAR9;
VAR8 = VAR18;
VAR10 = 1;
break;
default:
FUN7(VAR2, "",
VAR9);
return -VAR23;
}

if (!VAR12) {
int VAR24;


if (VAR14->VAR25 != VAR26) {
FUN7(VAR2, "",
VAR26, (int)VAR14->VAR25);
return -VAR23;
}

VAR8 = FUN8(VAR14->VAR8);
if (VAR8 > VAR27) {

FUN7(VAR2, "",
VAR27);
FUN9(VAR14);
return -VAR23;
}


VAR24 = FUN10(VAR14->VAR24);
if (!VAR2->VAR24)
VAR2->VAR24 = VAR24;
if (VAR24 && VAR2->VAR24 != VAR24) {
FUN7(VAR2, "",
VAR24, VAR5, VAR2->VAR24);
FUN9(VAR14);
return -VAR23;
}
}



VAR9 = FUN11(VAR2, VAR5, VAR28, 0);
if (VAR9 < 0)
return VAR9;
switch (VAR9) {
case 0:
break;
case VAR15:
VAR10 = 1;
break;
case VAR21:
if (VAR12 == VAR21)

VAR4->VAR29 += 1;
case VAR22:
if (VAR12)

VAR9 = 0;
else

VAR9 = FUN12(VAR2, VAR28, VAR5);

if (VAR9 < 0)
return VAR9;
else if (!VAR9)

VAR9 = FUN6(VAR4, VAR5, VAR18,
VAR18, VAR8, 1, &VAR4->VAR19);
else

VAR9 = FUN13(VAR4, VAR5, VAR8);
if (VAR9)
return VAR9;
goto VAR30;
case VAR20:
VAR9 = FUN6(VAR4, VAR5, VAR18, VAR18,
VAR8, 1, &VAR4->VAR19);
if (VAR9)
return VAR9;
goto VAR30;
case VAR16:
if (VAR12 || VAR10)
VAR9 = FUN6(VAR4, VAR5, VAR18,
VAR18, VAR8, 1, &VAR4->VAR19);
else
VAR9 = FUN6(VAR4, VAR5, VAR18,
VAR18, VAR8, 0, &VAR4->free);
if (VAR9)
return VAR9;
goto VAR30;
default:
FUN7(VAR2, "",
VAR9);
return -VAR23;
}

VAR11 = FUN10(VAR28->VAR11);
if (VAR6)
*VAR6 = VAR11;
if (VAR7)
*VAR7 = FUN8(VAR28->VAR7);
if (VAR11 > VAR31 && VAR11 != VAR32) {
int VAR33 = FUN10(VAR28->VAR33);


switch (VAR28->VAR34) {
case VAR35:
if (VAR11 != VAR36
&& VAR11 != VAR37) {
FUN14(VAR2, ""delete\"",
VAR11, VAR33);
}
VAR9 = FUN6(VAR4, VAR5, VAR11, VAR33,
VAR8, 1, &VAR4->VAR19);
if (VAR9)
return VAR9;
return 0;

case VAR38:
FUN14(VAR2, "",
VAR11, VAR33);
VAR2->VAR39 = 1;
break;

case VAR40:
FUN14(VAR2, ""VAR41\"",
VAR11, VAR33);
VAR9 = FUN6(VAR4, VAR5, VAR11, VAR33,
VAR8, 0, &VAR4->VAR42);
if (VAR9)
return VAR9;
return 0;

case VAR43:
FUN7(VAR2, "",
VAR11, VAR33);
return -VAR23;
}
}

if (VAR12)
FUN15(VAR2, "",
VAR5);
VAR9 = FUN16(VAR2, VAR4, VAR5, VAR8, VAR28, VAR10);
if (VAR9)
return VAR9;

VAR30:
if (!VAR12) {
VAR4->VAR44 += VAR8;
VAR4->VAR45 += 1;
if (VAR8 > VAR4->VAR46)
VAR4->VAR46 = VAR8;
if (VAR8 < VAR4->VAR47)
VAR4->VAR47 = VAR8;
}

return 0;
}