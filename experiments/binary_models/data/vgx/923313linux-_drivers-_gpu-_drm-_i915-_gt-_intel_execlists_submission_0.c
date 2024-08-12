static bool FUN1(const struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
int VAR5;

if (!FUN2(VAR2))
return false;


VAR5 = FUN3(FUN4(VAR4), VAR6 - 1);
if (VAR2->VAR7->VAR8 <= VAR5)
return false;


if (!FUN5(&VAR4->VAR9.VAR10, &VAR2->VAR7->VAR11) &&
FUN6(FUN7(VAR4, VAR9.VAR10)) > VAR5)
return true;


return FUN3(FUN8(&VAR2->VAR12),
FUN9(VAR2->VAR7)) > VAR5;
}