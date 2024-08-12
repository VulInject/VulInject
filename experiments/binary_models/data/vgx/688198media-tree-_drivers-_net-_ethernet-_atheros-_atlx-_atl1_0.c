static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, u16 VAR5)
{
struct VAR6 *VAR7 = &VAR2->VAR7;

while (VAR7->VAR8 != (VAR4->VAR9 + VAR5)) {
VAR7->VAR10[VAR7->VAR8].VAR11 = 0;
if (++VAR7->VAR8 == VAR7->VAR12) {
VAR7->VAR8 = 0;
}
}
}