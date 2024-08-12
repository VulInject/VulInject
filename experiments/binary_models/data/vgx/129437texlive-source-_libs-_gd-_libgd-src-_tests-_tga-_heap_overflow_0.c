static VAR1 FUN1(char **VAR2, char *VAR3)
{
char *VAR4;
VAR5 *VAR6;
size_t VAR7, VAR8;

VAR4 = FUN2("", VAR3);
VAR6 = fopen(VAR4, "");
FUN3(VAR6 != NULL);

FUN4(VAR6, 0, VAR9);
VAR7 = FUN5(VAR6);
FUN4(VAR6, 0, VAR10);

*VAR2 = malloc(VAR7);
FUN3(*VAR2 != NULL);
VAR8 = fread(*VAR2, sizeof(**VAR2), VAR7, VAR6);
FUN3(VAR8 == VAR7);

fclose(VAR6);
free(VAR4);

return VAR8;
}