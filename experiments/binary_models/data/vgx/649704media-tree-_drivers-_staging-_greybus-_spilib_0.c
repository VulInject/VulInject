static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR6;

if (VAR4->VAR7 != VAR8)
return 0;


if (FUN2(VAR2)) {
VAR2->VAR9 = 0;
VAR2->VAR10 = 0;
VAR2->VAR11 = 0;
if (VAR6 == FUN3(&VAR4->VAR12,
struct VAR5,
VAR13))
VAR4->VAR7 = VAR14;
else
VAR2->VAR15 = FUN4(VAR6,
VAR13);
return 0;
}

VAR2->VAR15 = VAR6;
if (VAR6->VAR16)
VAR2->VAR9 += VAR2->VAR17;

if (VAR6->VAR18)
VAR2->VAR10 += VAR2->VAR17;

return 0;
}