static VAR1 FUN1(struct VAR2 *VAR2,
unsigned long VAR3,
unsigned long VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
unsigned long VAR8 = 1;

if (!VAR3)
return VAR9;

VAR8 = FUN2(VAR4, VAR3);
if (VAR8 > VAR10 + 1 || !VAR8)
return VAR9;

FUN3(VAR6->VAR11 + VAR12, VAR13,
(VAR8 - 1) << VAR14);

return VAR15;
}