static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
const VAR8 *VAR9 = VAR7->VAR10;

FUN3(VAR9, (const VAR8 *) VAR5, (VAR8 *) VAR4);
}