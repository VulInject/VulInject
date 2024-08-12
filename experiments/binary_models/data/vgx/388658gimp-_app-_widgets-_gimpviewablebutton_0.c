FUN1 (VAR1      *VAR2,
guint         VAR3,
const VAR4 *VAR5,
VAR6   *VAR7)
{
VAR8 *VAR9 = FUN2 (VAR2);

switch (VAR3)
{
case VAR10:
FUN3 (VAR9, FUN4 (VAR5));
break;
case VAR11:
FUN5 (VAR9, FUN6 (VAR5));
break;
default:
FUN7 (VAR2, VAR3, VAR7);
break;
}
}