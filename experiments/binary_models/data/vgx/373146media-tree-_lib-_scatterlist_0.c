static bool FUN1(struct VAR1 *VAR2)
{
if (!VAR2->VAR3) {
struct VAR4 *VAR5;
unsigned long VAR6;

if (!FUN2(&VAR2->VAR7))
return false;

VAR5 = VAR2->VAR7.VAR5;
VAR6 = VAR2->VAR7.VAR8;

VAR2->VAR9 = VAR6 ? 0 : VAR5->VAR10;
VAR2->VAR3 = VAR5->VAR10 + VAR5->VAR11 -
(VAR6 << VAR12) - VAR2->VAR9;
VAR2->VAR3 = FUN3(unsigned long, VAR2->VAR3,
VAR13 - VAR2->VAR9);
}

return true;
}