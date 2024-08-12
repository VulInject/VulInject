static void FUN1(struct VAR1 *VAR2, u32 VAR3, bool VAR4)
{
u32 VAR5;

FUN2(VAR2->VAR6, "", VAR3);

VAR5 = FUN3(VAR2, VAR7);

if (VAR3 == VAR8) {
VAR5 |= VAR9;
FUN4(VAR2, VAR5, VAR7);
} else {
VAR5 &= ~VAR9;
FUN4(VAR2, VAR5, VAR7);

VAR5 = FUN3(VAR2, VAR10);
VAR5 &= ~VAR11;

switch (VAR3) {
case VAR12:
case VAR13:
case VAR14:
VAR5 |= VAR15;
break;
case VAR16:
case VAR17:
case VAR18:
case VAR19:
VAR5 |= VAR20;
break;
case VAR21:
case VAR22:
case VAR23:
VAR5 |= VAR24;
break;
case VAR25:
case VAR26:
case VAR27:
case VAR28:
VAR5 |= VAR29;
break;
}

FUN4(VAR2, VAR5, VAR10);
}

VAR5 = FUN3(VAR2, VAR30);
VAR5 &= ~VAR31;

if (VAR4)
VAR5 |= VAR32;
else
VAR5 |= VAR33;

FUN4(VAR2, VAR5, VAR30);

FUN5(VAR2, VAR3);
}