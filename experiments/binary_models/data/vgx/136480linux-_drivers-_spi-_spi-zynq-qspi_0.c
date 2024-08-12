static void FUN1(struct VAR1 *VAR2, bool assert)
{
struct VAR3 *VAR4 = VAR2->VAR5;
struct VAR6 *VAR7 = FUN2(VAR4);
u32 VAR8;


if (VAR4->VAR9 > 1) {
VAR8 = FUN3(VAR7, VAR10);
if (!VAR2->VAR11)
VAR8 &= ~VAR12;
else
VAR8 |= VAR12;

FUN4(VAR7, VAR10, VAR8);
}


VAR8 = FUN3(VAR7, VAR13);
if (assert)
VAR8 &= ~VAR14;
else
VAR8 |= VAR14;

FUN4(VAR7, VAR13, VAR8);
}