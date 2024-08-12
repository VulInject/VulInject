static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR5;
struct VAR6 *VAR7 = FUN2(VAR5);
u8 VAR8 = 0;

switch (VAR3 & VAR9) {
case VAR10:
FUN3(VAR5, VAR11,
VAR12,
VAR12);
break;
case VAR13:
FUN3(VAR5, VAR11,
VAR12,
0);
break;
default:
return -VAR14;
}


switch (VAR3 & VAR15) {
case VAR16:
VAR8 |= VAR16;
break;
case VAR17:
VAR8 |= VAR17;
break;
case VAR18:
VAR8 |= VAR18;
break;
default:
return -VAR14;
}

VAR7->VAR19 = VAR8;
return 0;
}