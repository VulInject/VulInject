static void FUN1(struct VAR1 *VAR2,
bool VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
u32 VAR6;

VAR6 = FUN3(VAR7);
if (VAR3) {
VAR6 &= ~VAR8;
VAR6 |= FUN4(1);
VAR6 |= VAR9;
} else {
if (!VAR5->VAR10) {
VAR6 &= ~VAR8;
VAR6 &= ~VAR9;
}
}
if ((VAR6 & VAR11) ||
(VAR6 & VAR12))
FUN5(VAR7, VAR6);

}