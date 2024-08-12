FUN1 (VAR1   *VAR2,
VAR3       *VAR4,
VAR5 **VAR6,
VAR7        *VAR8)
{
VAR9   *VAR10;
gboolean VAR11;

FUN2 ();
VAR10 = FUN3 (FUN4 (VAR2), VAR4);
VAR11 = FUN5 (FUN4 (VAR2), VAR4, VAR6, VAR8);
FUN6 ();

if (!VAR11) {
FUN7 (VAR10);
return NULL;
}

return VAR10;
}