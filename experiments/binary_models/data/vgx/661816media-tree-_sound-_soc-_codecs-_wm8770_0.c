static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5;
int VAR6, VAR7;

VAR5 = VAR2->VAR5;

switch (VAR3 & VAR8) {
case VAR9:
VAR7 = 0x100;
break;
case VAR10:
VAR7 = 0;
break;
default:
return -VAR11;
}

VAR6 = 0;
switch (VAR3 & VAR12) {
case VAR13:
VAR6 |= 0x2;
break;
case VAR14:
break;
case VAR15:
VAR6 |= 0x1;
break;
default:
return -VAR11;
}

switch (VAR3 & VAR16) {
case VAR17:
break;
case VAR18:
VAR6 |= 0xc;
break;
case VAR19:
VAR6 |= 0x8;
break;
case VAR20:
VAR6 |= 0x4;
break;
default:
return -VAR11;
}

FUN2(VAR5, VAR21, 0xf, VAR6);
FUN2(VAR5, VAR22, 0x100, VAR7);

return 0;
}