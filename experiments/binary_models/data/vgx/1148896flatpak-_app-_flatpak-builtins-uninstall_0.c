FUN1 (gboolean    VAR1,
const char *VAR2,
VAR3    **VAR4)
{
g_autofree char *VAR5 = FUN2 (FUN3 (), "", "", VAR2, NULL);
FUN4(VAR6) VAR7 = FUN5 (VAR5);

if (!VAR1 &&
!FUN6 (VAR8, FUN7(""), VAR2))
return VAR9;

if (FUN8 (VAR7, NULL))
{
if (!FUN9 (VAR7, NULL, VAR4))
return VAR8;
}

if (!FUN10 (VAR2, VAR4))
return VAR8;

return VAR9;
}