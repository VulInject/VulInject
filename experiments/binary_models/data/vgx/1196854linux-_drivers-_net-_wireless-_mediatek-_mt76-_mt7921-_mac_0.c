static void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR6, u8 VAR7)
{
if (VAR7 > 180) {
VAR6->VAR8 = VAR9;
VAR7 = (VAR7 - 181) * 4 + 1;
} else if (VAR7 > 14) {
VAR6->VAR8 = VAR10;
} else {
VAR6->VAR8 = VAR11;
}
VAR6->VAR12 = FUN2(VAR7, VAR6->VAR8);
}