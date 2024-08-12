static int
FUN1(struct VAR1 *VAR2, unsigned int VAR3, int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
const struct VAR7 *VAR8 = FUN3(VAR3);
u32 VAR9 = FUN4(FUN5(VAR6, VAR8, VAR10));

if (VAR4)
VAR9 |= FUN6(VAR3);
else
VAR9 &= ~FUN6(VAR3);

FUN7(VAR9, FUN5(VAR6, VAR8, VAR11));

return 0;
}