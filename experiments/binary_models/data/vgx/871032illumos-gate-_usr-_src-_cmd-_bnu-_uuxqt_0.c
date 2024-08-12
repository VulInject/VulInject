void
FUN1()
{
VAR1 *VAR2;
char	VAR3[VAR4], VAR5[VAR6], VAR7[VAR6];
char	VAR8[VAR9];

if ((VAR2 = fopen(VAR10, "")) == NULL) {
FUN2(4, "", VAR10);
return;
}


while (fgets(VAR3, VAR4, VAR2) != NULL) {
if (VAR3[0] != VAR11)
continue;
if (sscanf(&VAR3[1], "", VAR5, VAR7) < 2)
continue;
(void) snprintf(VAR8, sizeof (VAR8), "", VAR12, VAR7);
(void) unlink(VAR8);
}
fclose(VAR2);
}