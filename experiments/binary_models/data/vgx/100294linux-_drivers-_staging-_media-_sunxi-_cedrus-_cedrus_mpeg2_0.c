static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
u32 VAR5 = FUN2(VAR4, VAR6);

VAR5 &= ~VAR7;

FUN3(VAR4, VAR6, VAR5);
}