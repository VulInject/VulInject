void
FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4;

VAR3 = FUN2(VAR2, VAR5);
VAR3 |= VAR6;
FUN3(VAR2, VAR5, VAR3);

for (VAR4 = 0; VAR4 < 500; VAR4++) {
FUN4(1);
VAR3 = FUN2(VAR2, VAR5);
if (!(VAR3 & VAR6))
break;
}


VAR3 = FUN2(VAR2, VAR7);


VAR3 |= VAR8;


switch (VAR2->VAR9) {
case VAR10:
case VAR11:

VAR3 |= (VAR12 >> 1);
break;
default:

if (VAR2->VAR13 & VAR14)
VAR3 &= ~VAR12;
else
VAR3 |= VAR12;
}


switch(VAR2->VAR9) {
case VAR10:
VAR3 &= ~VAR15;
break;
case VAR16:
case VAR17:
case VAR18:
case VAR19:
VAR3 &= ~VAR20;
break;
}


if (VAR2->VAR9 == VAR10)
VAR3 &= ~VAR21;


if (VAR2->VAR9 == VAR10)
VAR3 |= VAR22;

FUN3(VAR2, VAR7, VAR3);


VAR3 = FUN2(VAR2, VAR23);
VAR3 |= VAR24;
FUN3(VAR2, VAR23, VAR3);


if (VAR2->VAR9 == VAR10 &&
FUN2(VAR2, 0x16) == 0) {
VAR3 = (0x0b << 8) | (0x05 << 4) | 0x04;	
FUN3(VAR2, 0x16, VAR3);
}


VAR3 = FUN2(VAR2, VAR5);
VAR3 &= ~VAR25;
FUN3(VAR2, VAR5, VAR3 | VAR6);
}