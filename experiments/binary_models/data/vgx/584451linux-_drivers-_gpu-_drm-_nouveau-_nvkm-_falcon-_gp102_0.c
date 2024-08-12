static void
FUN1(struct VAR1 *VAR2, u8 VAR3, const VAR4 *VAR5, int VAR6)
{
while (VAR6 >= 4) {
*(VAR7 *)VAR5 = FUN2(VAR2, 0xac4 + (VAR3 * 8));
VAR5 += 4;
VAR6 -= 4;
}
}