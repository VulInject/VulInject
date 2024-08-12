FUN1 (VAR1 *VAR2,
VAR3      *VAR4)
{
ret_t    VAR5;
VAR6 *VAR7 = NULL;

if (FUN2 (VAR4))
return VAR8;

FUN3 (&VAR2->VAR9);
VAR5 = FUN4 (&VAR2->VAR10, VAR4, (void **)&VAR7);
FUN5 (&VAR2->VAR9);

if ((VAR5 != VAR11) || (VAR7 == NULL))
return VAR8;

VAR7->VAR12 = VAR13;
return VAR11;
}