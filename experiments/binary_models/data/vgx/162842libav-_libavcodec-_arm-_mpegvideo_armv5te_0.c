static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
int VAR6, VAR7;
for (VAR6 = 0; VAR6 < VAR5; VAR6++) {
VAR7 = VAR2[VAR6];
if (VAR7) {
if (VAR7 < 0) {
VAR7 = VAR7 * VAR3 - VAR4;
} else {
VAR7 = VAR7 * VAR3 + VAR4;
}
VAR2[VAR6] = VAR7;
}
}
}