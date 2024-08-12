FUN1 (void)
{
char *VAR1;
struct stat VAR2;
struct VAR3 *VAR4;
gid_t VAR5;


VAR1 = FUN2 (VAR6);
if (VAR1 == NULL)
return VAR7 == VAR8 ? VAR9 : VAR10;


if (FUN3 (VAR1, &VAR2) < 0 || !FUN4 (VAR2.VAR11))
return VAR10;


VAR4 = FUN5 (VAR12);
VAR5 = VAR4 ? VAR4->VAR13 : FUN6 ();


if (VAR2.VAR14 != VAR5 && chown (VAR1, FUN7 (), VAR5) < 0)
return VAR15;


if ((VAR2.VAR11 & (VAR16|VAR17|VAR18)) != (VAR19|VAR20|VAR21)
&& chmod (VAR1, VAR19|VAR20|VAR21) < 0)
return VAR15;

return 0;
}