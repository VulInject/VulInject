static int FUN1(struct VAR1 *VAR2, long VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2, struct VAR4,
VAR6);
struct VAR7 *VAR8 = &VAR5->VAR8;
int VAR9 = 0;
u64 VAR10;
u32 VAR11;

if (VAR3 < 0) {
VAR9 = 1;
VAR3 = -VAR3;
}
VAR10 = VAR3;
VAR10 <<= 13;
VAR10 = FUN3(VAR10, 15625);

VAR11 = VAR10 & VAR12;
if (VAR9)
VAR11 |= VAR13;

FUN4(VAR14, VAR11);

return 0;
}