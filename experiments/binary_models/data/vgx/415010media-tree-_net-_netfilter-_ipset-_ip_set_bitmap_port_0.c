static bool
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
u16 VAR5, u16 VAR6)
{
VAR4->VAR7 = FUN2(VAR4->VAR8);
if (!VAR4->VAR7)
return false;
VAR4->VAR5 = VAR5;
VAR4->VAR6 = VAR6;
VAR2->VAR9 = VAR10;

VAR2->VAR11 = VAR4;
VAR2->VAR12 = VAR13;

return true;
}