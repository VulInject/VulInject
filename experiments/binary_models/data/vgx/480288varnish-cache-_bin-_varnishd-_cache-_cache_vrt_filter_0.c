static const struct VAR1 *
FUN1(int VAR2, const struct VAR3 *VAR4,
const struct VAR3 *VAR5, const char **VAR6)
{
const char *VAR7, *VAR8;
const struct VAR1 *VAR9;

FUN2(VAR4);
FUN2(VAR5);
FUN2(VAR6);

VAR7 = *VAR6;
FUN2(VAR7);

while (FUN3(*VAR7))
VAR7++;
if (*VAR7 == '') {
*VAR6 = NULL;
return (NULL);
}
for (VAR8 = VAR7; *VAR8 && !FUN3(*VAR8); VAR8++)
continue;
*VAR6 = VAR8;
FUN4(VAR9, VAR4, VAR10) {
if (VAR2 && VAR9->VAR11 == NULL)
continue;
else if (!VAR2 && VAR9->VAR12 == NULL)
continue;
if (VAR9->VAR13 == VAR8 - VAR7 && !memcmp(VAR7, VAR9->VAR14, VAR9->VAR13))
return (VAR9);
}
FUN4(VAR9, VAR5, VAR10) {
if (VAR2 && VAR9->VAR11 == NULL)
continue;
else if (!VAR2 && VAR9->VAR12 == NULL)
continue;
if (VAR9->VAR13 == VAR8 - VAR7 && !memcmp(VAR7, VAR9->VAR14, VAR9->VAR13))
return (VAR9);
}
*VAR6 = VAR7;
return (VAR15);
}