FUN1 (VAR1 *VAR2,
VAR3   *VAR4,
gint           VAR5,
gint           VAR6)
{
VAR7         *VAR8;
VAR9 *VAR10;

FUN2 (VAR2 == NULL || FUN3 (VAR2),
NULL);
FUN2 (VAR4 == NULL || FUN4 (VAR4), NULL);

VAR8 = FUN5 (VAR11, NULL);

VAR10 = FUN6 (VAR8);

FUN7 (VAR10, VAR5, VAR6);

if (VAR2)
FUN8 (VAR10, VAR2);

if (VAR4)
FUN9 (VAR10, VAR4);

return VAR8;
}