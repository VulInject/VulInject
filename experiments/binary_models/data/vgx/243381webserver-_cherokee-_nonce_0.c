FUN1 (VAR1 *VAR2,
VAR3      *VAR4)
{
ret_t    VAR5;
VAR6 *VAR7 = NULL;

FUN2 (&VAR2->VAR8);
VAR5 = FUN3 (&VAR2->VAR9, VAR4, (void **)&VAR7);
if (VAR5 == VAR10) {
FUN4 (VAR2, VAR7);
}
FUN5 (&VAR2->VAR8);

if (VAR5 != VAR10) return VAR11;
return VAR10;
}