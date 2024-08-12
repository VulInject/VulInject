static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
u16 VAR5 = FUN2(VAR4, 16, VAR6) & 0x1fff;
FUN3(VAR2, "", VAR7, VAR5);
while (VAR5) {
FUN4(VAR2, VAR4);
VAR5 = FUN2(VAR4, 16, VAR6) & 0x1fff;
}
}