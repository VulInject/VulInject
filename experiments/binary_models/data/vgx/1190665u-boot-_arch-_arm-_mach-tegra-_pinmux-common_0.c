static void FUN1(enum pmux_pingrp VAR1, enum pmux_hsm VAR2)
{
VAR3 *VAR4 = FUN2(VAR5);
u32 VAR6;


if (VAR2 == VAR7)
return;


assert(FUN3(VAR1));
assert(FUN4(VAR2));

VAR6 = FUN5(VAR4);
if (VAR2 == VAR8)
VAR6 |= (1 << VAR9);
else
VAR6 &= ~(1 << VAR9);
FUN6(VAR6, VAR4);

return;
}