static void
FUN1(struct VAR1 *VAR2, u16 VAR3)
{
u8 VAR4 = FUN2(VAR5, VAR3);

VAR2->VAR4 = 0;
VAR2->VAR6 = 0;
VAR2->VAR7 = 1;

switch (FUN2(VAR8, VAR3)) {
case VAR9:
VAR2->VAR4 = VAR4 + 4;
return;
case VAR10:
if (VAR4 >= 8)
VAR4 -= 8;

VAR2->VAR4 = VAR4;
return;
case VAR11:
VAR2->VAR6 |= VAR12;

case VAR13:
VAR2->VAR6 |= VAR14;
VAR2->VAR4 = VAR4;
break;
default:
FUN3(1);
return;
}

if (FUN2(VAR15, VAR3) == VAR16)
VAR2->VAR6 |= VAR17;

if (VAR3 & VAR18)
VAR2->VAR6 |= VAR19;
}