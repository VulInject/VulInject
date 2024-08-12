FUN1 (VAR1 **VAR2, VAR1 *VAR3, unsigned int VAR4)
{
bfd_byte VAR5;
bfd_vma VAR6;

if (!FUN2 (VAR2, VAR3, &VAR5))
return VAR7;

switch (VAR5 & 0xc0 ? VAR5 & 0xc0 : VAR5)
{
case VAR8:
case VAR9:
case VAR10:
case VAR11:
case VAR12:
case VAR13:

return VAR14;

case VAR15:
case VAR16:
case VAR17:
case VAR18:
case VAR19:
case VAR20:
case VAR21:
case VAR22:

return FUN3 (VAR2, VAR3);

case VAR23:
case VAR24:
case VAR25:
case VAR26:
case VAR27:
case VAR28:
case VAR29:
case VAR30:

return (FUN3 (VAR2, VAR3)
&& FUN3 (VAR2, VAR3));

case VAR31:

return (FUN4 (VAR2, VAR3, &VAR6)
&& FUN5 (VAR2, VAR3, VAR6));

case VAR32:
case VAR33:

return (FUN3 (VAR2, VAR3)
&& FUN4 (VAR2, VAR3, &VAR6)
&& FUN5 (VAR2, VAR3, VAR6));

case VAR34:
return FUN5 (VAR2, VAR3, VAR4);

case VAR35:
return FUN5 (VAR2, VAR3, 1);

case VAR36:
return FUN5 (VAR2, VAR3, 2);

case VAR37:
return FUN5 (VAR2, VAR3, 4);

case VAR38:
return FUN5 (VAR2, VAR3, 8);

default:
return VAR7;
}
}