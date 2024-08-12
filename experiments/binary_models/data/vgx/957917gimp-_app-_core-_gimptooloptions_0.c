FUN1 (VAR1    *VAR2,
guint       VAR3,
VAR4     *VAR5,
VAR6 *VAR7)
{
VAR8 *VAR9 = FUN2 (VAR2);

switch (VAR3)
{
case VAR10:
FUN3 (VAR5, FUN4 (FUN5 (VAR9)));
break;

case VAR11:
FUN3 (VAR5, VAR9->VAR12);
break;

default:
FUN6 (VAR2, VAR3, VAR7);
break;
}
}