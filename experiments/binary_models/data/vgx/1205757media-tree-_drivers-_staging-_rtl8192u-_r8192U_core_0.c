void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = (struct VAR3 *)FUN2(VAR2);
u32 VAR5;

FUN3(VAR2, VAR6, &VAR5);
VAR5 = VAR5 & ~VAR7;
VAR5 = VAR5 | VAR8;
VAR5 = VAR5 | VAR9;
VAR5 = VAR5 | VAR10;
VAR5 = VAR5 | VAR11;

if (VAR2->VAR12 & VAR13)
FUN4("");

if (VAR4->VAR14->VAR15 == VAR16 ||
VAR2->VAR12 & VAR13) {
VAR5 = VAR5 | VAR17;
} else {
VAR5 = VAR5 | VAR18;
VAR5 = VAR5 | VAR19;
}


if (VAR4->VAR14->VAR15 == VAR16) {
VAR5 = VAR5 | VAR20;
VAR5 = VAR5 | VAR21;
}

if (VAR4->VAR22 == 1 && VAR4->VAR14->VAR15 == VAR16)
VAR5 = VAR5 | VAR23;


VAR5 = VAR5 & ~VAR24;
VAR5 = VAR5 | (VAR25 << VAR26);
VAR5 = VAR5 & ~VAR27;
VAR5 = VAR5 | ((VAR28)7 << VAR29);

VAR5 = VAR5 | VAR30;

FUN5(VAR2, VAR6, VAR5);
}