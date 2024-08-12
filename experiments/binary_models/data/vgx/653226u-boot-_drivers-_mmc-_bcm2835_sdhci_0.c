static void FUN1(struct VAR1 *VAR2, u16 VAR3, int VAR4)
{
static u32 VAR5;
u32 VAR6 = (VAR4 == VAR7) ? VAR5 :
FUN2(VAR2, VAR4 & ~3);
u32 VAR8 = (VAR4 >> 1) & 1;
u32 VAR9 = VAR8 * 16;
u32 VAR10 = 0xffff << VAR9;
u32 VAR11 = (VAR6 & ~VAR10) | (VAR3 << VAR9);

if (VAR4 == VAR12)
VAR5 = VAR11;
else
FUN3(VAR2, VAR11, VAR4 & ~3);
}