void FUN1(struct VAR1 *VAR2,
enum analog_power_block VAR3,
bool VAR4)
{
u32 VAR5;
u32 VAR6 = VAR7;
u32 VAR8;

if (VAR2->VAR9 && FUN2(VAR2->VAR9->VAR10))
VAR6 = VAR11;

switch (VAR3) {
case VAR12:
if (VAR2->VAR9 && FUN2(VAR2->VAR9->VAR10))
VAR8 = VAR13;
else
VAR8 = VAR14;

VAR5 = FUN3(VAR2->VAR15 + VAR6);
if (VAR4)
VAR5 |= VAR8;
else
VAR5 &= ~VAR8;
FUN4(VAR5, VAR2->VAR15 + VAR6);
break;
case VAR16:
VAR8 = VAR17;
VAR5 = FUN3(VAR2->VAR15 + VAR6);

if (VAR4)
VAR5 |= VAR8;
else
VAR5 &= ~VAR8;
FUN4(VAR5, VAR2->VAR15 + VAR6);
break;
case VAR18:
VAR8 = VAR19;
VAR5 = FUN3(VAR2->VAR15 + VAR6);

if (VAR4)
VAR5 |= VAR8;
else
VAR5 &= ~VAR8;
FUN4(VAR5, VAR2->VAR15 + VAR6);
break;
case VAR20:
VAR8 = VAR21;
VAR5 = FUN3(VAR2->VAR15 + VAR6);

if (VAR4)
VAR5 |= VAR8;
else
VAR5 &= ~VAR8;
FUN4(VAR5, VAR2->VAR15 + VAR6);
break;
case VAR22:
VAR8 = VAR23;
VAR5 = FUN3(VAR2->VAR15 + VAR6);

if (VAR4)
VAR5 |= VAR8;
else
VAR5 &= ~VAR8;
FUN4(VAR5, VAR2->VAR15 + VAR6);
break;
case VAR24:

if (VAR2->VAR9 && FUN2(VAR2->VAR9->VAR10))
VAR8 = VAR25;
else
VAR8 = VAR26;

VAR5 = FUN3(VAR2->VAR15 + VAR6);
if (VAR4)
VAR5 |= VAR8;
else
VAR5 &= ~VAR8;

FUN4(VAR5, VAR2->VAR15 + VAR6);
if (VAR2->VAR9 && FUN2(VAR2->VAR9->VAR10))
FUN5(10, 15);
break;
case VAR27:
if (VAR4) {
VAR5 = VAR28;
FUN4(VAR5, VAR2->VAR15 + VAR6);
} else {
VAR5 = VAR28;
FUN4(VAR5, VAR2->VAR15 + VAR6);
FUN5(10, 15);
VAR5 &= ~VAR25;
FUN4(VAR5, VAR2->VAR15 + VAR6);
FUN5(10, 15);

FUN4(0x00, VAR2->VAR15 + VAR6);
}
break;
default:
break;
}
}