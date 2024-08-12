static void FUN1(VAR1 *VAR2, VAR1 *VAR3, const VAR1 *VAR4,
const VAR1 *VAR5, int VAR6, VAR7 *VAR8)
{
int VAR9;
for (VAR9 = 0; VAR9 < VAR6; VAR9++) {
VAR3[VAR9] = VAR4[4 * VAR9 + 1];
VAR2[VAR9] = VAR4[4 * VAR9 + 3];
}
assert(VAR4 == VAR5);
}