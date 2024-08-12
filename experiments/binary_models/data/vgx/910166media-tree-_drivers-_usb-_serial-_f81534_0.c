static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
u8 VAR7 = 0;
int VAR8;
u32 VAR9;

if (FUN2(VAR2) == VAR10)
FUN3(VAR4, 0, VAR11 | VAR12);
else if (VAR6 && (VAR6->VAR13 & VAR14) == VAR10)
FUN3(VAR4, VAR11 | VAR12, 0);

if (FUN4(VAR2)) {
VAR7 |= VAR15;

if (!FUN5(VAR2))
VAR7 |= VAR16;

if (FUN6(VAR2))
VAR7 |= VAR17;
}

if (FUN7(VAR2))
VAR7 |= VAR18;

switch (FUN8(VAR2)) {
case VAR19:
VAR7 |= VAR20;
break;
case VAR21:
VAR7 |= VAR22;
break;
case VAR23:
VAR7 |= VAR24;
break;
default:
case VAR25:
VAR7 |= VAR26;
break;
}

VAR9 = FUN9(VAR2);
if (!VAR9)
return;

if (VAR9 > VAR27) {
if (VAR6)
VAR9 = FUN10(VAR6);
else
VAR9 = VAR28;

FUN11(VAR2, VAR9, VAR9);
}

FUN12(&VAR4->VAR29, "", VAR30, VAR9);

VAR8 = FUN13(VAR4, VAR9, VAR7);
if (VAR8 < 0) {
FUN14(&VAR4->VAR29, "",
VAR30, VAR8);
}
}