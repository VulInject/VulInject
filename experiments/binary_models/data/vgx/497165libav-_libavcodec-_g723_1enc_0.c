static void FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR1 *VAR4)
{
int VAR5[VAR6 + 2]; 






int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
int VAR13, VAR14;
int64_t VAR15;


for (VAR13 = 0; VAR13 < VAR6; VAR13++)
VAR4[VAR13] = (VAR2[VAR13] * VAR16[VAR13] + (1 << 14)) >> 15;


VAR5[0] = VAR5[1] = 1 << 25;


for (VAR13 = 0; VAR13 < VAR6 / 2; VAR13++) {

VAR5[2 * VAR13 + 2] = -VAR5[2 * VAR13] - ((VAR4[VAR13] + VAR4[VAR6 - 1 - VAR13]) << 12);

VAR5[2 * VAR13 + 3] = VAR5[2 * VAR13 + 1] - ((VAR4[VAR13] - VAR4[VAR6 - 1 - VAR13]) << 12);
}


VAR5[VAR6]     >>= 1;
VAR5[VAR6 + 1] >>= 1;


VAR7 = FUN2(VAR5[0]);
for (VAR13 = 1; VAR13 < VAR6 + 2; VAR13++)
VAR7 = FUN3(VAR7, FUN2(VAR5[VAR13]));

VAR8 = FUN4(VAR7, 31);

for (VAR13 = 0; VAR13 < VAR6 + 2; VAR13++)
VAR5[VAR13] = FUN5((VAR17) (VAR5[VAR13] << VAR8) + (1 << 15)) >> 16;


VAR12    = 0;
VAR15 = 0;
for (VAR13 = 0; VAR13 <= VAR6 / 2; VAR13++)
VAR15 += VAR5[2 * VAR13] * VAR18[0];
VAR10 = FUN5(VAR15 << 1);
VAR11    = 0;
for (VAR13 = 1; VAR13 < VAR19 / 2; VAR13++) {

VAR15 = 0;
for (VAR14 = 0; VAR14 <= VAR6 / 2; VAR14++)
VAR15 += VAR5[VAR6 - 2 * VAR14 + VAR12] * VAR18[VAR13 * VAR14 % VAR19];
VAR9 = FUN5(VAR15 << 1);


if ((VAR9 ^ VAR10) < 0) {
int VAR20  = FUN2(VAR9);
int VAR21 = FUN2(VAR10);
int VAR22      = VAR20 + VAR21;

VAR8        = FUN4(VAR22, 31);
VAR22        <<= VAR8;
VAR21     = VAR21 << VAR8 >> 8;
VAR4[VAR11++] = ((VAR13 - 1) << 7) + (VAR21 >> 1) / (VAR22 >> 16);

if (VAR11 == VAR6)
break;


VAR12 ^= 1;


VAR15 = 0;
for (VAR14 = 0; VAR14 <= VAR6 / 2; VAR14++)
VAR15 += VAR5[VAR6 - 2 * VAR14 + VAR12] *
VAR18[VAR13 * VAR14 % VAR19];
VAR9 = FUN5(VAR15 << 1);
}
VAR10 = VAR9;
}

if (VAR11 != VAR6)
memcpy(VAR4, VAR3, VAR6 * sizeof(VAR1));
}