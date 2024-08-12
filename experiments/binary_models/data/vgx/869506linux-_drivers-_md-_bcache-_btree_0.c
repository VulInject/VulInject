static unsigned long FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2, struct VAR5, VAR2);
struct VAR7 *VAR8, *VAR9;
unsigned long VAR10, VAR11 = VAR4->VAR12;
unsigned long VAR13 = 0;
unsigned int VAR14;

if (VAR6->VAR15)
return VAR16;

if (VAR6->VAR17)
return VAR16;


if (VAR4->VAR18 & VAR19)
FUN3(&VAR6->VAR20);
else if (!FUN4(&VAR6->VAR20))
return -1;


VAR11 /= VAR6->VAR21;
if (VAR11 == 0)
VAR11 = 1;
VAR11 = FUN5(unsigned long, VAR11, FUN6(VAR6));

VAR10 = 0;
VAR14 = VAR6->VAR14;
FUN7(VAR8, VAR9, &VAR6->VAR22, VAR23) {
if (VAR11 <= 0)
goto VAR24;

if (!FUN8(VAR8, 0, false)) {
FUN9(VAR8);
FUN10(true, VAR8);
VAR13++;
}
VAR11--;
VAR10++;
}

FUN7(VAR8, VAR9, &VAR6->VAR25, VAR23) {
if (VAR11 <= 0 || VAR10 >= VAR14)
goto VAR24;

if (!FUN8(VAR8, 0, false)) {
FUN11(VAR8);
FUN9(VAR8);
FUN10(true, VAR8);
VAR13++;
}

VAR11--;
VAR10++;
}
VAR24:
FUN12(&VAR6->VAR20);
return VAR13 * VAR6->VAR21;
}