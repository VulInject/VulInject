static void FUN1(VAR1 *VAR2, VAR3 *VAR4,
enum Rate VAR5, int VAR6, int VAR7)
{
int VAR8, VAR9, VAR10;

memset(VAR2, 0, VAR11 * sizeof(*VAR2));

if (VAR5 == VAR12) {
if (VAR4->VAR13 >= VAR14[VAR7])
return;


VAR10 = VAR15 - VAR16[VAR7];
VAR8 = VAR4->VAR13;
for (VAR9 = 0; VAR9 < VAR11 / VAR17; VAR9++) {
VAR8 -= VAR18[VAR10][VAR9];
if (VAR8 >= 0)
continue;
VAR8 += VAR18[VAR10++][VAR9];
if (VAR4->VAR19 & (1 << (VAR15 - VAR10))) {
VAR2[VAR4->VAR20 + VAR17 * VAR9] =
-VAR21[VAR4->VAR22];
} else {
VAR2[VAR4->VAR20 + VAR17 * VAR9] =
VAR21[VAR4->VAR22];
}
if (VAR10 == VAR15)
break;
}
if (VAR4->VAR23 == 1)
FUN2(VAR2, VAR6);
} else { 
int VAR24  = VAR21[VAR4->VAR22];
int VAR25 = VAR4->VAR20;
int VAR26  = VAR4->VAR19;
int VAR27   = VAR4->VAR13;
int VAR28, VAR29, VAR30;

for (VAR9 = 0; VAR9 < 8; VAR9 += 2) {
VAR28         = ((VAR27 & 7) << 3) + VAR25 + VAR9;
VAR2[VAR28] = (VAR26 & 1) ? VAR24 : -VAR24;
VAR27  >>= 3;
VAR26 >>= 1;
}


VAR30  = VAR31[VAR4->VAR32 << 1] + VAR6 +
VAR4->VAR33 - 1;
VAR29 = VAR31[(VAR4->VAR32 << 1) + 1];

if (VAR30 < VAR11 - 2) {
for (VAR9 = VAR30; VAR9 < VAR11; VAR9++)
VAR2[VAR9] += VAR29 * VAR2[VAR9 - VAR30] >> 15;
}
}
}