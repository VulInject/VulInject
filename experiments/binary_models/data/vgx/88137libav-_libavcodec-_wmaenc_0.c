static void FUN1(VAR1 *VAR2, int VAR3, const int *VAR4)
{
int VAR5;
const VAR6 *VAR7;
float *VAR8, *VAR9;

VAR7   = VAR2->VAR10[VAR2->VAR11 - VAR2->VAR12];
VAR8     = VAR2->VAR13[VAR3];
VAR9 = VAR8 + VAR2->VAR14;
if (VAR2->VAR15 == 1) {
VAR5 = *VAR4++;
assert(VAR5 - 10 >= 0 && VAR5 - 10 < 32);
FUN2(&VAR2->VAR16, 5, VAR5 - 10);
VAR8 += *VAR7++;
} else
VAR5 = 36;
while (VAR8 < VAR9) {
int VAR17  = *VAR4++;
int VAR18 = VAR17 - VAR5 + 60;
assert(VAR18 >= 0 && VAR18 < 120);
FUN2(&VAR2->VAR16, VAR19[VAR18],
VAR20[VAR18]);

VAR8       += *VAR7++;
VAR5 = VAR17;
}
}