static void FUN1(VAR1* VAR2, const VAR1* VAR3, const VAR1* VAR4,
int VAR5)
{
int VAR6, VAR7;

for (VAR7 = VAR5 - 1; VAR7 >= 0; VAR7--) {
int VAR8 = 0x800;
for (VAR6 = 0; VAR6 < 10; VAR6++)
VAR8 += VAR3[VAR6] * VAR4[VAR7 - VAR6 - 1];

VAR2[VAR7] = VAR4[VAR7] + (VAR8 >> 12);
}
}