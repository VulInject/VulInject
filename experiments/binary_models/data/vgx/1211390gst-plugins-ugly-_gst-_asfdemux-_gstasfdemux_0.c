FUN1 (VAR1 * VAR2, VAR3 * VAR4,
VAR5 * VAR6)
{
VAR7 *VAR8;
gboolean VAR9;
guint32 VAR10;

VAR8 = FUN2 (VAR4);

switch (FUN3 (VAR6)) {
case VAR11:
FUN4 (VAR2, "");
VAR10 = FUN5 (VAR6);
if (VAR8->VAR12 == VAR10) {
FUN4 (VAR2,
"" VAR13, VAR10);
FUN6 (VAR6);
VAR9 = VAR14;
break;
}
VAR9 = FUN7 (VAR8, VAR6);
FUN6 (VAR6);
break;
case VAR15:
case VAR16:

FUN6 (VAR6);
VAR9 = VAR17;
break;
default:
FUN4 (VAR2, "", FUN8 (VAR6));
VAR9 = FUN9 (VAR2, VAR4, VAR6);
break;
}

return VAR9;
}