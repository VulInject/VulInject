static int FUN1(struct VAR1 *VAR2, bool VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6;
struct VAR7 *VAR8 = &VAR5->VAR8;

FUN2(VAR8, VAR9, VAR3 ? VAR10 | VAR11 : 0);
FUN2(VAR8, VAR12, VAR13 | VAR14);
FUN2(VAR8, VAR15, VAR3);
if (VAR3)
FUN2(VAR8, VAR16, VAR17);
return 0;
}