static void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
u32 VAR5, u32 VAR6, struct VAR7 *VAR8, u64 VAR9)
{
u32 VAR10 = (VAR9 >> 7) | 0x00000001; 
while (VAR6--) {
FUN2(VAR4, VAR2, VAR5++ * 4, VAR10);
VAR10 += 0x00000020;
}
}