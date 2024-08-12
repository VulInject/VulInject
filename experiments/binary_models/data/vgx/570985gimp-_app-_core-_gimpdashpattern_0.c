FUN1 (VAR1 *VAR2)
{
if (VAR2 == NULL || FUN2 (VAR2) == 0)
{
return NULL;
}
else
{
VAR3 *VAR4;
gint    VAR5;
gint    VAR6;

VAR5 = FUN2 (VAR2);

VAR4 = FUN3 (VAR7, VAR7, sizeof (VAR8), VAR5);

for (VAR6 = 0; VAR6 < VAR5; VAR6++)
{
VAR9 *VAR10 = FUN4 (VAR2, VAR6);
gdouble VAR11;

FUN5 (FUN6 (VAR10), NULL);

VAR11 = FUN7 (VAR10);

FUN8 (VAR4, VAR11);
}

return VAR4;
}
}