FUN1 (VAR1 *VAR2,
gint               VAR3)
{
VAR4 *VAR5 = FUN2 (VAR2);
VAR6                *VAR7;
VAR8                   *VAR9 = VAR5->VAR10;

FUN3 (FUN4 (VAR2), VAR11);

for (; VAR9; VAR9 = FUN5 (VAR9))
{
VAR7 = FUN6 (VAR9->VAR12);

if (FUN7 (FUN8 (VAR7), "") ==
FUN9 (VAR3))
{
if (! FUN10 (FUN11 (VAR7)))
FUN12 (FUN11 (VAR7), VAR13);

return VAR13;
}
}

return VAR11;
}