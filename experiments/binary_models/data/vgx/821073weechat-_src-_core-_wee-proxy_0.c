FUN1 (struct VAR1 *VAR2, const char *VAR3)
{
int VAR4;
char *VAR5;

if (!VAR3 || !VAR3[0])
return;

VAR4 = strlen (VAR3) + 64;
VAR5 = malloc (VAR4);
if (VAR5)
{
snprintf (VAR5, VAR4, "", VAR3);
FUN2 (VAR2->VAR6[VAR7], VAR5);
snprintf (VAR5, VAR4, "", VAR3);
FUN2 (VAR2->VAR6[VAR8], VAR5);
snprintf (VAR5, VAR4, "", VAR3);
FUN2 (VAR2->VAR6[VAR9], VAR5);
snprintf (VAR5, VAR4, "", VAR3);
FUN2 (VAR2->VAR6[VAR10], VAR5);
snprintf (VAR5, VAR4, "", VAR3);
FUN2 (VAR2->VAR6[VAR11], VAR5);
snprintf (VAR5, VAR4, "", VAR3);
FUN2 (VAR2->VAR6[VAR12], VAR5);

if (VAR2->VAR3)
free (VAR2->VAR3);
VAR2->VAR3 = strdup (VAR3);

free (VAR5);
}
}