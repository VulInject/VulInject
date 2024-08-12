void
FUN1(VAR1 *VAR2, size_t VAR3,
const char ***VAR4, VAR5 **VAR6)
{
size_t VAR7;
const char **VAR8 = FUN2(const char *, VAR3);
VAR5 *VAR9 = FUN2(VAR5, VAR3);

for (VAR7 = 0; VAR7 < VAR3; VAR7++) {
VAR8[VAR7] = VAR2[VAR7].VAR10;
VAR9[VAR7] = VAR2[VAR7].VAR11;
}

*VAR4 = VAR8;
*VAR6 = VAR9;
}