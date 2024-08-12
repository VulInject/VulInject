static int
FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
int VAR6;

for (VAR6 = 0; VAR6 < VAR7; VAR6++) {
if (strcmp(VAR8[VAR6], VAR3) == 0) {
*VAR5 = VAR6;
return (0);
}
}

for (VAR6 = 0; VAR6 < VAR2->VAR9->VAR10; VAR6++) {
if (strcmp(VAR2->VAR9->VAR11[VAR6], VAR3) == 0) {
*VAR5 = VAR6 + VAR7;
return (0);
}
}

return (VAR12);
}