void FUN1(int VAR1, int VAR2)
{
int VAR3;
struct termios VAR4;

FUN2(VAR1, 1);
if (FUN3(VAR1, &VAR4) < 0) {
if (!FUN4(VAR5))
FUN5("", VAR6);
return;
}

if (!VAR7)
VAR8 = VAR4;

VAR4.VAR9     &= ~(VAR10 | VAR11 | VAR12 | VAR13);
VAR4.VAR9     |= VAR14 | VAR15 | VAR16;

VAR4.VAR17      = VAR18 | VAR19;
VAR4.VAR20      = 0;
VAR4.VAR21      = 0;
VAR4.VAR22[VAR23]   = 1;
VAR4.VAR22[VAR24]  = 0;

if (VAR2 || !VAR25)
VAR4.VAR9 ^= (VAR13 | VAR16);

switch (VAR26) {
case 1:
VAR4.VAR9 |= VAR27;
break;

case -2:
VAR4.VAR17     |= VAR28 | VAR29;
VAR4.VAR22[VAR30]  = 0x13;	
VAR4.VAR22[VAR31] = 0x11;	
break;

case -1:
VAR4.VAR9 &= ~VAR27;
break;

default:
break;
}

if (VAR32 >= 2)
VAR4.VAR9 |= VAR11;

if (VAR33) {
VAR3 = FUN6(VAR33);
if (VAR3) {
FUN7 (&VAR4, VAR3);
FUN8 (&VAR4, VAR3);
VAR3 = FUN9(&VAR4);
VAR34 = FUN10(VAR3);
} else {
VAR4.VAR9 &= ~VAR35;
VAR4.VAR9 |= VAR36;
VAR4.VAR37 = VAR33;

VAR4.VAR9 &= ~(VAR35 << VAR38);
VAR4.VAR9 |= VAR39 << VAR38;
VAR4.VAR40 = VAR33;
VAR34 = VAR33;
VAR34 = 0;
}
}
else {
VAR3 = FUN9(&VAR4);
VAR34 = FUN10(VAR3);
if (!VAR34)
VAR34 = VAR4.VAR37;
}


if (!VAR34) {
if (VAR33)
FUN5("", VAR33);
else
FUN5("", VAR41);
}

while (FUN11(VAR1, VAR42, &VAR4) < 0 && !FUN4(VAR5))
if (VAR5 != VAR43)
FUN5("", VAR6);
VAR7 = 1;
}