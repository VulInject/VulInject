static void FUN1(VAR1 *VAR2,
enum TwinVQFrameType VAR3, float *VAR4)
{
const VAR5   *VAR6 =  VAR2->VAR6;
const VAR7 *VAR8 = &VAR2->VAR8[VAR2->VAR9];
int VAR10, VAR11;
int VAR12   = VAR2->VAR13->VAR14.VAR15;
int VAR16        = VAR6->VAR17[VAR3].VAR16;
float VAR18     = VAR19     / ((1 << VAR20)     - 1);
float VAR21 = VAR22 / ((1 << VAR23) - 1);

if (VAR3 == VAR24) {
for (VAR10 = 0; VAR10 < VAR12; VAR10++)
VAR4[VAR10] = (1.0 / (1 << 13)) *
FUN2(VAR18 * 0.5 + VAR18 * VAR8->VAR25[VAR10],
VAR19, VAR26);
} else {
for (VAR10 = 0; VAR10 < VAR12; VAR10++) {
float VAR27 = (1.0 / (1 << 23)) *
FUN2(VAR18 * 0.5 + VAR18 * VAR8->VAR25[VAR10],
VAR19, VAR26);

for (VAR11 = 0; VAR11 < VAR16; VAR11++)
VAR4[VAR10 * VAR16 + VAR11] =
VAR27 * FUN2(VAR21 * 0.5 +
VAR21 * VAR8->VAR28[VAR10 * VAR16 + VAR11],
VAR22, VAR26);
}
}
}