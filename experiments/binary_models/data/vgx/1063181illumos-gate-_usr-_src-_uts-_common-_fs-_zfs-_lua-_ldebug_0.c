static const char *FUN1 (VAR1 *VAR2, const VAR3 *VAR4,
const char **VAR5) {
VAR6 *VAR7 = FUN2(VAR2);
int VAR8;
for (VAR8 = 0; VAR8 < VAR7->VAR9; VAR8++) {
if (VAR7->VAR10[VAR8]->VAR11 == VAR4) {
*VAR5 = FUN3(VAR7->VAR12, VAR8);
return "";
}
}
return NULL;
}