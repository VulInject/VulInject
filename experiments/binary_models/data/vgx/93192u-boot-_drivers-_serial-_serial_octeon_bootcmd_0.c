static int FUN1(struct VAR1 *VAR2, bool VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);

if (!VAR3)
return 0;

if (VAR5->VAR6)
return 1;

VAR7;
if (VAR5->VAR8->VAR9 != VAR10)
return 0;

if (VAR5->VAR8->VAR11 > VAR5->VAR12 &&
(VAR5->VAR8->VAR13[VAR5->VAR12] != ''))
return 1;

return 0;
}