static int FUN1(struct VAR1 *VAR2, unsigned long VAR3,
unsigned long VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned int VAR7 = FUN3(VAR3, VAR4);
u32 VAR8;

VAR6->VAR7 = VAR7;

VAR8 = FUN4(VAR6->VAR9) & ~VAR10;

if (!(VAR8 & VAR11))
FUN5(VAR8 | FUN6(VAR6->VAR7 - 1), VAR6->VAR9);

return 0;
}