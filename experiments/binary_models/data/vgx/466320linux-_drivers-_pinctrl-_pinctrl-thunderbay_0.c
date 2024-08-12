static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3, u32 VAR4)
{
struct VAR5 *VAR6 = &VAR2->VAR6;
u32 VAR7;

VAR7 = FUN2(VAR6, VAR3);
if (VAR4 > 0)
VAR7 |= VAR8;
else
VAR7 &= ~VAR8;

return FUN3(VAR6, VAR3, VAR7);
}