static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
u8 VAR6;

VAR6 = FUN3(VAR5->VAR7 + VAR8);
VAR6 &= ~(1 << VAR3);
FUN4(VAR6, VAR5->VAR7 + VAR8);

return 0;
}