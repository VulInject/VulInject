static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, int VAR5)
{
unsigned long VAR6 = FUN2(VAR4->VAR7);
unsigned long VAR8 = VAR9;
unsigned long VAR10 = (VAR8 + VAR4->VAR11) & ~3UL;
unsigned int VAR12;
int VAR13;
int VAR14;


if (FUN3(VAR4->VAR15 & VAR16))
VAR14 = 0;
else if (FUN3(FUN4(VAR2) && FUN5(VAR4)))
return 0;
else if (FUN6(VAR4->VAR17 == VAR18)) {
if (!((1 << VAR4->VAR19) &
((1 << VAR20) |
(1 << VAR21) |
(1 << VAR22) |
(1 << VAR23) |
(1 << VAR24))))
return 0;
VAR14 = VAR4->VAR19 != VAR4->VAR25;
if (VAR14 && VAR4->VAR19 != VAR20)
goto VAR26;
} else if (FUN3(VAR4->VAR17 == VAR27)) {
if (!((1 << VAR4->VAR19) &
((1 << VAR28) |
(1 << VAR29) |
(1 << VAR30) |
(1 << VAR31) |
(1 << VAR32))))
return 0;
VAR14 = VAR4->VAR19 != VAR4->VAR25;
if (VAR14 && VAR4->VAR19 != VAR28)
goto VAR26;
} else {

VAR14 = 0;
}

VAR12 = FUN7(VAR2);
if (VAR12 > 0) {
long VAR33 = VAR10 - VAR6;
long VAR34 = FUN8(VAR4->VAR11 >> 1, 10UL * VAR35);


if (FUN9(VAR33) < FUN10(long, VAR12, VAR34)) {
int VAR36 = VAR6 & 3;

if (VAR36 >= FUN11(VAR2))
return 0;
if (FUN12(VAR8, VAR6 - VAR4->VAR11 +
(VAR12 >> 3)))
return 0;
VAR10 |= VAR36 + 1;
}
}
VAR13 = FUN13(VAR2);
if (VAR13 > 0) {
if (!(VAR4->VAR15 & VAR16) &&
VAR5 % VAR13 != FUN14(VAR2))
return 0;
} else if (!VAR12 &&
VAR5 != FUN14(VAR2))
return 0;

VAR26:
VAR4->VAR25 = VAR4->VAR19;
VAR10 = FUN15(&VAR4->VAR7, VAR6, VAR10);
return VAR10 == VAR6 || VAR14;
}