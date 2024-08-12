static void FUN1(VAR1 *VAR2,
int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
u32 VAR10, VAR11;
u32 VAR12, VAR13;
VAR14;

switch (VAR2->VAR12) {
case 16:
VAR12 = VAR15;
VAR13 = (((VAR7 & 0xf8) << 8) |
((VAR8 & 0xfc) << 3) | ((VAR9 & 0xf8) >> 3));
break;
case 24:
VAR12 = VAR16;
VAR13 = ((VAR7 << 16) | (VAR8 << 8) | VAR9);
break;
case 32:
VAR12 = VAR17;
VAR13 = (((0xff) << 24) | (VAR7 << 16) | (VAR8 << 8) | VAR9);
break;
default:
return;
}

VAR11 = VAR2->VAR18;
VAR10 = VAR2->VAR19 >> 3;

FUN2(6);

FUN3(FUN4(VAR20, 4));
FUN3(VAR21 |
VAR22 |
VAR12 |
VAR23 |
VAR24 |
VAR25 | VAR26);

FUN3((VAR10 << 21) | (VAR11 >> 5));
FUN3(VAR13);

FUN3((VAR3 << 16) | VAR4);
FUN3((VAR5 << 16) | VAR6);

FUN5();
}