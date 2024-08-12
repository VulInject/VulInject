VAR1
FUN1(const char *VAR2, VAR3 *VAR4)
{
int VAR5;
VAR6 *VAR7;

for (VAR5 = 0; VAR5 < VAR8; VAR5++) {
VAR7 = &VAR9[VAR5];
if (FUN2(VAR2, VAR7->VAR10,
strlen(VAR7->VAR10)) == 0) {
*VAR4 = VAR7->VAR11;
return (VAR12);
}
}

return (VAR13);
}