FUN1 (VAR1 *VAR2,
struct VAR3 *VAR4,
VAR5 *VAR6)
{
bfd_size_type VAR7;
VAR8 *VAR9;
VAR8 *VAR10;

*VAR6 = VAR11;

VAR7 = FUN2 (VAR2);
VAR9 = (VAR8 *) FUN3 (VAR2);
VAR10 = VAR9 + FUN4 (VAR2) * VAR7;
while (VAR9 < VAR10)
{
struct internal_syment VAR12;
enum coff_symbol_classification VAR13;

FUN5 (VAR2, VAR9, &VAR12);

VAR13 = FUN6 (VAR2, &VAR12);
if (VAR13 == VAR14
|| VAR13 == VAR15)
{
const char *VAR16;
char VAR17[VAR18 + 1];
struct VAR19 *VAR20;


VAR16 = FUN7 (VAR2, &VAR12, VAR17);
if (VAR16 == NULL)
return VAR11;
VAR20 = FUN8 (VAR4->VAR21, VAR16, VAR11, VAR11, VAR22);


if (!VAR20
&& VAR4->VAR23
&& !FUN9 (VAR16,"", 6))
VAR20 = FUN8 (VAR4->VAR21, VAR16 + 6, VAR11, VAR11, VAR22);


if (VAR20 != (struct VAR19 *) NULL
&& VAR20->VAR24 == VAR25)
{
if (! (*VAR4->VAR26->VAR27) (VAR4, VAR2, VAR16))
return VAR11;
*VAR6 = VAR22;
return VAR22;
}
}

VAR9 += (VAR12.VAR28 + 1) * VAR7;
}


return VAR22;
}