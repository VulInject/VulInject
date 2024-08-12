static void FUN1(struct VAR1 *VAR1, s8 VAR2,
u16 VAR3, u16 VAR4)
{
u32 VAR5, VAR6;

if (VAR2 == -1) {

VAR4 |= VAR7;
VAR6 = 0;
VAR5 = FUN2(VAR1, VAR8);
VAR5 &= ~(0xFF << VAR6);
VAR5 |= (VAR4 << VAR6);
FUN3(VAR1, VAR8, VAR5);
} else {

VAR4 |= VAR7;
VAR6 = ((16 * (VAR3 & 1)) + (8 * VAR2));
VAR5 = FUN2(VAR1, FUN4(VAR3 >> 1));
VAR5 &= ~(0xFF << VAR6);
VAR5 |= (VAR4 << VAR6);
FUN3(VAR1, FUN4(VAR3 >> 1), VAR5);
}
}