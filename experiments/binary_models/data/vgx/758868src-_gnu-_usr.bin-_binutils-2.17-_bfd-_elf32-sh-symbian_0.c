bfd_boolean FUN1 (struct VAR1 *VAR2, VAR3 * VAR4);

VAR5
FUN1 (struct VAR1 *VAR2, VAR3 * VAR4)
{
bfd_boolean VAR6 = VAR7;
VAR8 *  VAR9;
VAR10 *  VAR11 = FUN2 (VAR4, "");
bfd_size_type VAR12;

if (!VAR11)
return VAR13;

VAR12 = VAR11->VAR14 ? VAR11->VAR14 : VAR11->VAR15;
VAR9 = FUN3 (VAR12);

if (!VAR9)
FUN4 (VAR16);
else 
{
if (FUN5 (VAR4, VAR11, VAR9, 0, VAR12))
VAR6 = FUN6 (VAR2, VAR4, VAR11, VAR9);
free (VAR9);
}

return VAR6;
}