static void FUN1(struct VAR1 *VAR2, unsigned VAR3, int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned long VAR7;

FUN3(&VAR6->VAR8, VAR7);
if (VAR4)
VAR6->VAR9 |= 1 << VAR3;
else
VAR6->VAR9 &= ~(1 << VAR3);

FUN4(VAR6);
FUN5(VAR6, VAR10, VAR6->VAR9);
FUN6(VAR6);
FUN7(&VAR6->VAR8, VAR7);
}