static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
const int VAR6 = VAR2->VAR6;
const int VAR7 = VAR2->VAR7;

if (VAR3 == 0) {
if (VAR4) {
for (int VAR8 = 0; VAR8 < VAR5; VAR8++) {
VAR2->VAR9[0][VAR8] = VAR2->VAR9[0][VAR6 + VAR8] >> VAR7;
VAR2->VAR9[1][VAR8] = VAR2->VAR10[1][VAR8] >> VAR7;
}
} else {
for (int VAR8 = 0; VAR8 < VAR5; VAR8++) {
VAR2->VAR9[0][VAR8] = VAR2->VAR9[0][VAR6 + VAR8] >> VAR7;
VAR2->VAR9[1][VAR8] = VAR2->VAR10[0][VAR8] >> VAR7;
}
}
} else {
if (VAR4) {
for (int VAR8 = 0; VAR8 < VAR6; VAR8++)
VAR2->VAR9[1][VAR8 + VAR5] += VAR2->VAR9[0][VAR8 + VAR5];
}
for (int VAR8 = 0; VAR8 < VAR5; VAR8++) {
VAR2->VAR10[0][VAR8] = VAR2->VAR9[1][VAR6 + VAR8];
VAR2->VAR10[1][VAR8] = VAR2->VAR10[0][VAR8] - VAR2->VAR9[0][VAR6 + VAR8];
}
}
}