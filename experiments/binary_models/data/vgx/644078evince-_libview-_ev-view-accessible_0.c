FUN1 (VAR1 *VAR2,
gint              VAR3,
VAR4      *VAR5)
{
VAR6 *VAR7;
GdkRectangle VAR8;
GtkAllocation VAR9;
gint VAR10, VAR11;
gboolean VAR12;

VAR7 = FUN2 (FUN3 (FUN4 (VAR2)));
if (VAR3 < VAR7->VAR13 || VAR3 > VAR7->VAR14)
return VAR15;

FUN5 (FUN6 (VAR7), &VAR9);
VAR10 = FUN7 (VAR7->VAR16);
VAR11 = FUN7 (VAR7->VAR17);

FUN8 (VAR7, VAR3, VAR5, &VAR8);
VAR12 = VAR8.VAR10 + VAR8.VAR18 < VAR10 || VAR8.VAR10 > VAR10 + VAR9.VAR18 ||
VAR8.VAR11 + VAR8.VAR19 < VAR11 || VAR8.VAR11 > VAR11 + VAR9.VAR19;

return !VAR12;
}