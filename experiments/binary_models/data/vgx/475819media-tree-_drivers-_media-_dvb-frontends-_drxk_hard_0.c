static int FUN1(struct VAR1 *VAR2)
{
u16 VAR3 = 0;
u32 VAR4 = 0;
int VAR5;
const char *VAR6 = "";

FUN2(1, "");



VAR5 = FUN3(VAR2, VAR7,
VAR8);
if (VAR5 < 0)
goto VAR9;
VAR5 = FUN3(VAR2, VAR10, VAR11);
if (VAR5 < 0)
goto VAR9;
VAR5 = FUN4(VAR2, VAR12, &VAR3);
if (VAR5 < 0)
goto VAR9;
VAR5 = FUN3(VAR2, VAR10, 0x0000);
if (VAR5 < 0)
goto VAR9;

switch ((VAR3 & VAR13)) {
case 0:

break;
case 1:

VAR2->VAR14 = 27000;
break;
case 2:

VAR2->VAR14 = 20250;
break;
case 3:

VAR2->VAR14 = 20250;
break;
default:
FUN5("");
return -VAR15;
}

VAR5 = FUN6(VAR2, VAR16, &VAR4);
if (VAR5 < 0)
goto VAR9;

FUN7("", VAR4);


switch ((VAR4 >> 29) & 0xF) {
case 0:
VAR2->VAR17 = VAR18;
VAR6 = "";
break;
case 2:
VAR2->VAR17 = VAR19;
VAR6 = "";
break;
case 3:
VAR2->VAR17 = VAR20;
VAR6 = "";
break;
default:
VAR2->VAR17 = VAR21;
VAR5 = -VAR15;
FUN5("", (VAR4 >> 29) & 0xF);
goto VAR22;
}
switch ((VAR4 >> 12) & 0xFF) {
case 0x13:

VAR2->VAR23 = false;
VAR2->VAR24 = false;
VAR2->VAR25 = false;
VAR2->VAR26 = false;
VAR2->VAR27 = true;
VAR2->VAR28 = true;
VAR2->VAR29 = true;
VAR2->VAR30 = false;
VAR2->VAR31 = false;
VAR2->VAR32 = false;
break;
case 0x15:

VAR2->VAR23 = false;
VAR2->VAR24 = false;
VAR2->VAR25 = true;
VAR2->VAR26 = false;
VAR2->VAR27 = true;
VAR2->VAR28 = false;
VAR2->VAR29 = true;
VAR2->VAR30 = true;
VAR2->VAR31 = true;
VAR2->VAR32 = false;
break;
case 0x16:

VAR2->VAR23 = false;
VAR2->VAR24 = false;
VAR2->VAR25 = true;
VAR2->VAR26 = false;
VAR2->VAR27 = true;
VAR2->VAR28 = false;
VAR2->VAR29 = true;
VAR2->VAR30 = true;
VAR2->VAR31 = true;
VAR2->VAR32 = false;
break;
case 0x18:

VAR2->VAR23 = false;
VAR2->VAR24 = false;
VAR2->VAR25 = true;
VAR2->VAR26 = true;
VAR2->VAR27 = true;
VAR2->VAR28 = false;
VAR2->VAR29 = true;
VAR2->VAR30 = true;
VAR2->VAR31 = true;
VAR2->VAR32 = false;
break;
case 0x21:

VAR2->VAR23 = false;
VAR2->VAR24 = false;
VAR2->VAR25 = true;
VAR2->VAR26 = true;
VAR2->VAR27 = true;
VAR2->VAR28 = true;
VAR2->VAR29 = true;
VAR2->VAR30 = true;
VAR2->VAR31 = true;
VAR2->VAR32 = false;
break;
case 0x23:

VAR2->VAR23 = false;
VAR2->VAR24 = false;
VAR2->VAR25 = true;
VAR2->VAR26 = true;
VAR2->VAR27 = true;
VAR2->VAR28 = true;
VAR2->VAR29 = true;
VAR2->VAR30 = true;
VAR2->VAR31 = true;
VAR2->VAR32 = false;
break;
case 0x25:

VAR2->VAR23 = false;
VAR2->VAR24 = false;
VAR2->VAR25 = true;
VAR2->VAR26 = true;
VAR2->VAR27 = true;
VAR2->VAR28 = true;
VAR2->VAR29 = true;
VAR2->VAR30 = true;
VAR2->VAR31 = true;
VAR2->VAR32 = false;
break;
case 0x26:

VAR2->VAR23 = false;
VAR2->VAR24 = false;
VAR2->VAR25 = true;
VAR2->VAR26 = false;
VAR2->VAR27 = true;
VAR2->VAR28 = true;
VAR2->VAR29 = true;
VAR2->VAR30 = true;
VAR2->VAR31 = true;
VAR2->VAR32 = false;
break;
default:
FUN5("",
((VAR4 >> 12) & 0xFF));
VAR5 = -VAR15;
goto VAR22;
}

FUN7("",
((VAR4 >> 12) & 0xFF), VAR6,
VAR2->VAR14 / 1000,
VAR2->VAR14 % 1000);

VAR9:
if (VAR5 < 0)
FUN5("", VAR5, VAR33);

VAR22:
return VAR5;
}