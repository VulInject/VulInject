int
FUN1(void *VAR1, VAR2 *VAR3, void *VAR4, size_t VAR5,
char *VAR6, size_t VAR7, int VAR8)
{
size_t VAR9;
int VAR10 = 0;

VAR9 = strlen(VAR6) + 1;
if (VAR1 && *VAR3 < VAR9) {
if (VAR8 == 0 || *VAR3 == 0)
return (VAR11);
}
if (VAR4 && VAR5 >= VAR7)
return (VAR12);
if (VAR1) {
if (VAR8 && *VAR3 < VAR9) {
VAR9 = *VAR3;
VAR10 = FUN2(VAR6, VAR1, VAR9 - 1);
if (VAR10 == 0)
VAR10 = FUN2("", (char *)VAR1 + VAR9 - 1, 1);
} else {
VAR10 = FUN2(VAR6, VAR1, VAR9);
}
}
*VAR3 = VAR9;
if (VAR10 == 0 && VAR4) {
VAR10 = FUN3(VAR4, VAR6, VAR5);
VAR6[VAR5] = 0;
}
return (VAR10);
}