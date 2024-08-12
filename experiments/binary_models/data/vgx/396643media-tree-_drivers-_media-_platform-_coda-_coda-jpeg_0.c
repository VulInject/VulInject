static void FUN1(void *VAR1,
const struct VAR2 *VAR3)
{
VAR4 *VAR5 = VAR1 + VAR3->VAR6;
const VAR4 *VAR7 = VAR3->VAR7;
int VAR8 = VAR3->VAR8 / 4;
int VAR9;

for (VAR9 = 0; VAR9 < VAR8; VAR9 += 2) {
VAR5[VAR9 + 1] = FUN2(VAR7[VAR9]);
VAR5[VAR9] = FUN2(VAR7[VAR9 + 1]);
}
}