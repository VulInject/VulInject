VAR1 FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR3);
struct VAR6 *VAR7 = FUN3(VAR3);

int VAR8 = VAR5->VAR9.VAR10;
int VAR11 = FUN4(VAR3);
int VAR12 = FUN5(VAR3);
int VAR13, VAR14;

if (FUN6(VAR3))
FUN7(VAR3, &VAR11, &VAR12);

VAR13 = FUN8(int, VAR7->VAR15, VAR12);

if (FUN9(VAR8 > VAR13)) {
VAR8 = VAR13;
if (VAR8 <= 0)
return 0;
}
if (VAR11 < (VAR13 >> 1)) {
VAR5->VAR9.VAR16 = 0;

if (FUN10(VAR3))
FUN11(VAR3);


VAR11 = FUN12(VAR11, 1 << VAR7->VAR17.VAR18);


if (VAR11 < (VAR12 >> 4) || VAR11 < VAR8)
return 0;
}

if (VAR11 > VAR7->VAR19)
VAR11 = VAR7->VAR19;


if (VAR7->VAR17.VAR18) {
VAR14 = VAR11;


VAR14 = FUN13(VAR14, (1 << VAR7->VAR17.VAR18));
} else {
VAR14 = VAR7->VAR20;

if (VAR14 <= VAR11 - VAR8 || VAR14 > VAR11)
VAR14 = FUN14(VAR11, VAR8);
else if (VAR8 == VAR13 &&
VAR11 > VAR14 + (VAR13 >> 1))
VAR14 = VAR11;
}

return VAR14;
}