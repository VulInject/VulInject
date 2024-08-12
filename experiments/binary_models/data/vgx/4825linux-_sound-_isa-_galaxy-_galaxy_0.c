static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
if (!VAR4[VAR3])
return 0;

switch (VAR5[VAR3]) {
case VAR6:
FUN2(VAR2, "");
return 0;
case 0x220:
VAR7[VAR3] |= VAR8;
break;
case 0x240:
VAR7[VAR3] |= VAR9;
break;
case 0x260:
VAR7[VAR3] |= VAR10;
break;
case 0x280:
VAR7[VAR3] |= VAR11;
break;
default:
FUN2(VAR2, "", VAR5[VAR3]);
return 0;
}

switch (VAR12[VAR3]) {
case VAR6:
FUN2(VAR2,  "");
return 0;
case 0x530:
VAR7[VAR3] |= VAR13 | VAR14;
break;
case 0x604:
VAR7[VAR3] |= VAR13 | VAR15;
break;
case 0xe80:
VAR7[VAR3] |= VAR13 | VAR16;
break;
case 0xf40:
VAR7[VAR3] |= VAR13 | VAR17;
break;
default:
FUN2(VAR2, "", VAR12[VAR3]);
return 0;
}

switch (VAR18[VAR3]) {
case VAR19:
FUN2(VAR2,  "");
return 0;
case 7:
VAR20[VAR3] |= VAR21;
break;
case 2:
VAR18[VAR3] = 9;
VAR22;
case 9:
VAR20[VAR3] |= VAR23;
break;
case 10:
VAR20[VAR3] |= VAR24;
break;
case 11:
VAR20[VAR3] |= VAR25;
break;
default:
FUN2(VAR2, "", VAR18[VAR3]);
return 0;
}

switch (VAR26[VAR3]) {
case VAR27:
FUN2(VAR2,  "");
return 0;
case 0:
VAR20[VAR3] |= VAR28;
break;
case 1:
VAR20[VAR3] |= VAR29;
break;
case 3:
VAR20[VAR3] |= VAR30;
break;
default:
FUN2(VAR2, "", VAR26[VAR3]);
return 0;
}

if (VAR31[VAR3] == VAR27 || VAR31[VAR3] == VAR26[VAR3]) {
VAR31[VAR3] = -1;
goto VAR32;
}

VAR20[VAR3] |= VAR33;
switch (VAR31[VAR3]) {
case 0:
break;
case 1:
if (VAR26[VAR3] == 0)
break;
VAR22;
default:
FUN2(VAR2, "", VAR31[VAR3]);
return 0;
}

VAR32:
switch (VAR34[VAR3]) {
case VAR6:
FUN3(VAR2, "");
VAR34[VAR3] = -1;
goto VAR35;
case 0x300:
VAR7[VAR3] |= VAR36 | VAR37;
break;
case 0x330:
VAR7[VAR3] |= VAR36 | VAR38;
break;
default:
FUN2(VAR2, "", VAR34[VAR3]);
return 0;
}

switch (VAR39[VAR3]) {
case VAR19:
FUN3(VAR2, "");
VAR39[VAR3] = -1;
break;
case 2:
VAR39[VAR3] = 9;
VAR22;
case 9:
VAR7[VAR3] |= VAR40;
break;
case 3:
VAR7[VAR3] |= VAR41;
break;
case 5:
VAR7[VAR3] |= VAR42;
break;
case 7:
VAR7[VAR3] |= VAR43;
break;
case 10:
VAR7[VAR3] |= VAR44;
break;
default:
FUN2(VAR2, "", VAR39[VAR3]);
return 0;
}

if (VAR39[VAR3] == VAR18[VAR3]) {
FUN2(VAR2, "");
return 0;
}

VAR35:
switch (VAR45[VAR3]) {
case VAR6:
FUN3(VAR2, "");
VAR45[VAR3] = -1;
break;
case 0x388:
break;
default:
FUN2(VAR2, "", VAR45[VAR3]);
return 0;
}

VAR7[VAR3] |= VAR46;
return 1;
}