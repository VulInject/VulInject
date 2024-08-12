static void FUN1(struct VAR1 *VAR1)
{
u64 VAR2, VAR3;
u8 VAR4;

VAR2 = FUN2(VAR1->VAR5, VAR1->VAR6,
VAR7);


if (!(VAR2 & VAR8))
VAR2 = FUN2(VAR1->VAR5, VAR1->VAR6,
VAR7);

if (FUN3(VAR1->VAR5, VAR1->VAR6, VAR7,
VAR9, false)) {
VAR1->VAR10 = false;
VAR1->VAR11 = VAR12;
VAR1->VAR13 = VAR14;
goto VAR15;
}

VAR1->VAR10 = ((VAR2 & VAR8) != 0) ? true : false;
VAR3 = FUN2(VAR1->VAR5, VAR1->VAR6,
VAR16);

VAR4 = (VAR3 >> 3) & 0x3;
VAR1->VAR13 = (VAR3 >> 1) & 0x1;
switch (VAR4) {
case 0:
VAR1->VAR11 = 10;
break;
case 1:
VAR1->VAR11 = 100;
break;
case 2:
VAR1->VAR11 = 1000;
break;
default:
VAR1->VAR10 = false;
VAR1->VAR11 = VAR12;
VAR1->VAR13 = VAR14;
break;
}

VAR15:

if (VAR1->VAR17 != VAR1->VAR10) {
if (VAR1->VAR10)
FUN4(VAR1);
VAR1->VAR17 = VAR1->VAR10;
}

FUN5(VAR1->VAR18, &VAR1->VAR19, VAR20 * 3);
}