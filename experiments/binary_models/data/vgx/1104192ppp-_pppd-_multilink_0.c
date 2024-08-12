static void FUN1(void)
{
TDB_DATA VAR1, VAR2;
char VAR3[32];
char *VAR4, *VAR5;
int VAR6;

VAR1.VAR7 = VAR8;
VAR1.VAR9 = strlen(VAR8);
FUN2(VAR3, sizeof(VAR3), "", VAR10);

VAR2 = FUN3(VAR11, VAR1);
if (VAR2.VAR7 == NULL || VAR2.VAR9 <= 0) {
if (VAR2.VAR7 != NULL)
free(VAR2.VAR7);
return;
}
VAR2.VAR7[VAR2.VAR9-1] = 0;
VAR4 = strstr(VAR2.VAR7, VAR3);
if (VAR4 != NULL) {
VAR5 = VAR4 + strlen(VAR3);
VAR6 = strlen(VAR5) + 1;
memmove(VAR4, VAR5, VAR6);
VAR2.VAR9 = VAR4 - VAR2.VAR7 + VAR6;
if (FUN4(VAR11, VAR1, VAR2, VAR12))
FUN5("");
}
free(VAR2.VAR7);
}