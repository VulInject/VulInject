static VAR1 FUN1(struct VAR2 *VAR2, const char VAR3 *VAR4,
size_t VAR5, VAR6 *VAR7)
{
struct VAR8 *VAR9 = VAR2->VAR10;
struct VAR11 *VAR12 = FUN2(VAR9);


FUN3();
FUN4(VAR12);
VAR12->VAR13 &= ~VAR14;
FUN5();
FUN6(VAR9, true);

return VAR5;
}