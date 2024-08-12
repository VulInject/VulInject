FUN1 (VAR1 *VAR2, VAR3 *VAR4, void *VAR5)
{
VAR6 * VAR7;
VAR8 *VAR9;
bfd_size_type VAR10;
void *VAR11;

if ((VAR4->VAR12 & VAR13) != VAR13)
return;

VAR10 = FUN2 (VAR4);

if (VAR10 <= 0)
return;


VAR7 = (VAR6 *) VAR5;
VAR9 = & VAR7->VAR14;

if (*VAR9 == 0)
{
struct stat VAR15;

if (FUN3 (VAR2, &VAR15))
return;


*VAR9 = VAR15.VAR16;
}


if (VAR10 >= *VAR9)
return;

VAR11 = xmalloc (VAR10);

if (FUN4 (VAR2, VAR4, VAR11, (VAR17) 0, VAR10))
{
VAR18 = VAR19;

FUN5 (VAR7->VAR20, NULL, VAR4->VAR21,
0, VAR10, VAR11);
}

free (VAR11);
}