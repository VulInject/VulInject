static void FUN1(u8 VAR1)
{
u8 VAR2;
if (VAR1 < 8) {
VAR2 = FUN2(VAR3[4]);
VAR2 &= ~VAR4;
VAR2 |= (VAR1 << VAR5);
FUN3(VAR3[4], VAR2);
}
}