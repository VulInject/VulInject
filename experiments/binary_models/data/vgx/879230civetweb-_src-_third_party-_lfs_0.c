static int FUN1(VAR1 * VAR2)
{
VAR3 *VAR4;
size_t VAR5;
char *VAR6;
const char *VAR7 = "";
const char *VAR8 = FUN2(VAR2, 1, &VAR5);
VAR4 = (VAR3 *) FUN3(VAR2, sizeof(VAR3));
VAR6 = (char *) malloc(VAR5 + strlen(VAR7) + 1);
if (!VAR6) {
FUN4(VAR2);
FUN5(VAR2, strerror(VAR9));
return 2;
}
strcpy(VAR6, VAR8);
strcat(VAR6, VAR7);
if (FUN6("", VAR6) == -1) {
free(VAR6);
FUN4(VAR2);
FUN5(VAR2, strerror(VAR9));
return 2;
}
VAR4->VAR6 = VAR6;
FUN7(VAR2, VAR10);
FUN8(VAR2, -2);
return 1;
}