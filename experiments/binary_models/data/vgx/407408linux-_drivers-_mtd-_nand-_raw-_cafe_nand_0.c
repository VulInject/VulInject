static void FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);

FUN3(&VAR5->VAR6->VAR7, "", VAR3);


if (VAR3)
VAR5->VAR8 |= VAR9;
else
VAR5->VAR8 &= ~VAR9;
}