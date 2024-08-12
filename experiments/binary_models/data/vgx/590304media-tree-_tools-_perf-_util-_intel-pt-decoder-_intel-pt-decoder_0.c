static int FUN1(struct VAR1 *VAR2)
{
bool VAR3 = false;
int VAR4;

while (1) {
VAR4 = FUN2(VAR2);
if (VAR4)
return VAR4;
VAR5:
switch (VAR2->VAR6.VAR7) {
case VAR8:
if (!VAR2->VAR6.VAR9)
break;
VAR2->VAR10 = VAR2->VAR6;
VAR2->VAR11 = VAR12;
VAR4 = FUN3(VAR2);
if (VAR4 == -VAR13)
break;
return VAR4;

case VAR14:
if (VAR2->VAR6.VAR9 != 0)
FUN4(VAR2);
VAR2->VAR11 = VAR15;
return FUN5(VAR2);

case VAR16: {
VAR2->VAR17 = true;
if (VAR2->VAR6.VAR9 == 0) {
FUN6("",
VAR2->VAR18);
break;
}
FUN7(VAR2);
VAR2->VAR19.VAR20 = 0;
VAR2->VAR19.VAR21 = VAR2->VAR22;
return 0;
}

case VAR23:
return FUN8(VAR2);

case VAR24:
if (VAR2->VAR6.VAR9 != 0)
FUN4(VAR2);
VAR2->VAR11 = VAR25;
return FUN5(VAR2);

case VAR26:
if (VAR2->VAR6.VAR9 == 0) {
FUN6("",
VAR2->VAR18);
VAR3 = false;
break;
}
FUN4(VAR2);
VAR4 = FUN9(VAR2);
if (VAR4 != -VAR13) {
if (VAR4)
return VAR4;
if (VAR3)
VAR2->VAR11 =
VAR27;
else
VAR2->VAR11 = VAR28;
return 0;
}
if (VAR3) {
VAR3 = false;
break;
}
return FUN10(VAR2);

case VAR29:
VAR2->VAR17 = false;
VAR2->VAR30 = false;
FUN11(VAR2);
VAR2->VAR31 = false;
break;

case VAR32:
FUN12(&VAR2->VAR33);
VAR4 = FUN13(VAR2);
if (VAR4 == -VAR13)
goto VAR5;
if (VAR4)
return VAR4;
break;

case VAR34:
VAR2->VAR35 = VAR2->VAR6.VAR36 & (VAR37 - 1);
break;

case VAR38:
FUN14(VAR2);
if (VAR2->VAR39 != VAR40)
break;

if (!VAR2->VAR41)
break;
VAR2->VAR41 = false;

if (!VAR2->VAR42)
break;
VAR2->VAR19.VAR7 = VAR43;
VAR2->VAR19.VAR20 = VAR2->VAR22;
VAR2->VAR19.VAR21 = 0;
VAR2->VAR41 = false;
return 0;

case VAR44:
FUN15(VAR2);
break;

case VAR45:
FUN16(VAR2);
break;

case VAR46:
FUN17(VAR2);
break;

case VAR47:
FUN18(VAR2);
break;

case VAR48:
VAR2->VAR49 = VAR2->VAR6.VAR36;
break;

case VAR50:

if (!VAR2->VAR17) {
FUN19(VAR2);
break;
}
VAR4 = FUN20(VAR2, &VAR3);
if (VAR4)
return VAR4;
goto VAR5;

case VAR51: 
return FUN21(VAR2);

case VAR52:
case VAR53:
case VAR54:
case VAR55:
break;

default:
return FUN21(VAR2);
}
}
}