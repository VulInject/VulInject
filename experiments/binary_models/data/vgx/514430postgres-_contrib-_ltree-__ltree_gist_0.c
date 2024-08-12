static bool
FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
VAR6 *VAR7 = FUN2(VAR4);
BITVECP		VAR8 = FUN3(VAR2);
int			VAR9 = VAR4->VAR10;

if (FUN4(VAR2))
return true;

while (VAR9 > 0)
{
if (VAR7->VAR11 && FUN5(VAR7))
{
bool		VAR12 = false;
int			VAR13 = VAR7->VAR11;
VAR14 *VAR15 = FUN6(VAR7);

while (VAR13 > 0)
{
if (FUN7(VAR8, FUN8(VAR15->VAR16, VAR5)))
{
VAR12 = true;
break;
}
VAR15 = FUN9(VAR15);
VAR13--;
}
if (!VAR12)
return false;
}

VAR7 = FUN10(VAR7);
VAR9--;
}

return true;
}