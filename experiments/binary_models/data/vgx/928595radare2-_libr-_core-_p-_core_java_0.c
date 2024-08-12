static int FUN1(VAR1 *VAR2, const char *VAR3) {
ut32 VAR4 = 0;
const char **VAR5 = (const char **)malloc (sizeof (char *) * VAR6 * 4);
VAR5[0] = "";
VAR5[1] = "";
VAR5[2] = VAR7.VAR8;
for (VAR4 = 0; VAR9[VAR4].VAR10; VAR4++) {
VAR11 *VAR12 = &VAR9[VAR4];
VAR5[3 + (VAR4 * 3) + 0] = VAR12->VAR10;
VAR5[3 + (VAR4 * 3) + 1] = VAR12->VAR13;
VAR5[3 + (VAR4 * 3) + 2] = VAR12->VAR8;
}
VAR5[3 + (VAR4 * 3)] = NULL;
FUN2 (VAR2, VAR5);
free ((void *)VAR5);
return true;
}