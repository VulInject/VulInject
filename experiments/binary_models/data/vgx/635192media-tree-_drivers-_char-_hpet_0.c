static int
FUN1(struct VAR1 *VAR2, unsigned int VAR3, unsigned long VAR4,
struct VAR5 *VAR6)
{
struct hpet_timer VAR7 *VAR8;
struct hpet VAR7 *VAR9;
struct VAR10 *VAR11;
int VAR12;
unsigned long VAR13;

switch (VAR3) {
case VAR14:
case VAR15:
case VAR16:
case VAR17:
case VAR18:
VAR8 = VAR2->VAR19;
VAR9 = VAR2->VAR20;
VAR11 = VAR2->VAR21;
break;
case VAR22:
return FUN2(VAR2);
default:
return -VAR23;
}

VAR12 = 0;

switch (VAR3) {
case VAR14:
if ((VAR2->VAR24 & VAR25) == 0)
break;
VAR13 = FUN3(&VAR8->VAR26);
VAR13 &= ~VAR27;
FUN4(VAR13, &VAR8->VAR26);
if (VAR2->VAR28) {
FUN5(VAR2->VAR28, VAR2);
VAR2->VAR28 = 0;
}
VAR2->VAR24 ^= VAR25;
break;
case VAR15:
{
memset(VAR6, 0, sizeof(*VAR6));
if (VAR2->VAR29)
VAR6->VAR30 =
FUN6(VAR11, VAR2->VAR29);
VAR6->VAR31 =
FUN3(&VAR8->VAR26) & VAR32;
VAR6->VAR33 = VAR11->VAR34;
VAR6->VAR35 = VAR2 - VAR11->VAR36;
break;
}
case VAR16:
VAR13 = FUN3(&VAR8->VAR26);
if ((VAR13 & VAR32) == 0) {
VAR12 = -VAR37;
break;
}
VAR2->VAR24 |= VAR38;
break;
case VAR17:
VAR13 = FUN3(&VAR8->VAR26);
if ((VAR13 & VAR32) == 0) {
VAR12 = -VAR37;
break;
}
if (VAR2->VAR24 & VAR38 &&
FUN3(&VAR8->VAR26) & VAR39) {
VAR13 = FUN3(&VAR8->VAR26);
VAR13 ^= VAR39;
FUN4(VAR13, &VAR8->VAR26);
}
VAR2->VAR24 &= ~VAR38;
break;
case VAR18:
if ((VAR4 > VAR40) &&
!FUN7(VAR41)) {
VAR12 = -VAR42;
break;
}

if (!VAR4) {
VAR12 = -VAR23;
break;
}

VAR2->VAR29 = FUN6(VAR11, VAR4);
}

return VAR12;
}