static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
unsigned long VAR6;

VAR6 = FUN3(VAR5->VAR7 + VAR8);
VAR6 &= ~(VAR9 | VAR10 |
VAR11 | VAR12 |
VAR13);

switch (VAR3 & VAR14) {
case VAR15:
VAR6 |= (VAR16 | VAR17);
break;
case VAR18:
VAR6 |= (VAR16 | VAR19);
break;
case VAR20:
VAR6 |= (VAR16 | VAR21);
break;
default:
FUN4(VAR2->VAR22, "");
return -VAR23;
}

switch (VAR3 & VAR24) {
case VAR25:
VAR5->VAR26 = 1;
VAR6 |= VAR27;
break;
case VAR28:
VAR5->VAR26 = 0;
VAR6 |= VAR29;
break;
default:
FUN4(VAR2->VAR22, "");
return -VAR23;
}

FUN5(VAR6, VAR5->VAR7 + VAR8);
return 0;
}