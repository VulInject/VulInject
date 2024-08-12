int
FUN1(const char *VAR1, const char *VAR2, char *VAR3,
size_t VAR4)
{
char VAR5[VAR6];

FUN2(("",
FUN3(VAR1), FUN3(VAR2)));

if (VAR1 == NULL || VAR2 == NULL || VAR3 == NULL || VAR4 == 0)
return (-1);

if (strcmp(VAR1, "") == 0)
VAR1 = "";

if (FUN4((char *)VAR1, (char *)VAR2, VAR5,
VAR6) != 0)
return (-1);

if (FUN5(VAR5) == VAR7) {
char *VAR8, *VAR9;
char VAR10[VAR11];


if ((VAR9 = strrchr(VAR5, '')) != NULL) {
*VAR9 = '';
VAR9++;
(void) FUN6(VAR10, VAR9, VAR11);
}
if ((VAR8 = FUN7(VAR5)) != NULL) {
if (VAR9)
(void) snprintf(VAR5, VAR6,
"", VAR8, VAR10);
else
(void) FUN6(VAR5, VAR8,
VAR6);
free(VAR8);
FUN2(("",
VAR5));

} else if (VAR9)
*(VAR9 - 1) = '';
}

return (FUN8(VAR5, VAR3, VAR4));
}