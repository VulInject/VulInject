static void FUN1(struct VAR1 *VAR2, unsigned VAR3, int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
void VAR7 *VAR8 = VAR6->VAR9;
u32 VAR10;

VAR10 = FUN3(VAR8 + VAR11);
VAR10 &= ~(1 << VAR3);
if (VAR4)
VAR10 |= 1 << VAR3;
FUN4(VAR10, VAR8 + VAR11);
}