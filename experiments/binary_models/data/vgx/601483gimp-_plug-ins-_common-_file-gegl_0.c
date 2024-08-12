FUN1 (VAR1        *VAR2,
GimpRunMode           VAR3,
VAR4                *VAR5,
const VAR6 *VAR7,
gpointer              VAR8)
{
const VAR9 *VAR10 = VAR8;
VAR6   *VAR11;
VAR12        *VAR13;
VAR14           *VAR15  = NULL;

FUN2 (NULL, NULL);

VAR13 = FUN3 (VAR5, VAR10->VAR16, &VAR15);

if (! VAR13)
return FUN4 (VAR2,
VAR17,
VAR15);

VAR11 = FUN4 (VAR2,
VAR18,
NULL);

FUN5 (VAR11, 1, VAR13);

return VAR11;
}