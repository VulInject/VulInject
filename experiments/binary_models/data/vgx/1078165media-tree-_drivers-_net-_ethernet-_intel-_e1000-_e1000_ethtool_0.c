static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = &VAR6->VAR8;

VAR4->VAR9 = VAR10 | VAR11 | VAR12 | VAR13;
VAR4->VAR14 = 0;


if (FUN3(VAR6, VAR4) ||
!FUN4(&VAR6->VAR15->VAR16))
return;


switch (VAR8->VAR17) {
case VAR18:

VAR4->VAR9 &= ~VAR10;

if (VAR6->VAR4 & VAR19)
FUN5(VAR20, ""
"");
break;
default:
break;
}

if (VAR6->VAR4 & VAR19)
VAR4->VAR14 |= VAR10;
if (VAR6->VAR4 & VAR21)
VAR4->VAR14 |= VAR11;
if (VAR6->VAR4 & VAR22)
VAR4->VAR14 |= VAR12;
if (VAR6->VAR4 & VAR23)
VAR4->VAR14 |= VAR13;
}