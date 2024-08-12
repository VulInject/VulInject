static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR5;
u16 VAR6 = 0;
u16 VAR7 = FUN2(VAR5, VAR8) & 0x1fe;


switch (VAR3 & VAR9) {
case VAR10:
VAR7 |= 0x0001;
break;
case VAR11:
break;
default:
return -VAR12;
}


switch (VAR3 & VAR13) {
case VAR14:
VAR6 |= 0x0010;
break;
case VAR15:
break;
case VAR16:
VAR6 |= 0x0008;
break;
case VAR17:
VAR6 |= 0x00018;
break;
default:
return -VAR12;
}


switch (VAR3 & VAR18) {
case VAR19:
break;
case VAR20:
VAR6 |= 0x0180;
break;
case VAR21:
VAR6 |= 0x0100;
break;
case VAR22:
VAR6 |= 0x0080;
break;
default:
return -VAR12;
}

FUN3(VAR5, VAR23, VAR6);
FUN3(VAR5, VAR8, VAR7);
return 0;
}