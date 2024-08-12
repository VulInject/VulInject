static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = VAR2->VAR3;


FUN2(VAR3, VAR4, (1 << 8));
FUN2(VAR3, VAR5, 0);
FUN2(VAR3, VAR6, (1 << 8) << 16);
FUN2(VAR3, VAR7, 0);
FUN2(VAR3, VAR8, 0);
FUN2(VAR3, VAR9, (1 << 8));
}