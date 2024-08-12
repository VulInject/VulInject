static bool FUN1(struct VAR1 *VAR2, int VAR3,
struct VAR4 *VAR5)
{
struct VAR6 *VAR7;
struct VAR8 *VAR9 = FUN2(VAR2);

if (!FUN3(VAR2) ||
!(VAR2->VAR10.VAR11 & VAR12))
return false;

VAR7 = &VAR9->VAR13.VAR14.VAR15[VAR3];

if (VAR5->VAR16 != VAR17 &&
FUN4(VAR5->VAR18, VAR7->VAR19))
return true;

return false;
}