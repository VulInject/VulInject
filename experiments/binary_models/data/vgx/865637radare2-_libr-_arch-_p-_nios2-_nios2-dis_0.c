FUN1 (bfd_vma VAR1, unsigned long VAR2,
VAR3 *VAR4)
{
const struct VAR5 *VAR6;

VAR4->VAR7 = VAR8;
VAR4->VAR9 = VAR8;
VAR4->VAR10 = VAR4->VAR11;
VAR4->VAR12 = 1;
VAR4->VAR13 = 0;
VAR4->VAR14 = 0;
VAR4->VAR15 = VAR16;
VAR4->VAR17 = 0;
VAR4->VAR18 = 0;


VAR6 = FUN2 (VAR2);

if (VAR6)
{
bfd_boolean VAR19 = VAR20;
if (VAR6->VAR21 == VAR22)
{

int VAR23, VAR24;
VAR23 = FUN3 (VAR25, VAR2);
VAR24 = FUN3 (VAR26, VAR2);
if (VAR23 == 0 && VAR24 == 0)
{
(*VAR4->VAR27) (VAR4->VAR28, "");
VAR19 = VAR29;
} else {
(*VAR4->VAR27) (VAR4->VAR28, "", VAR6->VAR30);
}
} else {
(*VAR4->VAR27) (VAR4->VAR28, "", VAR6->VAR30);
}

if (!VAR19)
{
const char *VAR31 = VAR6->VAR32;
if (VAR31 && *VAR31 != '')
{
(*VAR4->VAR27) (VAR4->VAR28, "");
while (*VAR31 != '')
{
FUN4 (VAR31, VAR2, VAR1, VAR4);
++VAR31;
}
}
}
}
else
{

VAR4->VAR15 = VAR33;
(*VAR4->VAR27) (VAR4->VAR28, "", VAR2);
}

return VAR8;
}