static unsigned long FUN1(struct VAR1 *VAR2,
unsigned long VAR3, unsigned long VAR4,
unsigned long VAR5, unsigned long VAR6,
bool *VAR7, struct VAR8 *VAR9,
struct VAR10 *VAR11)
{
struct VAR12 *VAR13 = VAR2->VAR14;
struct VAR1 *VAR15;
unsigned long VAR16 = VAR2->VAR16;
unsigned long VAR17;
unsigned long VAR18;
unsigned long VAR19 = 0;
unsigned long VAR20;
int VAR21 = 0;
int VAR22;
bool VAR23;


if (VAR13->VAR24 >= VAR25 - 3)
return -VAR26;


VAR22 = FUN2(VAR2, VAR3, VAR3 + VAR4,
VAR27, &VAR16);
if (VAR22)
return VAR22;

VAR17 = VAR2->VAR28 + ((VAR3 - VAR2->VAR29) >> VAR30);
VAR15 = FUN3(&VAR2, VAR6, VAR5, VAR17,
&VAR23);
if (!VAR15)
return -VAR26;

VAR18 = FUN4(VAR2, VAR3, VAR15, VAR6, VAR4,
VAR23);
if (VAR18 < VAR4) {
VAR22 = -VAR26;
} else if (VAR2->VAR31 && VAR2->VAR31->VAR32) {
VAR22 = VAR2->VAR31->FUN5(VAR15);
}

if (FUN6(VAR22)) {

FUN4(VAR15, VAR6, VAR2, VAR3, VAR18,
true);
VAR2 = VAR15;
VAR4 = VAR5;
VAR3 = VAR6;
VAR6 = VAR22;
} else {
FUN7(VAR15, VAR9);
FUN8(VAR13, VAR3, VAR3 + VAR4,
VAR6, VAR6 + VAR5);
}


if (VAR16 & VAR33) {
VAR2->VAR16 &= ~VAR33;
VAR19 = VAR2->VAR34 - VAR2->VAR29 - VAR4;
if (VAR3 > VAR2->VAR29 &&
VAR3 + VAR4 < VAR2->VAR34)
VAR21 = 1;
}


VAR20 = VAR13->VAR20;
FUN9(VAR13, VAR2->VAR16, VAR5 >> VAR30);


if (FUN6(VAR2->VAR16 & VAR35))
FUN10(VAR2);

if (FUN11(VAR13, VAR3, VAR4, VAR11) < 0) {

FUN12(VAR19 >> VAR30);
VAR19 = 0;
}
VAR13->VAR20 = VAR20;


if (VAR19) {
VAR2->VAR16 |= VAR33;
if (VAR21)
VAR2->VAR36->VAR16 |= VAR33;
}

if (VAR16 & VAR37) {
VAR13->VAR38 += VAR5 >> VAR30;
*VAR7 = true;
}

return VAR6;
}