static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
u32 VAR5;

VAR5 = FUN2(VAR2->VAR6 + VAR7);

VAR5 &= ~(1 << VAR4->VAR8);
FUN3(VAR5, VAR2->VAR6 + VAR7);
}