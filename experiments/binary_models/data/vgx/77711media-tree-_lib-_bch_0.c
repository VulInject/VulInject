static int FUN1(struct VAR1 *VAR2,
const unsigned int *VAR3)
{
const unsigned int VAR4 = FUN2(VAR2);
const unsigned int VAR5 = FUN3(VAR2);
unsigned int VAR6, VAR7, VAR8, VAR9, VAR10 = 1, VAR11 = VAR3[0];
struct VAR12 *VAR13 = VAR2->VAR13;
struct VAR12 *VAR14 = VAR2->VAR15[0];
struct VAR12 *VAR16 = VAR2->VAR15[1];
int VAR17, VAR18 = -1;

memset(VAR14, 0, FUN4(2*VAR4));
memset(VAR13, 0, FUN4(2*VAR4));

VAR14->VAR19 = 0;
VAR14->VAR20[0] = 1;
VAR13->VAR19 = 0;
VAR13->VAR20[0] = 1;


for (VAR6 = 0; (VAR6 < VAR4) && (VAR13->VAR19 <= VAR4); VAR6++) {
if (VAR11) {
VAR17 = 2*VAR6-VAR18;
FUN5(VAR16, VAR13);

VAR8 = FUN6(VAR2, VAR11)+VAR5-FUN6(VAR2, VAR10);
for (VAR7 = 0; VAR7 <= VAR14->VAR19; VAR7++) {
if (VAR14->VAR20[VAR7]) {
VAR9 = FUN6(VAR2, VAR14->VAR20[VAR7]);
VAR13->VAR20[VAR7+VAR17] ^= FUN7(VAR2, VAR8+VAR9);
}
}

VAR8 = VAR14->VAR19+VAR17;
if (VAR8 > VAR13->VAR19) {
VAR13->VAR19 = VAR8;
FUN5(VAR14, VAR16);
VAR10 = VAR11;
VAR18 = 2*VAR6;
}
}

if (VAR6 < VAR4-1) {
VAR11 = VAR3[2*VAR6+2];
for (VAR7 = 1; VAR7 <= VAR13->VAR19; VAR7++)
VAR11 ^= FUN8(VAR2, VAR13->VAR20[VAR7], VAR3[2*VAR6+2-VAR7]);
}
}
FUN9("", FUN10(VAR13));
return (VAR13->VAR19 > VAR4) ? -1 : (int)VAR13->VAR19;
}