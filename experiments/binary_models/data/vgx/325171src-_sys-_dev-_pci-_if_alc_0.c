void
FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
struct VAR6 *VAR7 = (struct VAR6 *)VAR2;

if (VAR3 != VAR7->VAR8)
return;

if ((VAR7->VAR9 & VAR10) != 0)
FUN2(VAR2, VAR3, VAR4, VAR5);
else
FUN3(VAR2, VAR3, VAR4, VAR5);
}